#ifndef _CEXAQ31200_H_
#define _CEXAQ31200_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������ ��Ź�� �� �����ܰ���ȸ ( SERVICE=CEXAQ31200,headtype=B,CREATOR=�̽���,CREDATE=2012/06/26 14 )
#pragma pack( push, 1 )

#define NAME_CEXAQ31200     "CEXAQ31200"

// In(*EMPTY*)                    
typedef struct _CEXAQ31200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���                    StartPos 33, Length 1
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���                StartPos 34, Length 1
} CEXAQ31200InBlock1, *LPCEXAQ31200InBlock1;
#define NAME_CEXAQ31200InBlock1     "CEXAQ31200InBlock1"

// In(*EMPTY*)                    
typedef struct _CEXAQ31200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���                    StartPos 33, Length 1
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���                StartPos 34, Length 1
} CEXAQ31200OutBlock1, *LPCEXAQ31200OutBlock1;
#define NAME_CEXAQ31200OutBlock1     "CEXAQ31200OutBlock1"

// Out1(*EMPTY*)                  
typedef struct _CEXAQ31200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 25, Length 40
    char    EvalDpsamtTotamt    [  15];    // [long  ,   15] �򰡿�Ź���Ѿ�                  StartPos 65, Length 15
    char    MnyEvalDpstgAmt     [  15];    // [long  ,   15] �����򰡿�Ź�ݾ�                StartPos 80, Length 15
    char    DpsamtTotamt        [  16];    // [long  ,   16] ��Ź���Ѿ�                      StartPos 95, Length 16
    char    DpstgMny            [  16];    // [long  ,   16] ��Ź����                        StartPos 111, Length 16
    char    PsnOutAbleTotAmt    [  15];    // [long  ,   15] ���Ⱑ���ѱݾ�                  StartPos 127, Length 15
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] ���Ⱑ�����ݾ�                  StartPos 142, Length 16
    char    OrdAbleTotAmt       [  15];    // [long  ,   15] �ֹ������ѱݾ�                  StartPos 158, Length 15
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 173, Length 16
    char    CsgnMgnTotamt       [  16];    // [long  ,   16] ��Ź���ű��Ѿ�                  StartPos 189, Length 16
    char    MnyCsgnMgn          [  16];    // [long  ,   16] ������Ź���űݾ�                StartPos 205, Length 16
    char    AddMgnTotamt        [  15];    // [long  ,   15] �߰����ű��Ѿ�                  StartPos 221, Length 15
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�                StartPos 236, Length 16
    char    CmsnAmt             [  16];    // [long  ,   16] ������                          StartPos 252, Length 16
    char    FutsEvalPnlAmt      [  16];    // [long  ,   16] �����򰡼��ͱݾ�                StartPos 268, Length 16
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�                StartPos 284, Length 16
    char    OptEvalAmt          [  16];    // [long  ,   16] �ɼ��򰡱ݾ�                    StartPos 300, Length 16
    char    OptBnsplAmt         [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 316, Length 16
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������                    StartPos 332, Length 16
    char    TotPnlAmt           [  16];    // [long  ,   16] �Ѽ��ͱݾ�                      StartPos 348, Length 16
    char    NetPnlAmt           [  16];    // [long  ,   16] �����ͱݾ�                      StartPos 364, Length 16
    char    TotEvalAmt          [  16];    // [long  ,   16] ���򰡱ݾ�                      StartPos 380, Length 16
    char    MnyinAmt            [  16];    // [long  ,   16] �Աݱݾ�                        StartPos 396, Length 16
    char    MnyoutAmt           [  16];    // [long  ,   16] ��ݱݾ�                        StartPos 412, Length 16
} CEXAQ31200OutBlock2, *LPCEXAQ31200OutBlock2;
#define NAME_CEXAQ31200OutBlock2     "CEXAQ31200OutBlock2"

// Out2(*EMPTY*)                  , occurs
typedef struct _CEXAQ31200OutBlock3
{
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 0, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 12, Length 40
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 52, Length 1
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 53, Length 10
    char    UnsttQty            [  16];    // [long  ,   16] �̰�������                      StartPos 63, Length 16
    char    FnoAvrPrc           [  19];    // [double, 19.8] ��հ�                          StartPos 79, Length 19
    char    NowPrc              [  13];    // [double, 13.2] ���簡                          StartPos 98, Length 13
    char    CmpPrc              [  13];    // [double, 13.2] ���                          StartPos 111, Length 13
    char    EvalPnl             [  16];    // [long  ,   16] �򰡼���                        StartPos 124, Length 16
    char    PnlRat              [  12];    // [double, 12.6] ���ͷ�                          StartPos 140, Length 12
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�                        StartPos 152, Length 16
} CEXAQ31200OutBlock3, *LPCEXAQ31200OutBlock3;
#define NAME_CEXAQ31200OutBlock3     "CEXAQ31200OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CEXAQ31200_H_
