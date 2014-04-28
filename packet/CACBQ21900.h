#ifndef _CACBQ21900_H_
#define _CACBQ21900_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������������ ��ȸ ( SERVICE=CACBQ21900,headtype=B,CREATOR=�ݹ̼�,CREDATE=2012/04/19 14 )
#pragma pack( push, 1 )

#define NAME_CACBQ21900     "CACBQ21900"

// In(*EMPTY*)                    
typedef struct _CACBQ21900InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
} CACBQ21900InBlock1, *LPCACBQ21900InBlock1;
#define NAME_CACBQ21900InBlock1     "CACBQ21900InBlock1"

// In(*EMPTY*)                    
typedef struct _CACBQ21900OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
} CACBQ21900OutBlock1, *LPCACBQ21900OutBlock1;
#define NAME_CACBQ21900OutBlock1     "CACBQ21900OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CACBQ21900OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    PrdtDtlCode         [   3];    // [string,    3] ��ǰ���ڵ�                    StartPos 5, Length 3
    char    PrdtDtlNm           [  40];    // [string,   40] ��ǰ�󼼸�                      StartPos 8, Length 40
    char    HirnkAcntNo         [  20];    // [string,   20] �������¹�ȣ                    StartPos 48, Length 20
    char    AcntStatNm          [  40];    // [string,   40] ���»��¸�                      StartPos 68, Length 40
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 108, Length 40
    char    AcntHanglAlias      [  40];    // [string,   40] �����ѱۺα��                  StartPos 148, Length 40
    char    MgempNo             [   9];    // [string,    9] ���������ȣ                    StartPos 188, Length 9
    char    MgempNm             [  40];    // [string,   40] ���������                      StartPos 197, Length 40
    char    CnvsEmpNo           [   9];    // [string,    9] ���������ȣ                    StartPos 237, Length 9
    char    CnvsEmpNm           [  40];    // [string,   40] ���������                      StartPos 246, Length 40
    char    MgmtBrnNm           [  40];    // [string,   40] ����������                      StartPos 286, Length 40
    char    AgrgtBrnNm          [  40];    // [string,   40] ����������                      StartPos 326, Length 40
    char    RmnCnfMthdCodeNm    [  18];    // [string,   18] �Ǹ�Ȯ�ι���ڵ��              StartPos 366, Length 18
    char    InetOpnTpCodeNm     [  20];    // [string,   20] ���ͳݰ��������ڵ��            StartPos 384, Length 20
    char    RcptPsnNm           [  40];    // [string,   40] �����ڸ�                        StartPos 404, Length 40
    char    AcntOpnDt           [   8];    // [string,    8] ���°�����                      StartPos 444, Length 8
    char    LastTrdDt           [   8];    // [string,    8] �����ŷ���                      StartPos 452, Length 8
    char    TrsfrDt             [   8];    // [string,    8] ������                          StartPos 460, Length 8
    char    BfOutDt             [   8];    // [string,    8] ������                          StartPos 468, Length 8
    char    TrsfrAcntNo         [  20];    // [string,   20] ���԰��¹�ȣ                    StartPos 476, Length 20
    char    BfOutAcntNo         [  20];    // [string,   20] ������¹�ȣ                    StartPos 496, Length 20
    char    TrsfrBrnNo          [   3];    // [string,    3] ����������ȣ                    StartPos 516, Length 3
    char    TrnsfBrnNo          [   3];    // [string,    3] ����������ȣ                    StartPos 519, Length 3
    char    AcntCncDt           [   8];    // [string,    8] ������������                    StartPos 522, Length 8
    char    AcntCncAbndDt       [   8];    // [string,    8] ����������������                StartPos 530, Length 8
    char    AcntAbndDt          [   8];    // [string,    8] ������������                    StartPos 538, Length 8
    char    MisincTrxDt         [   8];    // [string,    8] �����ó����                    StartPos 546, Length 8
    char    HtsRegDt            [   8];    // [string,    8] HTS�����                       StartPos 554, Length 8
    char    DebtUnMigrtStatNm   [  40];    // [string,   40] ä�����������                  StartPos 562, Length 40
    char    PsbOpnDt            [   8];    // [string,    8] ���尳����                      StartPos 602, Length 8
    char    MgnLevyPtnNm        [  40];    // [string,   40] ���ű�¡��������                StartPos 610, Length 40
    char    CsgnInvstrClssCode  [   4];    // [string,    4] ��Ź�����ںз��ڵ�              StartPos 650, Length 4
    char    CsgnInvstrClssCodeNm[  40];    // [string,   40] ��Ź�����ںз�                  StartPos 654, Length 40
    char    TrtaxTaxchrYnNm     [  40];    // [string,   40] �ŷ�������                      StartPos 694, Length 40
    char    UnuslAcntClssNm     [  40];    // [string,   40] Ư�̱���                        StartPos 734, Length 40
    char    TrdSecPtnNm         [  40];    // [string,   40] �ֽ�ä�Ǳ���                    StartPos 774, Length 40
    char    BnsCmsnAmtGrdCodeNm [  40];    // [string,   40] ���������ڵ��                StartPos 814, Length 40
    char    SettCmsnAmtGrdCodeNm[  40];    // [string,   40] ���������ڵ��                StartPos 854, Length 40
    char    SyntrdStplCnfYn     [   1];    // [string,    1] ���ոŸž��Ȯ�ο���            StartPos 894, Length 1
    char    TrdTpNm             [  20];    // [string,   20] �ŷ����и�                      StartPos 895, Length 20
    char    MktTransAcntNo      [  20];    // [string,   20] �������ް��¹�ȣ                StartPos 915, Length 20
    char    CsgnSfaccTpNm       [  40];    // [string,   40] ��Ź�ڱⱸ�и�                  StartPos 935, Length 40
    char    RegMktCode          [   2];    // [string,    2] ��Ͻ����ڵ�                    StartPos 975, Length 2
    char    RegMktNm            [  40];    // [string,   40] ��Ͻ����                      StartPos 977, Length 40
    char    OptCmsnGrdCodeNm    [  40];    // [string,   40] �ɼǼ��������ڵ��            StartPos 1017, Length 40
    char    FutsCmsnGrdCodeNm   [  40];    // [string,   40] �������������ڵ��            StartPos 1057, Length 40
    char    FcmAcntNo           [  20];    // [string,   20] FCM���¹�ȣ                     StartPos 1097, Length 20
    char    GrndAcntNo          [  20];    // [string,   20] �ٰŰ��¹�ȣ                    StartPos 1117, Length 20
    char    DueDt               [   8];    // [string,    8] ��������                        StartPos 1137, Length 8
    char    BkeepCtrctYn        [   1];    // [string,    1] ��ü��������                    StartPos 1145, Length 1
    char    AbkpCtrctYn         [   1];    // [string,    1] �ڵ���ü��������                StartPos 1146, Length 1
    char    FutsLnkDsgnYn       [   1];    // [string,    1] ����������������                StartPos 1147, Length 1
    char    AplLoanCtrctYn      [   1];    // [string,    1] û���ڱݴ����������            StartPos 1148, Length 1
    char    AutoInAcntDsgnYn    [   1];    // [string,    1] �ڵ��Ա��԰������������        StartPos 1149, Length 1
    char    EmLoanCtrctYn       [   1];    // [string,    1] ��Ÿ�ڱݴ����������            StartPos 1150, Length 1
    char    CslLoanCtrctYn      [   1];    // [string,    1] �ŵ���ݴ㺸�����������        StartPos 1151, Length 1
    char    PmLoanCtrctYn       [   1];    // [string,    1] �����ڱݴ����������            StartPos 1152, Length 1
    char    CrdtAcntYn          [   1];    // [string,    1] �ſ���¿���                    StartPos 1153, Length 1
    char    LoanAcntKindTpCode  [   1];    // [string,    1] ����������������ڵ�            StartPos 1154, Length 1
    char    InetOpnTpCode       [   1];    // [string,    1] ���ͳݰ��������ڵ�              StartPos 1155, Length 1
    char    CybBrnTpCode        [   1];    // [string,    1] ���̹����������ڵ�              StartPos 1156, Length 1
} CACBQ21900OutBlock2, *LPCACBQ21900OutBlock2;
#define NAME_CACBQ21900OutBlock2     "CACBQ21900OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CACBQ21900_H_
