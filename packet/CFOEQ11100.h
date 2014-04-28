#ifndef _CFOEQ11100_H_
#define _CFOEQ11100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼǰ����꿹Ź�ݻ� ( SERVICE=CFOEQ11100,headtype=B,CREATOR=������,CREDATE=2012/03/16 14 )
#pragma pack( push, 1 )

#define NAME_CFOEQ11100     "CFOEQ11100"

// In(*EMPTY*)                    
typedef struct _CFOEQ11100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    BnsDt               [   8];    // [string,    8] �Ÿ���                          StartPos 33, Length 8
} CFOEQ11100InBlock1, *LPCFOEQ11100InBlock1;
#define NAME_CFOEQ11100InBlock1     "CFOEQ11100InBlock1"

// In(*EMPTY*)                    
typedef struct _CFOEQ11100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    BnsDt               [   8];    // [string,    8] �Ÿ���                          StartPos 33, Length 8
} CFOEQ11100OutBlock1, *LPCFOEQ11100OutBlock1;
#define NAME_CFOEQ11100OutBlock1     "CFOEQ11100OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CFOEQ11100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    OpnmkDpsamtTotamt   [  16];    // [long  ,   16] ����ÿ�Ź���Ѿ�                StartPos 45, Length 16
    char    OpnmkDps            [  16];    // [long  ,   16] ����ÿ�����                    StartPos 61, Length 16
    char    OpnmkMnyrclAmt      [  16];    // [long  ,   16] ��������ݹ̼���                StartPos 77, Length 16
    char    OpnmkSubstAmt       [  16];    // [long  ,   16] ����ô��ݾ�                  StartPos 93, Length 16
    char    TotAmt              [  16];    // [long  ,   16] �ѱݾ�                          StartPos 109, Length 16
    char    Dps                 [  16];    // [long  ,   16] ������                          StartPos 125, Length 16
    char    MnyrclAmt           [  16];    // [long  ,   16] ���ݹ̼��ݾ�                    StartPos 141, Length 16
    char    SubstDsgnAmt        [  16];    // [long  ,   16] ��������ݾ�                    StartPos 157, Length 16
    char    CsgnMgn             [  16];    // [long  ,   16] ��Ź���űݾ�                    StartPos 173, Length 16
    char    MnyCsgnMgn          [  16];    // [long  ,   16] ������Ź���űݾ�                StartPos 189, Length 16
    char    MaintMgn            [  16];    // [long  ,   16] �������űݾ�                    StartPos 205, Length 16
    char    MnyMaintMgn         [  16];    // [long  ,   16] �����������űݾ�                StartPos 221, Length 16
    char    OutAbleAmt          [  16];    // [long  ,   16] ��ݰ����Ѿ�                    StartPos 237, Length 16
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] ��ݰ��ɱݾ�                    StartPos 253, Length 16
    char    SubstOutAbleAmt     [  16];    // [long  ,   16] ��ݰ��ɴ��                    StartPos 269, Length 16
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                    StartPos 285, Length 16
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 301, Length 16
    char    AddMgnOcrTpCode     [   1];    // [string,    1] �߰����űݱ���                  StartPos 317, Length 1
    char    AddMgn              [  16];    // [long  ,   16] �߰����űݾ�                    StartPos 318, Length 16
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�                StartPos 334, Length 16
    char    NtdayTotAmt         [  16];    // [long  ,   16] ���Ͽ�Ź�Ѿ�                    StartPos 350, Length 16
    char    NtdayDps            [  16];    // [long  ,   16] ���Ͽ�Ź����                    StartPos 366, Length 16
    char    NtdayMnyrclAmt      [  16];    // [long  ,   16] ���Ϲ̼���                      StartPos 382, Length 16
    char    NtdaySubstAmt       [  16];    // [long  ,   16] ���Ͽ�Ź���                    StartPos 398, Length 16
    char    NtdayCsgnMgn        [  16];    // [long  ,   16] ������Ź���ű�                  StartPos 414, Length 16
    char    NtdayMnyCsgnMgn     [  16];    // [long  ,   16] ������Ź���ű�����              StartPos 430, Length 16
    char    NtdayMaintMgn       [  16];    // [long  ,   16] �����������ű�                  StartPos 446, Length 16
    char    NtdayMnyMaintMgn    [  16];    // [long  ,   16] �����������ű�����              StartPos 462, Length 16
    char    NtdayOutAbleAmt     [  16];    // [long  ,   16] �������Ⱑ�ɱݾ�                StartPos 478, Length 16
    char    NtdayMnyoutAbleAmt  [  16];    // [long  ,   16] �������Ⱑ�ɱݾ�                StartPos 494, Length 16
    char    NtdaySubstOutAbleAmt[  16];    // [long  ,   16] �������Ⱑ�ɴ��                StartPos 510, Length 16
    char    NtdayOrdAbleAmt     [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 526, Length 16
    char    NtdayMnyOrdAbleAmt  [  16];    // [long  ,   16] �����ֹ���������                StartPos 542, Length 16
    char    NtdayAddMgnTp       [   1];    // [string,    1] �����߰����űݱ���              StartPos 558, Length 1
    char    NtdayAddMgn         [  16];    // [long  ,   16] �����߰����ű�                  StartPos 559, Length 16
    char    NtdayMnyAddMgn      [  16];    // [long  ,   16] �����߰����ű�����              StartPos 575, Length 16
    char    NtdaySettAmt        [  16];    // [long  ,   16] ���ϰ����ݾ�                    StartPos 591, Length 16
    char    EvalDpsamtTotamt    [  15];    // [long  ,   15] �򰡿�Ź���Ѿ�                  StartPos 607, Length 15
    char    MnyEvalDpstgAmt     [  15];    // [long  ,   15] �����򰡿�Ź�ݾ�                StartPos 622, Length 15
    char    DpsamtUtlfeeGivPrergAmt[  16];    // [long  ,   16] ��Ź���̿�����޿����ݾ�        StartPos 637, Length 16
    char    TaxAmt              [  16];    // [long  ,   16] ����                            StartPos 653, Length 16
    char    CsgnMgnrat          [   7];    // [double,  7.2] ��Ź���ű� ����                 StartPos 669, Length 7
    char    CsgnMnyMgnrat       [   7];    // [double,  7.2] ��Ź���ű����ݺ���              StartPos 676, Length 7
    char    DpstgTotamtLackAmt  [  16];    // [long  ,   16] ��Ź�Ѿ׺����ݾ�(��Ź���űݱ��� StartPos 683, Length 16
    char    DpstgMnyLackAmt     [  16];    // [long  ,   16] ��Ź���ݺ����ݾ�(��Ź���űݱ��� StartPos 699, Length 16
    char    RealInAmt           [  16];    // [long  ,   16] ���Աݾ�                        StartPos 715, Length 16
    char    InAmt               [  16];    // [long  ,   16] �Աݾ�                          StartPos 731, Length 16
    char    OutAmt              [  16];    // [long  ,   16] ��ݾ�                          StartPos 747, Length 16
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������                    StartPos 763, Length 16
    char    FutsThdayDfamt      [  16];    // [long  ,   16] ������������                    StartPos 779, Length 16
    char    FutsUpdtDfamt       [  16];    // [long  ,   16] ������������                    StartPos 795, Length 16
    char    FutsLastSettDfamt   [  16];    // [long  ,   16] ����������������                StartPos 811, Length 16
    char    OptSettDfamt        [  16];    // [long  ,   16] �ɼǰ�������                    StartPos 827, Length 16
    char    OptBuyAmt           [  16];    // [long  ,   16] �ɼǸż��ݾ�                    StartPos 843, Length 16
    char    OptSellAmt          [  16];    // [long  ,   16] �ɼǸŵ��ݾ�                    StartPos 859, Length 16
    char    OptXrcDfamt         [  16];    // [long  ,   16] �ɼ��������                    StartPos 875, Length 16
    char    OptAsgnDfamt        [  16];    // [long  ,   16] �ɼǹ�������                    StartPos 891, Length 16
    char    RealGdsUndAmt       [  16];    // [long  ,   16] �ǹ��μ����ݾ�                  StartPos 907, Length 16
    char    RealGdsUndAsgnAmt   [  16];    // [long  ,   16] �ǹ��μ����������              StartPos 923, Length 16
    char    RealGdsUndXrcAmt    [  16];    // [long  ,   16] �ǹ��μ��������              StartPos 939, Length 16
    char    CmsnAmt             [  16];    // [long  ,   16] ������                          StartPos 955, Length 16
    char    FutsCmsn            [  16];    // [long  ,   16] ����������                      StartPos 971, Length 16
    char    OptCmsn             [  16];    // [long  ,   16] �ɼǼ�����                      StartPos 987, Length 16
    char    FutsCtrctQty        [  16];    // [long  ,   16] ������������                    StartPos 1003, Length 16
    char    FutsCtrctAmt        [  16];    // [long  ,   16] ���������ݾ�                    StartPos 1019, Length 16
    char    OptCtrctQty         [  16];    // [long  ,   16] �ɼǾ�������                    StartPos 1035, Length 16
    char    OptCtrctAmt         [  16];    // [long  ,   16] �ɼǾ����ݾ�                    StartPos 1051, Length 16
    char    FutsUnsttQty        [  16];    // [long  ,   16] �����̰�������                  StartPos 1067, Length 16
    char    FutsUnsttAmt        [  16];    // [long  ,   16] �����̰����ݾ�                  StartPos 1083, Length 16
    char    OptUnsttQty         [  16];    // [long  ,   16] �ɼǹ̰�������                  StartPos 1099, Length 16
    char    OptUnsttAmt         [  16];    // [long  ,   16] �ɼǹ̰����ݾ�                  StartPos 1115, Length 16
    char    FutsBuyUnsttQty     [  16];    // [long  ,   16] �����ż��̰�������              StartPos 1131, Length 16
    char    FutsBuyUnsttAmt     [  16];    // [long  ,   16] �����ż��̰����ݾ�              StartPos 1147, Length 16
    char    FutsSellUnsttQty    [  16];    // [long  ,   16] �����ŵ��̰�������              StartPos 1163, Length 16
    char    FutsSellUnsttAmt    [  16];    // [long  ,   16] �����ŵ��̰����ݾ�              StartPos 1179, Length 16
    char    OptBuyUnsttQty      [  16];    // [long  ,   16] �ɼǸż��̰�������              StartPos 1195, Length 16
    char    OptBuyUnsttAmt      [  16];    // [long  ,   16] �ɼǸż��̰����ݾ�              StartPos 1211, Length 16
    char    OptSellUnsttQty     [  16];    // [long  ,   16] �ɼǸŵ��̰�������              StartPos 1227, Length 16
    char    OptSellUnsttAmt     [  16];    // [long  ,   16] �ɼǸŵ��̰����ݾ�              StartPos 1243, Length 16
    char    FutsBuyctrQty       [  16];    // [long  ,   16] �����ż���������                StartPos 1259, Length 16
    char    FutsBuyctrAmt       [  16];    // [long  ,   16] �����ż������ݾ�                StartPos 1275, Length 16
    char    FutsSlctrQty        [  16];    // [long  ,   16] �����ŵ���������                StartPos 1291, Length 16
    char    FutsSlctrAmt        [  16];    // [long  ,   16] �����ŵ������ݾ�                StartPos 1307, Length 16
    char    OptBuyctrQty        [  16];    // [long  ,   16] �ɼǸż���������                StartPos 1323, Length 16
    char    OptBuyctrAmt        [  16];    // [long  ,   16] �ɼǸż������ݾ�                StartPos 1339, Length 16
    char    OptSlctrQty         [  16];    // [long  ,   16] �ɼǸŵ���������                StartPos 1355, Length 16
    char    OptSlctrAmt         [  16];    // [long  ,   16] �ɼǸŵ������ݾ�                StartPos 1371, Length 16
    char    FutsBnsplAmt        [  16];    // [long  ,   16] �����Ÿż��ͱݾ�                StartPos 1387, Length 16
    char    OptBnsplAmt         [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 1403, Length 16
    char    FutsEvalPnlAmt      [  16];    // [long  ,   16] �����򰡼��ͱݾ�                StartPos 1419, Length 16
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�                StartPos 1435, Length 16
    char    FutsEvalAmt         [  16];    // [long  ,   16] �����򰡱ݾ�                    StartPos 1451, Length 16
    char    OptEvalAmt          [  16];    // [long  ,   16] �ɼ��򰡱ݾ�                    StartPos 1467, Length 16
    char    MktEndAfMnyInAmt    [  16];    // [long  ,   16] �������������Աݱݾ�            StartPos 1483, Length 16
    char    MktEndAfMnyOutAmt   [  16];    // [long  ,   16] ��������������ݱݾ�            StartPos 1499, Length 16
    char    MktEndAfSubstDsgnAmt[  16];    // [long  ,   16] �������Ĵ�������ݾ�            StartPos 1515, Length 16
    char    MktEndAfSubstAbndAmt[  16];    // [long  ,   16] �������Ĵ�������ݾ�            StartPos 1531, Length 16
} CFOEQ11100OutBlock2, *LPCFOEQ11100OutBlock2;
#define NAME_CFOEQ11100OutBlock2     "CFOEQ11100OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CFOEQ11100_H_
