#ifndef _CEXAQ31100_H_
#define _CEXAQ31100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������ �߰����ܰ�� ����Ȳ ( SERVICE=CEXAQ31100,headtype=B,CREATOR=�̽���,CREDATE=2012/06/26 14 )
#pragma pack( push, 1 )

#define NAME_CEXAQ31100     "CEXAQ31100"

// In(*EMPTY*)                    
typedef struct _CEXAQ31100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
    char    IsuCode             [  12];    // [string,   12] �����ڵ�                        StartPos 33, Length 12
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���                    StartPos 45, Length 1
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���                StartPos 46, Length 1
} CEXAQ31100InBlock1, *LPCEXAQ31100InBlock1;
#define NAME_CEXAQ31100InBlock1     "CEXAQ31100InBlock1"

// In(*EMPTY*)                    
typedef struct _CEXAQ31100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
    char    IsuCode             [  12];    // [string,   12] �����ڵ�                        StartPos 33, Length 12
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���                    StartPos 45, Length 1
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���                StartPos 46, Length 1
} CEXAQ31100OutBlock1, *LPCEXAQ31100OutBlock1;
#define NAME_CEXAQ31100OutBlock1     "CEXAQ31100OutBlock1"

// Out1(*EMPTY*)                  
typedef struct _CEXAQ31100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 25, Length 40
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 65, Length 16
    char    TotEvalAmt          [  16];    // [long  ,   16] ���򰡱ݾ�                      StartPos 81, Length 16
    char    TotPnlAmt           [  16];    // [long  ,   16] �Ѽ��ͱݾ�                      StartPos 97, Length 16
} CEXAQ31100OutBlock2, *LPCEXAQ31100OutBlock2;
#define NAME_CEXAQ31100OutBlock2     "CEXAQ31100OutBlock2"

// Out2(*EMPTY*)                  , occurs
typedef struct _CEXAQ31100OutBlock3
{
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 0, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 12, Length 40
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 52, Length 1
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 53, Length 10
    char    UnsttQty            [  16];    // [long  ,   16] �̰�������                      StartPos 63, Length 16
    char    LqdtAbleQty         [  16];    // [long  ,   16] û�갡�ɼ���                    StartPos 79, Length 16
    char    FnoAvrPrc           [  19];    // [double, 19.8] ��հ�                          StartPos 95, Length 19
    char    NowPrc              [  13];    // [double, 13.2] ���簡                          StartPos 114, Length 13
    char    CmpPrc              [  13];    // [double, 13.2] ���                          StartPos 127, Length 13
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�                        StartPos 140, Length 16
    char    EvalPnl             [  16];    // [long  ,   16] �򰡼���                        StartPos 156, Length 16
    char    PnlRat              [  12];    // [double, 12.6] ���ͷ�                          StartPos 172, Length 12
    char    UnsttAmt            [  16];    // [long  ,   16] �̰����ݾ�                      StartPos 184, Length 16
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 200, Length 16
} CEXAQ31100OutBlock3, *LPCEXAQ31100OutBlock3;
#define NAME_CEXAQ31100OutBlock3     "CEXAQ31100OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CEXAQ31100_H_
