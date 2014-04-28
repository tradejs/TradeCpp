#ifndef _CFOEQ82700_H_
#define _CFOEQ82700_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� �־߰� ���� ���� ��ȸ ( SERVICE=CFOEQ82700,headtype=B,CREATOR=Ȳ�Լ�,CREDATE=2013/10/01 16 )
#pragma pack( push, 1 )

#define NAME_CFOEQ82700     "CFOEQ82700"

// In(*EMPTY*)                    
typedef struct _CFOEQ82700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 49, Length 1
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 50, Length 1
    char    FnoBalEvalTpCode    [   1];    // [string,    1] �����ɼ��ܰ��򰡱����ڵ�        StartPos 51, Length 1
} CFOEQ82700InBlock1, *LPCFOEQ82700InBlock1;
#define NAME_CFOEQ82700InBlock1     "CFOEQ82700InBlock1"

// In(*EMPTY*)                    
typedef struct _CFOEQ82700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 49, Length 1
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 50, Length 1
    char    FnoBalEvalTpCode    [   1];    // [string,    1] �����ɼ��ܰ��򰡱����ڵ�        StartPos 51, Length 1
} CFOEQ82700OutBlock1, *LPCFOEQ82700OutBlock1;
#define NAME_CFOEQ82700OutBlock1     "CFOEQ82700OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CFOEQ82700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������                    StartPos 5, Length 16
    char    OptBnsplAmt         [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 21, Length 16
    char    FnoCmsnAmt          [  16];    // [long  ,   16] �����ɼǼ�����                  StartPos 37, Length 16
    char    PnlSumAmt           [  16];    // [long  ,   16] �����հ�ݾ�                    StartPos 53, Length 16
    char    MnyinSumAmt         [  16];    // [long  ,   16] �Ա��հ�ݾ�                    StartPos 69, Length 16
    char    MnyoutSumAmt        [  16];    // [long  ,   16] ����հ�ݾ�                    StartPos 85, Length 16
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 101, Length 40
} CFOEQ82700OutBlock2, *LPCFOEQ82700OutBlock2;
#define NAME_CFOEQ82700OutBlock2     "CFOEQ82700OutBlock2"

// OutList(*EMPTY*)               , occurs
typedef struct _CFOEQ82700OutBlock3
{
    char    QryDt               [   8];    // [string,    8] ��ȸ��                          StartPos 0, Length 8
    char    DpstgTotamt         [  16];    // [long  ,   16] ��Ź�Ѿ�                        StartPos 8, Length 16
    char    DpstgMny            [  16];    // [long  ,   16] ��Ź����                        StartPos 24, Length 16
    char    FnoMgn              [  16];    // [long  ,   16] �����ɼ����űݾ�                StartPos 40, Length 16
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�                    StartPos 56, Length 16
    char    OptBsnPnlAmt        [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 72, Length 16
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�                StartPos 88, Length 16
    char    OptSettDfamt        [  16];    // [long  ,   16] �ɼǰ�������                    StartPos 104, Length 16
    char    CmsnAmt             [  16];    // [long  ,   16] ������                          StartPos 120, Length 16
    char    SumAmt1             [  16];    // [long  ,   16] �հ�ݾ�1                       StartPos 136, Length 16
    char    SumAmt2             [  16];    // [long  ,   16] �հ�ݾ�                        StartPos 152, Length 16
    char    PnlSumAmt           [  16];    // [long  ,   16] �����հ�ݾ�                    StartPos 168, Length 16
    char    FutsBuyAmt          [  16];    // [long  ,   16] �����ż��ݾ�                    StartPos 184, Length 16
    char    FutsSellAmt         [  16];    // [long  ,   16] �����ŵ��ݾ�                    StartPos 200, Length 16
    char    OptBuyAmt           [  16];    // [long  ,   16] �ɼǸż��ݾ�                    StartPos 216, Length 16
    char    OptSellAmt          [  16];    // [long  ,   16] �ɼǸŵ��ݾ�                    StartPos 232, Length 16
    char    InAmt               [  16];    // [long  ,   16] �Աݾ�                          StartPos 248, Length 16
    char    OutAmt              [  16];    // [long  ,   16] ��ݾ�                          StartPos 264, Length 16
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�                        StartPos 280, Length 16
    char    AddupEvalAmt        [  16];    // [long  ,   16] �ջ��򰡱ݾ�                    StartPos 296, Length 16
    char    Amt2                [  16];    // [long  ,   16] �ݾ�2                           StartPos 312, Length 16
    char    FutsCmsnAmt         [  16];    // [long  ,   16] ����������ݾ�                  StartPos 328, Length 16
    char    OptCmsnAmt          [  16];    // [long  ,   16] �ɼǼ�����ݾ�                  StartPos 344, Length 16
} CFOEQ82700OutBlock3, *LPCFOEQ82700OutBlock3;
#define NAME_CFOEQ82700OutBlock3     "CFOEQ82700OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CFOEQ82700_H_
