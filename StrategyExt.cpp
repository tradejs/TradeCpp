#include "StdAfx.h"
#include "StrategyExt.h"
#include "util.h"

#include <algorithm>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CCompositeStrategy::CCompositeStrategy(void)
{
}


CCompositeStrategy::~CCompositeStrategy(void)
{
}

typedef std::pair<CBasketPtr, std::string> basketstringpair;
void CCompositeStrategy::doTrade(COption* tradeMonth)
{
	UNUSED_ALWAYS(tradeMonth);

    //매도 조건
    doSell(tradeMonth);

    //improve!! 강제청산과 만기청산은 사실 시간에서 이루어 져야 한다.
    //강제청산
	BasketPtrListIter i=basketList.begin();
	while( i!=basketList.end() )
	//for( BasketPtrListIter i=basketList.begin(); i!=basketList.end(); i++)
    {
		CBasketPtr& bs = *i;
		i++;
		for (std::list<CStopTradeBase*>::iterator stb=_stopTradeList.begin(); stb!=_stopTradeList.end(); stb++)
        {
			CStopTradeBase* pStop = *stb;
            if (pStop->IsExit(bs.get()) )
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
        //for( BasketPtrListIter i=basketList.begin(); i!=basketList.end(); i++)
		BasketPtrListIter i=basketList.begin();
		while( i!=basketList.end() )
        {
			CBasketPtr& bs = *i;
			i++;
            ExitBasket(bs, _T("종목만기") );/**/
			//templist.push_back(basketstringpair(*i,_T("종목만기")));
        }

        return;
    }

    // 매수 조건
    doBuy(tradeMonth);
}
