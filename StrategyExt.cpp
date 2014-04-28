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

    //�ŵ� ����
    doSell(tradeMonth);

    //improve!! ����û��� ����û���� ��� �ð����� �̷�� ���� �Ѵ�.
    //����û��
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

    //����û��
	stime time = CURRENT_TIME;
	if (time.GetHour() == 14 && time.GetMinute() == 50 && util::IsLimitDay(time))
    {
        //for( BasketPtrListIter i=basketList.begin(); i!=basketList.end(); i++)
		BasketPtrListIter i=basketList.begin();
		while( i!=basketList.end() )
        {
			CBasketPtr& bs = *i;
			i++;
            ExitBasket(bs, _T("���񸸱�") );/**/
			//templist.push_back(basketstringpair(*i,_T("���񸸱�")));
        }

        return;
    }

    // �ż� ����
    doBuy(tradeMonth);
}
