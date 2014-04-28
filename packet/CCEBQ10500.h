#ifndef _CCEBQ10500_H_
#define _CCEBQ10500_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� CME ��Ź�����ű���ȸ (  )
#pragma pack( push, 1 )

#define NAME_CCEBQ10500     "CCEBQ10500"

// In(*EMPTY*)                    
typedef struct _CCEBQ10500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
} CCEBQ10500InBlock1, *LPCCEBQ10500InBlock1;
#define NAME_CCEBQ10500InBlock1     "CCEBQ10500InBlock1"

// In(*EMPTY*)                    
typedef struct _CCEBQ10500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
} CCEBQ10500OutBlock1, *LPCCEBQ10500OutBlock1;
#define NAME_CCEBQ10500OutBlock1     "CCEBQ10500OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CCEBQ10500OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    DpsamtTotamt        [  16];    // [long  ,   16] ��Ź���Ѿ�                      StartPos 45, Length 16
    char    Dps                 [  16];    // [long  ,   16] ������                          StartPos 61, Length 16
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�                        StartPos 77, Length 16
    char    FilupDpsamtTotamt   [  16];    // [long  ,   16] ��翹Ź���Ѿ�                  StartPos 93, Length 16
    char    FilupDps            [  16];    // [long  ,   16] ��翹����                      StartPos 109, Length 16
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�                    StartPos 125, Length 16
    char    WthdwAbleAmt        [  16];    // [long  ,   16] ���Ⱑ�ɱݾ�                    StartPos 141, Length 16
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] ���Ⱑ�����ݾ�                  StartPos 157, Length 16
    char    PsnOutAbleSubstAmt  [  16];    // [long  ,   16] ���Ⱑ�ɴ��ݾ�                StartPos 173, Length 16
    char    Mgn                 [  16];    // [long  ,   16] ���űݾ�                        StartPos 189, Length 16
    char    MnyMgn              [  16];    // [long  ,   16] �������űݾ�                    StartPos 205, Length 16
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                    StartPos 221, Length 16
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 237, Length 16
    char    AddMgn              [  16];    // [long  ,   16] �߰����űݾ�                    StartPos 253, Length 16
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�                StartPos 269, Length 16
    char    AmtPrdayChckInAmt   [  16];    // [long  ,   16] �����ϼ�ǥ�Աݾ�                StartPos 285, Length 16
    char    FnoPrdaySubstSellAmt[  16];    // [long  ,   16] �����ɼ����ϴ��ŵ��ݾ�        StartPos 301, Length 16
    char    FnoCrdaySubstSellAmt[  16];    // [long  ,   16] �����ɼǱ��ϴ��ŵ��ݾ�        StartPos 317, Length 16
    char    FnoPrdayFdamt       [  16];    // [long  ,   16] �����ɼ����ϰ��Աݾ�            StartPos 333, Length 16
    char    FnoCrdayFdamt       [  16];    // [long  ,   16] �����ɼǱ��ϰ��Աݾ�            StartPos 349, Length 16
    char    FcurrSubstAmt       [  16];    // [long  ,   16] ��ȭ���ݾ�                    StartPos 365, Length 16
    char    FnoAcntAfmgnNm      [  20];    // [string,   20] �����ɼǰ��»������űݸ�        StartPos 381, Length 20
} CCEBQ10500OutBlock2, *LPCCEBQ10500OutBlock2;
#define NAME_CCEBQ10500OutBlock2     "CCEBQ10500OutBlock2"

// Out2(*EMPTY*)                  , occurs
typedef struct _CCEBQ10500OutBlock3
{
    char    PdGrpCodeNm         [  20];    // [string,   20] ��ǰ���ڵ��                    StartPos 0, Length 20
    char    NetRiskMgn          [  16];    // [long  ,   16] ���������űݾ�                  StartPos 20, Length 16
    char    PrcMgn              [  16];    // [long  ,   16] �������űݾ�                    StartPos 36, Length 16
    char    SprdMgn             [  16];    // [long  ,   16] �����������űݾ�                StartPos 52, Length 16
    char    PrcFlctMgn          [  16];    // [long  ,   16] ���ݺ������űݾ�                StartPos 68, Length 16
    char    MinMgn              [  16];    // [long  ,   16] �ּ����űݾ�                    StartPos 84, Length 16
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�                    StartPos 100, Length 16
    char    OptNetBuyAmt        [  16];    // [long  ,   16] �ɼǼ��ż��ݾ�                  StartPos 116, Length 16
    char    CsgnMgn             [  16];    // [long  ,   16] ��Ź���űݾ�                    StartPos 132, Length 16
    char    MaintMgn            [  16];    // [long  ,   16] �������űݾ�                    StartPos 148, Length 16
    char    FutsBuyExecAmt      [  16];    // [long  ,   16] �����ż�ü��ݾ�                StartPos 164, Length 16
    char    FutsSellExecAmt     [  16];    // [long  ,   16] �����ŵ�ü��ݾ�                StartPos 180, Length 16
    char    OptBuyExecAmt       [  16];    // [long  ,   16] �ɼǸż�ü��ݾ�                StartPos 196, Length 16
    char    OptSellExecAmt      [  16];    // [long  ,   16] �ɼǸŵ�ü��ݾ�                StartPos 212, Length 16
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�                    StartPos 228, Length 16
    char    TotRiskCsgnMgn      [  16];    // [long  ,   16] ��������Ź���ű�                StartPos 244, Length 16
    char    UndCsgnMgn          [  16];    // [long  ,   16] �μ�����Ź���ű�                StartPos 260, Length 16
    char    MgnRdctAmt          [  16];    // [long  ,   16] ���űݰ���ݾ�                  StartPos 276, Length 16
} CCEBQ10500OutBlock3, *LPCCEBQ10500OutBlock3;
#define NAME_CCEBQ10500OutBlock3     "CCEBQ10500OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CCEBQ10500_H_
