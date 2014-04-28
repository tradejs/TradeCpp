#ifndef _CFOFQ02400_H_
#define _CFOFQ02400_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ���� �̰��� ������Ȳ(��հ�) ( CFOET00300 )
#pragma pack( push, 1 )

#define NAME_CFOFQ02400     "CFOFQ02400"

// In(*EMPTY*)                    
typedef struct _CFOFQ02400InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    RegMktCode          [   2];    // [string,    2] ��Ͻ����ڵ�                    StartPos 33, Length 2
    char    BuyDt               [   8];    // [string,    8] �ż�����                        StartPos 35, Length 8
} CFOFQ02400InBlock1, *LPCFOFQ02400InBlock1;
#define NAME_CFOFQ02400InBlock1     "CFOFQ02400InBlock1"

// In(*EMPTY*)                    
typedef struct _CFOFQ02400OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    RegMktCode          [   2];    // [string,    2] ��Ͻ����ڵ�                    StartPos 33, Length 2
    char    BuyDt               [   8];    // [string,    8] �ż�����                        StartPos 35, Length 8
} CFOFQ02400OutBlock1, *LPCFOFQ02400OutBlock1;
#define NAME_CFOFQ02400OutBlock1     "CFOFQ02400OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CFOFQ02400OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    FutsCtrctQty        [  16];    // [long  ,   16] ������������                    StartPos 45, Length 16
    char    OptCtrctQty         [  16];    // [long  ,   16] �ɼǾ�������                    StartPos 61, Length 16
    char    CtrctQty            [  16];    // [long  ,   16] ��������                        StartPos 77, Length 16
    char    FutsCtrctAmt        [  16];    // [long  ,   16] ���������ݾ�                    StartPos 93, Length 16
    char    FutsBuyctrAmt       [  16];    // [long  ,   16] �����ż������ݾ�                StartPos 109, Length 16
    char    FutsSlctrAmt        [  16];    // [long  ,   16] �����ŵ������ݾ�                StartPos 125, Length 16
    char    CalloptCtrctAmt     [  16];    // [long  ,   16] �ݿɼǾ����ݾ�                  StartPos 141, Length 16
    char    CallBuyAmt          [  16];    // [long  ,   16] �ݸż��ݾ�                      StartPos 157, Length 16
    char    CallSellAmt         [  16];    // [long  ,   16] �ݸŵ��ݾ�                      StartPos 173, Length 16
    char    PutoptCtrctAmt      [  16];    // [long  ,   16] ǲ�ɼǾ����ݾ�                  StartPos 189, Length 16
    char    PutBuyAmt           [  16];    // [long  ,   16] ǲ�ż��ݾ�                      StartPos 205, Length 16
    char    PutSellAmt          [  16];    // [long  ,   16] ǲ�ŵ��ݾ�                      StartPos 221, Length 16
    char    AllCtrctAmt         [  16];    // [long  ,   16] ��ü�����ݾ�                    StartPos 237, Length 16
    char    BuyctrAsmAmt        [  16];    // [long  ,   16] �ż���������ݾ�                StartPos 253, Length 16
    char    SlctrAsmAmt         [  16];    // [long  ,   16] �ŵ���������ݾ�                StartPos 269, Length 16
    char    FutsPnlSum          [  16];    // [long  ,   16] ���������հ�                    StartPos 285, Length 16
    char    OptPnlSum           [  16];    // [long  ,   16] �ɼǼ����հ�                    StartPos 301, Length 16
    char    AllPnlSum           [  16];    // [long  ,   16] ��ü�����հ�                    StartPos 317, Length 16
} CFOFQ02400OutBlock2, *LPCFOFQ02400OutBlock2;
#define NAME_CFOFQ02400OutBlock2     "CFOFQ02400OutBlock2"

// Out2(*EMPTY*)                  , occurs
typedef struct _CFOFQ02400OutBlock3
{
    char    FnoClssCode         [   1];    // [string,    1] �����ɼ�ǰ�񱸺�                StartPos 0, Length 1
    char    FutsSellQty         [  16];    // [long  ,   16] �����ŵ�����                    StartPos 1, Length 16
    char    FutsSellPnl         [  16];    // [long  ,   16] �����ŵ�����                    StartPos 17, Length 16
    char    FutsBuyQty          [  16];    // [long  ,   16] �����ż�����                    StartPos 33, Length 16
    char    FutsBuyPnl          [  16];    // [long  ,   16] �����ż�����                    StartPos 49, Length 16
    char    CallSellQty         [  16];    // [long  ,   16] �ݸŵ�����                      StartPos 65, Length 16
    char    CallSellPnl         [  16];    // [long  ,   16] �ݸŵ�����                      StartPos 81, Length 16
    char    CallBuyQty          [  16];    // [long  ,   16] �ݸż�����                      StartPos 97, Length 16
    char    CallBuyPnl          [  16];    // [long  ,   16] �ݸż�����                      StartPos 113, Length 16
    char    PutSellQty          [  16];    // [long  ,   16] ǲ�ŵ�����                      StartPos 129, Length 16
    char    PutSellPnl          [  16];    // [long  ,   16] ǲ�ŵ�����                      StartPos 145, Length 16
    char    PutBuyQty           [  16];    // [long  ,   16] ǲ�ż�����                      StartPos 161, Length 16
    char    PutBuyPnl           [  16];    // [long  ,   16] ǲ�ż�����                      StartPos 177, Length 16
} CFOFQ02400OutBlock3, *LPCFOFQ02400OutBlock3;
#define NAME_CFOFQ02400OutBlock3     "CFOFQ02400OutBlock3"

// Out3(*EMPTY*)                  , occurs
typedef struct _CFOFQ02400OutBlock4
{
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 0, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 12, Length 40
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 52, Length 1
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 53, Length 10
    char    BalQty              [  16];    // [long  ,   16] �ܰ����                        StartPos 63, Length 16
    char    FnoAvrPrc           [  19];    // [double, 19.8] ��հ�                          StartPos 79, Length 19
    char    BgnAmt              [  16];    // [long  ,   16] ���ʱݾ�                        StartPos 98, Length 16
    char    ThdayLqdtQty        [  16];    // [long  ,   16] ����û�����                    StartPos 114, Length 16
    char    Curprc              [  13];    // [double, 13.2] ���簡                          StartPos 130, Length 13
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�                        StartPos 143, Length 16
    char    EvalPnlAmt          [  16];    // [long  ,   16] �򰡼��ͱݾ�                    StartPos 159, Length 16
    char    EvalErnrat          [  12];    // [double, 12.6] �򰡼��ͷ�                      StartPos 175, Length 12
} CFOFQ02400OutBlock4, *LPCFOFQ02400OutBlock4;
#define NAME_CFOFQ02400OutBlock4     "CFOFQ02400OutBlock4"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CFOFQ02400_H_
