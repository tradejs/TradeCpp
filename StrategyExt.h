#pragma once
#include "strategybase.h"
#include "util.h"
#include "CurrentTime.h"

#include <map>
static stime nulltime = stime(1950,0,0,0,0,0);

class CCompositeStrategy : public CStrategyBase
{
public:
	CCompositeStrategy(void);
	virtual ~CCompositeStrategy(void);

protected:
	virtual BOOL doBuy(COption* tradeMonth) = 0;
    virtual BOOL doSell(COption* tradeMonth) = 0;
        
public:
	virtual void doTrade(COption* tradeMonth);
	virtual void OnMasterUpdated(){}
        
};


class empty
{
};

template <class T=empty>
class CSingleStrategy : public CStrategyBase
{   


protected:
    COption* _pCurrentOption;
	
private:
	std::map<COption*, std::shared_ptr<T> > _paramDic;

protected:
    CBasketPtr GetBasket()
	{    
		for ( std::list<CBasketPtr>::iterator i = basketList.begin(); i!=basketList.end(); i++ )
		{
			if ( i->get()->begin()->pOption == _pCurrentOption)
				return *i;
		}
		
		return CBasketPtr();
	}
    void Enter(int nCount, double /*dPrice*/)
	{
		if ( nCount==0 )
			return;

	    CBasketPtr bs = GetBasket();
	    if (bs != NULL)
	    {
	        Add2Basket(bs, _pCurrentOption, nCount);
	    }
	    else
	    {                
	        CBasketPtr basket( new CBasket(GetStrategyName()) );
	        basket->AddJong(_pCurrentOption, nCount);
	        EnterBasket(basket);
	    }
	}
    void Enter(int nCount)
	{
	    Enter(nCount, _pCurrentOption->current);
	}
    void Exit(int nCount, LPCTSTR Memo)
	{
	    CBasketPtr bs = GetBasket();
	    ASSERT(bs != NULL);

		if (bs->begin()->nRemainCount == nCount)
	        ExitBasket(bs, Memo);
	    else
	        Del2Basket(bs, _pCurrentOption, nCount);
	}
	
	double GetCurrentProfit(BOOL bCalcBrokerage)
	{
	    CBasketPtr bs = GetBasket();
	    if (bs == NULL)
	    {
	        ASSERT(FALSE);
	        return 0.0;
	    }

		return bs->GetCurrentProfit(bCalcBrokerage);
	}

    double GetEntryPrice()
	{
	    CBasketPtr bs = GetBasket();
	    if (bs == NULL)
	    {
	        ASSERT(FALSE);
	        return 0.0;
	    }

	    return bs->begin()->entryPrice;
	}

    stime& GetEntryTime()
	{
	    CBasketPtr bs = GetBasket();
	    if (bs == NULL)
	    {
	        ASSERT(FALSE);
	        return nulltime;
	    }

	    return bs->entryTime;
	}

	int GetCountByMoney(double nMoney)
	{
		return (int)(nMoney / _pCurrentOption->GetCountByMoney(nMoney));
	}

	T* GetParam()
	{
		T* param = NULL;
		auto iter = _paramDic.find(_pCurrentOption);
		if ( iter == _paramDic.end() )
	    {		
			std::shared_ptr<T> _t(new T);
			_paramDic.insert( std::pair<COption*, std::shared_ptr<T> >(_pCurrentOption, _t) );
			param = _t.get();
	    }
		else
		{
			param = iter->second.get();
		}

		return param;
	}

    virtual void doSingleBuy(COption* month, int nCount)=0;
    virtual void doSingleSell(COption* month, int nCount)=0;
 	

public:
    void doTrade(COption* tradeMonth)
	{
	    if (tradeMonth == NULL)
	    {
			COptionCarrier* pMonthTable = getOptionTable();
			for(auto i=pMonthTable->CallIterBegin(); i!=pMonthTable->CallIterEnd(); ++i)
				OnChangeBase( i->get() );
			
			for(auto j=pMonthTable->PutIterBegin(); j!=pMonthTable->PutIterEnd(); ++j)
				OnChangeBase( j->get() );
	    }
	    else
	    {
	        OnChangeBase(tradeMonth);
	    }
	}

	void ClearParameter()
	{
	    _paramDic.clear();
	}

	void OnMasterUpdated()
	{
		COptionCarrier* pMonthTable = getOptionTable();
		for(auto i=pMonthTable->CallIterBegin(); i!=pMonthTable->CallIterEnd(); ++i)
			OnMasterUpdatedforSingle( i->get() );

		for(auto j=pMonthTable->PutIterBegin(); j!=pMonthTable->PutIterEnd(); ++j)
			OnMasterUpdatedforSingle( j->get() );
	}

	virtual void OnMasterUpdatedforSingle(COption* pOption){UNUSED_ALWAYS(pOption);}
   
private:
	void OnChangeBase(COption* month)
	{
	    _pCurrentOption = month;

	    //강제청산
		BasketPtrListIter i=basketList.begin();
		while( i!=basketList.end() )
	    {
			CBasketPtr& bs = *i;
			i++;
			for (std::list<CStopTradeBase*>::iterator stb=_stopTradeList.begin(); stb!=_stopTradeList.end(); stb++)
	        {
				CStopTradeBase* pStop = *stb;
	            if (pStop->IsExit(bs.get()))
	            {
					ExitBasket(bs, pStop->GetStopTradeName());
					break;
				}
	        }

	    }

	    //만기청산
		stime time = CURRENT_TIME;
		if (time.GetHour() == 14 && time.GetMinute() == 50 && util::IsLimitDay(time))
	    {
	        for( std::list<CBasketPtr>::iterator i=basketList.begin(); i!=basketList.end(); i++)
	        {
	            ExitBasket(*i, _T("종목만기"));/**/
	        }

	        return;
	    }

	    CBasketPtr bs1 = GetBasket();
	    if( bs1!=NULL)
			doSingleSell(month, bs1->begin()->nRemainCount);

	    doSingleBuy(month, bs1 == NULL ? 0 : bs1->begin()->nRemainCount);

	}
};