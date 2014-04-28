#ifndef _CSPAQ02200_H_
#define _CSPAQ02200_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �������¿����� �ֹ����ɱݾ� ������ȸ (  )
#pragma pack( push, 1 )

#define NAME_CSPAQ02200     "CSPAQ02200"

// In(*EMPTY*)                    
typedef struct _CSPAQ02200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    MgmtBrnNo           [   3];    // [string,    3] ����������ȣ                    StartPos 5, Length 3
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 8, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 28, Length 8
    char    BalCreTp            [   1];    // [string,    1] �ܰ��������                    StartPos 36, Length 1
} CSPAQ02200InBlock1, *LPCSPAQ02200InBlock1;
#define NAME_CSPAQ02200InBlock1     "CSPAQ02200InBlock1"

// In(*EMPTY*)                    
typedef struct _CSPAQ02200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    MgmtBrnNo           [   3];    // [string,    3] ����������ȣ                    StartPos 5, Length 3
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 8, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 28, Length 8
    char    BalCreTp            [   1];    // [string,    1] �ܰ��������                    StartPos 36, Length 1
} CSPAQ02200OutBlock1, *LPCSPAQ02200OutBlock1;
#define NAME_CSPAQ02200OutBlock1     "CSPAQ02200OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CSPAQ02200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    BrnNm               [  40];    // [string,   40] ������                          StartPos 5, Length 40
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 45, Length 40
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 85, Length 16
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] ��ݰ��ɱݾ�                    StartPos 101, Length 16
    char    SeOrdAbleAmt        [  16];    // [long  ,   16] �ŷ��ұݾ�                      StartPos 117, Length 16
    char    KdqOrdAbleAmt       [  16];    // [long  ,   16] �ڽ��ڱݾ�                      StartPos 133, Length 16
    char    BalEvalAmt          [  16];    // [long  ,   16] �ܰ��򰡱ݾ�                    StartPos 149, Length 16
    char    RcvblAmt            [  16];    // [long  ,   16] �̼��ݾ�                        StartPos 165, Length 16
    char    DpsastTotamt        [  16];    // [long  ,   16] ��Ź�ڻ��Ѿ�                    StartPos 181, Length 16
    char    PnlRat              [  18];    // [double, 18.6] ������                          StartPos 197, Length 18
    char    InvstOrgAmt         [  20];    // [long  ,   20] ���ڿ���                        StartPos 215, Length 20
    char    InvstPlAmt          [  16];    // [long  ,   16] ���ڼ��ͱݾ�                    StartPos 235, Length 16
    char    CrdtPldgOrdAmt      [  16];    // [long  ,   16] �ſ�㺸�ֹ��ݾ�                StartPos 251, Length 16
    char    Dps                 [  16];    // [long  ,   16] ������                          StartPos 267, Length 16
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�                        StartPos 283, Length 16
    char    D1Dps               [  16];    // [long  ,   16] D1������                        StartPos 299, Length 16
    char    D2Dps               [  16];    // [long  ,   16] D2������                        StartPos 315, Length 16
    char    MnyrclAmt           [  16];    // [long  ,   16] ���ݹ̼��ݾ�                    StartPos 331, Length 16
    char    MgnMny              [  16];    // [long  ,   16] ���ű�����                      StartPos 347, Length 16
    char    MgnSubst            [  16];    // [long  ,   16] ���űݴ��                      StartPos 363, Length 16
    char    ChckAmt             [  16];    // [long  ,   16] ��ǥ�ݾ�                        StartPos 379, Length 16
    char    SubstOrdAbleAmt     [  16];    // [long  ,   16] ����ֹ����ɱݾ�                StartPos 395, Length 16
    char    MgnRat100pctOrdAbleAmt[  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ�ֹ����ɱݾ�   StartPos 411, Length 16
    char    MgnRat35ordAbleAmt  [  16];    // [long  ,   16] ���űݷ�35%�ֹ����ɱݾ�         StartPos 427, Length 16
    char    MgnRat50ordAbleAmt  [  16];    // [long  ,   16] ���űݷ�50%�ֹ����ɱݾ�         StartPos 443, Length 16
    char    PrdaySellAdjstAmt   [  16];    // [long  ,   16] ���ϸŵ�����ݾ�                StartPos 459, Length 16
    char    PrdayBuyAdjstAmt    [  16];    // [long  ,   16] ���ϸż�����ݾ�                StartPos 475, Length 16
    char    CrdaySellAdjstAmt   [  16];    // [long  ,   16] ���ϸŵ�����ݾ�                StartPos 491, Length 16
    char    CrdayBuyAdjstAmt    [  16];    // [long  ,   16] ���ϸż�����ݾ�                StartPos 507, Length 16
    char    D1ovdRepayRqrdAmt   [  16];    // [long  ,   16] D1��ü�����ҿ�ݾ�              StartPos 523, Length 16
    char    D2ovdRepayRqrdAmt   [  16];    // [long  ,   16] D2��ü�����ҿ�ݾ�              StartPos 539, Length 16
    char    D1PrsmptWthdwAbleAmt[  16];    // [long  ,   16] D1�������Ⱑ�ɱݾ�              StartPos 555, Length 16
    char    D2PrsmptWthdwAbleAmt[  16];    // [long  ,   16] D2�������Ⱑ�ɱݾ�              StartPos 571, Length 16
    char    DpspdgLoanAmt       [  16];    // [long  ,   16] ��Ź�㺸����ݾ�                StartPos 587, Length 16
    char    Imreq               [  16];    // [long  ,   16] �ſ뼳��������                  StartPos 603, Length 16
    char    MloanAmt            [  16];    // [long  ,   16] ���ڱݾ�                        StartPos 619, Length 16
    char    ChgAfPldgRat        [   9];    // [double,  9.3] �����Ĵ㺸����                  StartPos 635, Length 9
    char    OrgPldgAmt          [  16];    // [long  ,   16] ���㺸�ݾ�                      StartPos 644, Length 16
    char    SubPldgAmt          [  16];    // [long  ,   16] �δ㺸�ݾ�                      StartPos 660, Length 16
    char    RqrdPldgAmt         [  16];    // [long  ,   16] �ҿ�㺸�ݾ�                    StartPos 676, Length 16
    char    OrgPdlckAmt         [  16];    // [long  ,   16] ���㺸�����ݾ�                  StartPos 692, Length 16
    char    PdlckAmt            [  16];    // [long  ,   16] �㺸�����ݾ�                    StartPos 708, Length 16
    char    AddPldgMny          [  16];    // [long  ,   16] �߰��㺸����                    StartPos 724, Length 16
    char    D1OrdAbleAmt        [  16];    // [long  ,   16] D1�ֹ����ɱݾ�                  StartPos 740, Length 16
    char    CrdtIntdltAmt       [  16];    // [long  ,   16] �ſ����ڹ̳��ݾ�                StartPos 756, Length 16
    char    EtclndAmt           [  16];    // [long  ,   16] ��Ÿ�뿩�ݾ�                    StartPos 772, Length 16
    char    NtdayPrsmptCvrgAmt  [  16];    // [long  ,   16] ���������ݴ�Ÿűݾ�            StartPos 788, Length 16
    char    OrgPldgSumAmt       [  16];    // [long  ,   16] ���㺸�հ�ݾ�                  StartPos 804, Length 16
    char    CrdtOrdAbleAmt      [  16];    // [long  ,   16] �ſ��ֹ����ɱݾ�                StartPos 820, Length 16
    char    SubPldgSumAmt       [  16];    // [long  ,   16] �δ㺸�հ�ݾ�                  StartPos 836, Length 16
    char    CrdtPldgAmtMny      [  16];    // [long  ,   16] �ſ�㺸������                  StartPos 852, Length 16
    char    CrdtPldgSubstAmt    [  16];    // [long  ,   16] �ſ�㺸���ݾ�                StartPos 868, Length 16
    char    AddCrdtPldgMny      [  16];    // [long  ,   16] �߰��ſ�㺸����                StartPos 884, Length 16
    char    CrdtPldgRuseAmt     [  16];    // [long  ,   16] �ſ�㺸����ݾ�              StartPos 900, Length 16
    char    AddCrdtPldgSubst    [  16];    // [long  ,   16] �߰��ſ�㺸���                StartPos 916, Length 16
    char    CslLoanAmtdt1       [  16];    // [long  ,   16] �ŵ���ݴ㺸����ݾ�            StartPos 932, Length 16
    char    DpslRestrcAmt       [  16];    // [long  ,   16] ó�����ѱݾ�                    StartPos 948, Length 16
} CSPAQ02200OutBlock2, *LPCSPAQ02200OutBlock2;
#define NAME_CSPAQ02200OutBlock2     "CSPAQ02200OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CSPAQ02200_H_
