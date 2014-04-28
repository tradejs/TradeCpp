#ifndef _CCEAQ06000_H_
#define _CCEAQ06000_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� CME �ֹ�ü�᳻����ȸ (  )
#pragma pack( push, 1 )

#define NAME_CCEAQ06000     "CCEAQ06000"

// In(*EMPTY*)                    
typedef struct _CCEAQ06000InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    ChoicInptTpCode     [   1];    // [string,    1] �����Է±���                    StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ������ȣ                        StartPos 6, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 26, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 34, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 42, Length 8
    char    FnoClssCode         [   2];    // [string,    2] �����ɼǺз��ڵ�                StartPos 50, Length 2
    char    PrdgrpCode          [   2];    // [string,    2] ��ǰ���ڵ�                      StartPos 52, Length 2
    char    PrdtExecTpCode      [   1];    // [string,    1] ü�ᱸ��                        StartPos 54, Length 1
    char    FnoTrdPtnCode       [   2];    // [string,    2] �����ɼǰŷ������ڵ�            StartPos 55, Length 2
    char    SrtOrdNo2           [  10];    // [long  ,   10] �����ֹ���ȣ2                   StartPos 57, Length 10
    char    EndNo               [  10];    // [long  ,   10] �����ȣ                        StartPos 67, Length 10
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 77, Length 1
} CCEAQ06000InBlock1, *LPCCEAQ06000InBlock1;
#define NAME_CCEAQ06000InBlock1     "CCEAQ06000InBlock1"

// In(*EMPTY*)                    
typedef struct _CCEAQ06000OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    ChoicInptTpCode     [   1];    // [string,    1] �����Է±���                    StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ������ȣ                        StartPos 6, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 26, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 34, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 42, Length 8
    char    FnoClssCode         [   2];    // [string,    2] �����ɼǺз��ڵ�                StartPos 50, Length 2
    char    PrdgrpCode          [   2];    // [string,    2] ��ǰ���ڵ�                      StartPos 52, Length 2
    char    PrdtExecTpCode      [   1];    // [string,    1] ü�ᱸ��                        StartPos 54, Length 1
    char    FnoTrdPtnCode       [   2];    // [string,    2] �����ɼǰŷ������ڵ�            StartPos 55, Length 2
    char    SrtOrdNo2           [  10];    // [long  ,   10] �����ֹ���ȣ2                   StartPos 57, Length 10
    char    EndNo               [  10];    // [long  ,   10] �����ȣ                        StartPos 67, Length 10
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 77, Length 1
} CCEAQ06000OutBlock1, *LPCCEAQ06000OutBlock1;
#define NAME_CCEAQ06000OutBlock1     "CCEAQ06000OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CCEAQ06000OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    FutsOrdQty          [  16];    // [long  ,   16] �����ֹ�����                    StartPos 45, Length 16
    char    FutsExecQty         [  16];    // [long  ,   16] ����ü�����                    StartPos 61, Length 16
} CCEAQ06000OutBlock2, *LPCCEAQ06000OutBlock2;
#define NAME_CCEAQ06000OutBlock2     "CCEAQ06000OutBlock2"

// Out1(*EMPTY*)                  , occurs
typedef struct _CCEAQ06000OutBlock3
{
    char    AcntNo1             [  20];    // [string,   20] ���¹�ȣ1                       StartPos 0, Length 20
    char    OrdDt               [   8];    // [string,    8] �ֹ���                          StartPos 20, Length 8
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ                        StartPos 28, Length 10
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ                      StartPos 38, Length 10
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�                        StartPos 48, Length 9
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 57, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 69, Length 40
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 109, Length 10
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 119, Length 1
    char    MrcTpNm             [  10];    // [string,   10] ������ұ��и�                  StartPos 120, Length 10
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�            StartPos 130, Length 2
    char    FnoOrdprcPtnNm      [  40];    // [string,   40] �����ɼ�ȣ��������              StartPos 132, Length 40
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���                          StartPos 172, Length 13
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����                        StartPos 185, Length 16
    char    OrdTpNm             [  10];    // [string,   10] �ֹ����и�                      StartPos 201, Length 10
    char    ExecTpNm            [  10];    // [string,   10] ü�ᱸ�и�                      StartPos 211, Length 10
    char    ExecPrc             [  13];    // [double, 13.2] ü�ᰡ                          StartPos 221, Length 13
    char    ExecQty             [  16];    // [long  ,   16] ü�����                        StartPos 234, Length 16
    char    CtrctTime           [   9];    // [string,    9] �����ð�                        StartPos 250, Length 9
    char    CtrctNo             [  10];    // [long  ,   10] ������ȣ                        StartPos 259, Length 10
    char    ExecNo              [  10];    // [long  ,   10] ü���ȣ                        StartPos 269, Length 10
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 279, Length 16
    char    UnercQty            [  16];    // [long  ,   16] ��ü�����                      StartPos 295, Length 16
    char    UserId              [  16];    // [string,   16] �����ID                        StartPos 311, Length 16
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 327, Length 2
    char    CommdaCodeNm        [  40];    // [string,   40] ��Ÿ�ü�ڵ��                  StartPos 329, Length 40
    char    IpAddr              [  16];    // [string,   16] IP�ּ�                          StartPos 369, Length 16
    char    TrdPtnTpNm          [  20];    // [string,   20] �ŷ���������                    StartPos 385, Length 20
    char    GrpId               [  20];    // [string,   20] �׷�ID                          StartPos 405, Length 20
} CCEAQ06000OutBlock3, *LPCCEAQ06000OutBlock3;
#define NAME_CCEAQ06000OutBlock3     "CCEAQ06000OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CCEAQ06000_H_
