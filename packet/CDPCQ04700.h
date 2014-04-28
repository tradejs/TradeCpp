#ifndef _CDPCQ04700_H_
#define _CDPCQ04700_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ���� �ŷ����� ( SERVICE=CDPCQ04700,headtype=B,CREATOR=��ȭ��,CREDATE=2012/06/14 10 )
#pragma pack( push, 1 )

#define NAME_CDPCQ04700     "CDPCQ04700"

// In(*EMPTY*)                    
typedef struct _CDPCQ04700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 6, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 26, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 34, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 42, Length 8
    char    SrtNo               [  10];    // [long  ,   10] ���۹�ȣ                        StartPos 50, Length 10
    char    PdptnCode           [   2];    // [string,    2] ��ǰ�����ڵ�                    StartPos 60, Length 2
    char    IsuLgclssCode       [   2];    // [string,    2] �����з��ڵ�                  StartPos 62, Length 2
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 64, Length 12
} CDPCQ04700InBlock1, *LPCDPCQ04700InBlock1;
#define NAME_CDPCQ04700InBlock1     "CDPCQ04700InBlock1"

// In(*EMPTY*)                    
typedef struct _CDPCQ04700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 6, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 26, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 34, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 42, Length 8
    char    SrtNo               [  10];    // [long  ,   10] ���۹�ȣ                        StartPos 50, Length 10
    char    PdptnCode           [   2];    // [string,    2] ��ǰ�����ڵ�                    StartPos 60, Length 2
    char    IsuLgclssCode       [   2];    // [string,    2] �����з��ڵ�                  StartPos 62, Length 2
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 64, Length 12
} CDPCQ04700OutBlock1, *LPCDPCQ04700OutBlock1;
#define NAME_CDPCQ04700OutBlock1     "CDPCQ04700OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CDPCQ04700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
} CDPCQ04700OutBlock2, *LPCDPCQ04700OutBlock2;
#define NAME_CDPCQ04700OutBlock2     "CDPCQ04700OutBlock2"

// Out2(*EMPTY*)                  , occurs
typedef struct _CDPCQ04700OutBlock3
{
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 0, Length 20
    char    TrdDt               [   8];    // [string,    8] �ŷ�����                        StartPos 20, Length 8
    char    TrdNo               [  10];    // [long  ,   10] �ŷ���ȣ                        StartPos 28, Length 10
    char    TpCodeNm            [  50];    // [string,   50] �����ڵ��                      StartPos 38, Length 50
    char    SmryNo              [   4];    // [string,    4] �����ȣ                        StartPos 88, Length 4
    char    SmryNm              [  40];    // [string,   40] �����                          StartPos 92, Length 40
    char    CancTpNm            [  20];    // [string,   20] ��ұ���                        StartPos 132, Length 20
    char    TrdQty              [  16];    // [long  ,   16] �ŷ�����                        StartPos 152, Length 16
    char    Trtax               [  16];    // [long  ,   16] �ŷ���                          StartPos 168, Length 16
    char    FcurrAdjstAmt       [  25];    // [double, 25.4] ��ȭ����ݾ�                    StartPos 184, Length 25
    char    AdjstAmt            [  16];    // [long  ,   16] ����ݾ�                        StartPos 209, Length 16
    char    OvdSum              [  16];    // [long  ,   16] ��ü��                          StartPos 225, Length 16
    char    DpsBfbalAmt         [  16];    // [long  ,   16] ���������ܱݾ�                  StartPos 241, Length 16
    char    SellPldgRfundAmt    [  16];    // [long  ,   16] �ŵ��㺸��ȯ��                  StartPos 257, Length 16
    char    DpspdgLoanBfbalAmt  [  16];    // [long  ,   16] ��Ź�㺸�������ܱݾ�            StartPos 273, Length 16
    char    TrdmdaNm            [  40];    // [string,   40] �ŷ���ü��                      StartPos 289, Length 40
    char    OrgTrdNo            [  10];    // [long  ,   10] ���ŷ���ȣ                      StartPos 329, Length 10
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 339, Length 40
    char    TrdUprc             [  13];    // [double, 13.2] �ŷ��ܰ�                        StartPos 379, Length 13
    char    CmsnAmt             [  16];    // [long  ,   16] ������                          StartPos 392, Length 16
    char    FcurrCmsnAmt        [  15];    // [double, 15.2] ��ȭ������ݾ�                  StartPos 408, Length 15
    char    RfundDiffAmt        [  16];    // [long  ,   16] ��ȯ���̱ݾ�                    StartPos 423, Length 16
    char    RepayAmtSum         [  16];    // [long  ,   16] �������հ�                      StartPos 439, Length 16
    char    SecCrbalQty         [  16];    // [long  ,   16] �������Ǳ��ܼ���                StartPos 455, Length 16
    char    CslLoanRfundIntrstAmt[  16];    // [long  ,   16] �ŵ���ݴ㺸�����ȯ���ڱݾ�    StartPos 471, Length 16
    char    DpspdgLoanCrbalAmt  [  16];    // [long  ,   16] ��Ź�㺸������ܱݾ�            StartPos 487, Length 16
    char    TrxTime             [   9];    // [string,    9] ó���ð�                        StartPos 503, Length 9
    char    Inouno              [  10];    // [long  ,   10] �ⳳ��ȣ                        StartPos 512, Length 10
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 522, Length 12
    char    TrdAmt              [  16];    // [long  ,   16] �ŷ��ݾ�                        StartPos 534, Length 16
    char    ChckAmt             [  16];    // [long  ,   16] ��ǥ�ݾ�                        StartPos 550, Length 16
    char    TaxSumAmt           [  16];    // [long  ,   16] �����հ�ݾ�                    StartPos 566, Length 16
    char    FcurrTaxSumAmt      [  26];    // [double, 26.6] ��ȭ�����հ�ݾ�                StartPos 582, Length 26
    char    IntrstUtlfee        [  16];    // [long  ,   16] �����̿��                      StartPos 608, Length 16
    char    MnyDvdAmt           [  16];    // [long  ,   16] ���ݾ�                        StartPos 624, Length 16
    char    RcvblOcrAmt         [  16];    // [long  ,   16] �̼��߻��ݾ�                    StartPos 640, Length 16
    char    TrxBrnNo            [   3];    // [string,    3] ó��������ȣ                    StartPos 656, Length 3
    char    TrxBrnNm            [  40];    // [string,   40] ó��������                      StartPos 659, Length 40
    char    DpspdgLoanAmt       [  16];    // [long  ,   16] ��Ź�㺸����ݾ�                StartPos 699, Length 16
    char    DpspdgLoanRfundAmt  [  16];    // [long  ,   16] ��Ź�㺸�����ȯ�ݾ�            StartPos 715, Length 16
    char    BasePrc             [  13];    // [double, 13.2] ���ذ�                          StartPos 731, Length 13
    char    DpsCrbalAmt         [  16];    // [long  ,   16] �����ݱ��ܱݾ�                  StartPos 744, Length 16
    char    BoaAmt              [  16];    // [long  ,   16] ��ǥ                            StartPos 760, Length 16
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] ��ݰ��ɱݾ�                    StartPos 776, Length 16
    char    BcrLoanOcrAmt       [  16];    // [long  ,   16] �������Ǵ㺸����߻���          StartPos 792, Length 16
    char    BcrLoanBfbalAmt     [  16];    // [long  ,   16] �������Ǵ㺸�������ܱ�          StartPos 808, Length 16
    char    BnsBasePrc          [  20];    // [double,20.10] �Ÿű��ذ�                      StartPos 824, Length 20
    char    TaxchrBasePrc       [  20];    // [double,20.10] �������ذ�                      StartPos 844, Length 20
    char    TrdUnit             [  16];    // [long  ,   16] �ŷ��¼�                        StartPos 864, Length 16
    char    BalUnit             [  16];    // [long  ,   16] �ܰ��¼�                        StartPos 880, Length 16
    char    EvrTax              [  16];    // [long  ,   16] ������                          StartPos 896, Length 16
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�                        StartPos 912, Length 16
    char    BcrLoanRfundAmt     [  16];    // [long  ,   16] �������Ǵ㺸�����ȯ��          StartPos 928, Length 16
    char    BcrLoanCrbalAmt     [  16];    // [long  ,   16] �������Ǵ㺸������ܱ�          StartPos 944, Length 16
    char    AddMgnOcrTotamt     [  16];    // [long  ,   16] �߰����űݹ߻��Ѿ�              StartPos 960, Length 16
    char    AddMnyMgnOcrAmt     [  16];    // [long  ,   16] �߰��������űݹ߻��ݾ�          StartPos 976, Length 16
    char    AddMgnDfryTotamt    [  16];    // [long  ,   16] �߰����űݳ����Ѿ�              StartPos 992, Length 16
    char    AddMnyMgnDfryAmt    [  16];    // [long  ,   16] �߰��������űݳ��αݾ�          StartPos 1008, Length 16
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 1024, Length 16
    char    Ictax               [  16];    // [long  ,   16] �ҵ漼                          StartPos 1040, Length 16
    char    Ihtax               [  16];    // [long  ,   16] �ֹμ�                          StartPos 1056, Length 16
    char    LoanDt              [   8];    // [string,    8] ������                          StartPos 1072, Length 8
    char    CrcyCode            [   3];    // [string,    3] ��ȭ�ڵ�                        StartPos 1080, Length 3
    char    FcurrAmt            [  24];    // [double, 24.4] ��ȭ�ݾ�                        StartPos 1083, Length 24
    char    FcurrTrdAmt         [  24];    // [double, 24.4] ��ȭ�ŷ��ݾ�                    StartPos 1107, Length 24
    char    FcurrDps            [  21];    // [double, 21.4] ��ȭ������                      StartPos 1131, Length 21
    char    FcurrDpsBfbalAmt    [  21];    // [double, 21.4] ��ȭ���������ܱݾ�              StartPos 1152, Length 21
    char    OppAcntNm           [  40];    // [string,   40] �����¸�                      StartPos 1173, Length 40
    char    OppAcntNo           [  20];    // [string,   20] �����¹�ȣ                    StartPos 1213, Length 20
    char    LoanRfundAmt        [  16];    // [long  ,   16] �����ȯ�ݾ�                    StartPos 1233, Length 16
    char    LoanIntrstAmt       [  16];    // [long  ,   16] �������ڱݾ�                    StartPos 1249, Length 16
    char    AskpsnNm            [  40];    // [string,   40] �Ƿ��θ�                        StartPos 1265, Length 40
    char    OrdDt               [   8];    // [string,    8] �ֹ�����                        StartPos 1305, Length 8
    char    TrdXchrat           [  15];    // [double, 15.4] �ŷ�ȯ��                        StartPos 1313, Length 15
    char    RdctCmsn            [  21];    // [double, 21.4] ���������                      StartPos 1328, Length 21
    char    FcurrStmpTx         [  21];    // [double, 21.4] ��ȭ������                      StartPos 1349, Length 21
    char    FcurrElecfnTrtax    [  21];    // [double, 21.4] ��ȭ���ڱ����ŷ���              StartPos 1370, Length 21
    char    FcstckTrtax         [  21];    // [double, 21.4] ��ȭ���ǰŷ���                  StartPos 1391, Length 21
} CDPCQ04700OutBlock3, *LPCDPCQ04700OutBlock3;
#define NAME_CDPCQ04700OutBlock3     "CDPCQ04700OutBlock3"

// Out3(*EMPTY*)                  
typedef struct _CDPCQ04700OutBlock4
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    PnlSumAmt           [  16];    // [long  ,   16] �����հ�ݾ�                    StartPos 5, Length 16
    char    CtrctAsm            [  16];    // [long  ,   16] ��������                        StartPos 21, Length 16
    char    CmsnAmtSumAmt       [  16];    // [long  ,   16] �������հ�ݾ�                  StartPos 37, Length 16
} CDPCQ04700OutBlock4, *LPCDPCQ04700OutBlock4;
#define NAME_CDPCQ04700OutBlock4     "CDPCQ04700OutBlock4"

// Out4(*EMPTY*)                  
typedef struct _CDPCQ04700OutBlock5
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    MnyinAmt            [  16];    // [long  ,   16] �Աݱݾ�                        StartPos 5, Length 16
    char    SecinAmt            [  16];    // [long  ,   16] �԰�ݾ�                        StartPos 21, Length 16
    char    MnyoutAmt           [  16];    // [long  ,   16] ��ݱݾ�                        StartPos 37, Length 16
    char    SecoutAmt           [  16];    // [long  ,   16] ���ݾ�                        StartPos 53, Length 16
    char    DiffAmt             [  16];    // [long  ,   16] ���̱ݾ�                        StartPos 69, Length 16
    char    DiffAmt0            [  16];    // [long  ,   16] ���̱ݾ�0                       StartPos 85, Length 16
    char    SellQty             [  16];    // [long  ,   16] �ŵ�����                        StartPos 101, Length 16
    char    SellAmt             [  16];    // [long  ,   16] �ŵ��ݾ�                        StartPos 117, Length 16
    char    SellCmsn            [  16];    // [long  ,   16] �ŵ�������                      StartPos 133, Length 16
    char    EvrTax              [  19];    // [long  ,   19] ������                          StartPos 149, Length 19
    char    FcurrSellAdjstAmt   [  25];    // [double, 25.4] ��ȭ�ŵ�����ݾ�                StartPos 168, Length 25
    char    BuyQty              [  16];    // [long  ,   16] �ż�����                        StartPos 193, Length 16
    char    BuyAmt              [  16];    // [long  ,   16] �ż��ݾ�                        StartPos 209, Length 16
    char    BuyCmsn             [  16];    // [long  ,   16] �ż�������                      StartPos 225, Length 16
    char    ExecTax             [  16];    // [long  ,   16] ü�Ἴ��                        StartPos 241, Length 16
    char    FcurrBuyAdjstAmt    [  25];    // [double, 25.4] ��ȭ�ż�����ݾ�                StartPos 257, Length 25
} CDPCQ04700OutBlock5, *LPCDPCQ04700OutBlock5;
#define NAME_CDPCQ04700OutBlock5     "CDPCQ04700OutBlock5"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CDPCQ04700_H_
