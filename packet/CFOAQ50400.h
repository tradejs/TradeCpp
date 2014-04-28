#ifndef _CFOAQ50400_H_
#define _CFOAQ50400_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� �����ܰ� �� ����Ȳ2 ( ENCRYPT,SERVICE=CFOAQ50400,headtype=B,CREATOR=�����,CREDATE=2012/03/12 15 )
#pragma pack( push, 1 )

#define NAME_CFOAQ50400     "CFOAQ50400"

// In(*EMPTY*)                    
typedef struct _CFOAQ50400InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    OrdDt               [   8];    // [string,    8] �ֹ���                          StartPos 33, Length 8
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���                    StartPos 41, Length 1
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���                StartPos 42, Length 1
    char    LqdtQtyQryTp        [   1];    // [string,    1] û�������ȸ����                StartPos 43, Length 1
} CFOAQ50400InBlock1, *LPCFOAQ50400InBlock1;
#define NAME_CFOAQ50400InBlock1     "CFOAQ50400InBlock1"

// In(*EMPTY*)                    
typedef struct _CFOAQ50400OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    OrdDt               [   8];    // [string,    8] �ֹ���                          StartPos 33, Length 8
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���                    StartPos 41, Length 1
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���                StartPos 42, Length 1
    char    LqdtQtyQryTp        [   1];    // [string,    1] û�������ȸ����                StartPos 43, Length 1
} CFOAQ50400OutBlock1, *LPCFOAQ50400OutBlock1;
#define NAME_CFOAQ50400OutBlock1     "CFOAQ50400OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CFOAQ50400OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    EvalDpsamtTotamt    [  15];    // [long  ,   15] �򰡿�Ź���Ѿ�                  StartPos 45, Length 15
    char    MnyEvalDpstgAmt     [  15];    // [long  ,   15] �����򰡿�Ź�ݾ�                StartPos 60, Length 15
    char    DpsamtTotamt        [  16];    // [long  ,   16] ��Ź���Ѿ�                      StartPos 75, Length 16
    char    DpstgMny            [  16];    // [long  ,   16] ��Ź����                        StartPos 91, Length 16
    char    DpstgSubst          [  16];    // [long  ,   16] ��Ź���                        StartPos 107, Length 16
    char    FcurrSubstAmt       [  16];    // [long  ,   16] ��ȭ���ݾ�                    StartPos 123, Length 16
    char    PsnOutAbleTotAmt    [  15];    // [long  ,   15] ���Ⱑ���ѱݾ�                  StartPos 139, Length 15
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] ���Ⱑ�����ݾ�                  StartPos 154, Length 16
    char    PsnOutAbleSubstAmt  [  16];    // [long  ,   16] ���Ⱑ�ɴ��ݾ�                StartPos 170, Length 16
    char    OrdAbleTotAmt       [  15];    // [long  ,   15] �ֹ������ѱݾ�                  StartPos 186, Length 15
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 201, Length 16
    char    CsgnMgnTotamt       [  16];    // [long  ,   16] ��Ź���ű��Ѿ�                  StartPos 217, Length 16
    char    MnyCsgnMgn          [  16];    // [long  ,   16] ������Ź���űݾ�                StartPos 233, Length 16
    char    MtmgnTotamt         [  15];    // [long  ,   15] �������ű��Ѿ�                  StartPos 249, Length 15
    char    MnyMaintMgn         [  16];    // [long  ,   16] �����������űݾ�                StartPos 264, Length 16
    char    AddMgnTotamt        [  15];    // [long  ,   15] �߰����ű��Ѿ�                  StartPos 280, Length 15
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�                StartPos 295, Length 16
    char    CmsnAmt             [  16];    // [long  ,   16] ������                          StartPos 311, Length 16
    char    RcvblAmt            [  16];    // [long  ,   16] �̼��ݾ�                        StartPos 327, Length 16
    char    RcvblOdpnt          [  16];    // [long  ,   16] �̼���ü��                      StartPos 343, Length 16
    char    FutsEvalPnlAmt      [  16];    // [long  ,   16] �����򰡼��ͱݾ�                StartPos 359, Length 16
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�                StartPos 375, Length 16
    char    OptEvalAmt          [  16];    // [long  ,   16] �ɼ��򰡱ݾ�                    StartPos 391, Length 16
    char    OptBnsplAmt         [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 407, Length 16
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������                    StartPos 423, Length 16
    char    TotPnlAmt           [  16];    // [long  ,   16] �Ѽ��ͱݾ�                      StartPos 439, Length 16
    char    NetPnlAmt           [  16];    // [long  ,   16] �����ͱݾ�                      StartPos 455, Length 16
} CFOAQ50400OutBlock2, *LPCFOAQ50400OutBlock2;
#define NAME_CFOAQ50400OutBlock2     "CFOAQ50400OutBlock2"

// Out2(*EMPTY*)                  , occurs
typedef struct _CFOAQ50400OutBlock3
{
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 0, Length 12
    char    IsuNm               [  50];    // [string,   50] �����                          StartPos 12, Length 50
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 62, Length 1
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 63, Length 10
    char    UnsttQty            [  16];    // [long  ,   16] �̰�������                      StartPos 73, Length 16
    char    FnoAvrPrc           [  19];    // [double, 19.8] ��հ�                          StartPos 89, Length 19
    char    NowPrc              [  13];    // [double, 13.2] ���簡                          StartPos 108, Length 13
    char    CmpPrc              [  13];    // [double, 13.2] ���                          StartPos 121, Length 13
    char    EvalPnl             [  16];    // [long  ,   16] �򰡼���                        StartPos 134, Length 16
    char    PnlRat              [  12];    // [double, 12.6] ���ͷ�                          StartPos 150, Length 12
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�                        StartPos 162, Length 16
    char    EvalRat             [   7];    // [double,  7.2] �򰡺���                        StartPos 178, Length 7
    char    LqdtAbleQty         [  16];    // [long  ,   16] û�갡�ɼ���                    StartPos 185, Length 16
} CFOAQ50400OutBlock3, *LPCFOAQ50400OutBlock3;
#define NAME_CFOAQ50400OutBlock3     "CFOAQ50400OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CFOAQ50400_H_
