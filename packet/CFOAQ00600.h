#ifndef _CFOAQ00600_H_
#define _CFOAQ00600_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� �����ֹ�ü�᳻����ȸ (  )
#pragma pack( push, 1 )

#define NAME_CFOAQ00600     "CFOAQ00600"

// In(*EMPTY*)                    
typedef struct _CFOAQ00600InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    FnoClssCode         [   2];    // [string,    2] �����ɼǺз��ڵ�                StartPos 49, Length 2
    char    PrdgrpCode          [   2];    // [string,    2] ��ǰ���ڵ�                      StartPos 51, Length 2
    char    PrdtExecTpCode      [   1];    // [string,    1] ü�ᱸ��                        StartPos 53, Length 1
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 54, Length 1
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 55, Length 2
} CFOAQ00600InBlock1, *LPCFOAQ00600InBlock1;
#define NAME_CFOAQ00600InBlock1     "CFOAQ00600InBlock1"

// In(*EMPTY*)                    
typedef struct _CFOAQ00600OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    FnoClssCode         [   2];    // [string,    2] �����ɼǺз��ڵ�                StartPos 49, Length 2
    char    PrdgrpCode          [   2];    // [string,    2] ��ǰ���ڵ�                      StartPos 51, Length 2
    char    PrdtExecTpCode      [   1];    // [string,    1] ü�ᱸ��                        StartPos 53, Length 1
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 54, Length 1
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 55, Length 2
} CFOAQ00600OutBlock1, *LPCFOAQ00600OutBlock1;
#define NAME_CFOAQ00600OutBlock1     "CFOAQ00600OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CFOAQ00600OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    FutsOrdQty          [  16];    // [long  ,   16] �����ֹ�����                    StartPos 45, Length 16
    char    FutsExecQty         [  16];    // [long  ,   16] ����ü�����                    StartPos 61, Length 16
    char    OptOrdQty           [  16];    // [long  ,   16] �ɼ��ֹ�����                    StartPos 77, Length 16
    char    OptExecQty          [  16];    // [long  ,   16] �ɼ�ü�����                    StartPos 93, Length 16
} CFOAQ00600OutBlock2, *LPCFOAQ00600OutBlock2;
#define NAME_CFOAQ00600OutBlock2     "CFOAQ00600OutBlock2"

// Out1(*EMPTY*)                  , occurs
typedef struct _CFOAQ00600OutBlock3
{
    char    OrdDt               [   8];    // [string,    8] �ֹ���                          StartPos 0, Length 8
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ                        StartPos 8, Length 10
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ                      StartPos 18, Length 10
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�                        StartPos 28, Length 9
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 37, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 49, Length 40
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 89, Length 10
    char    MrcTpNm             [  10];    // [string,   10] ������ұ��и�                  StartPos 99, Length 10
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�            StartPos 109, Length 2
    char    FnoOrdprcPtnNm      [  40];    // [string,   40] �����ɼ�ȣ��������              StartPos 111, Length 40
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���                          StartPos 151, Length 13
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����                        StartPos 164, Length 16
    char    OrdTpNm             [  10];    // [string,   10] �ֹ����и�                      StartPos 180, Length 10
    char    ExecTpNm            [  10];    // [string,   10] ü�ᱸ�и�                      StartPos 190, Length 10
    char    ExecPrc             [  13];    // [double, 13.2] ü�ᰡ                          StartPos 200, Length 13
    char    ExecQty             [  16];    // [long  ,   16] ü�����                        StartPos 213, Length 16
    char    CtrctTime           [   9];    // [string,    9] �����ð�                        StartPos 229, Length 9
    char    CtrctNo             [  10];    // [long  ,   10] ������ȣ                        StartPos 238, Length 10
    char    ExecNo              [  10];    // [long  ,   10] ü���ȣ                        StartPos 248, Length 10
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 258, Length 16
    char    UnercQty            [  16];    // [long  ,   16] ��ü�����                      StartPos 274, Length 16
    char    UserId              [  16];    // [string,   16] �����ID                        StartPos 290, Length 16
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 306, Length 2
    char    CommdaCodeNm        [  40];    // [string,   40] ��Ÿ�ü�ڵ��                  StartPos 308, Length 40
} CFOAQ00600OutBlock3, *LPCFOAQ00600OutBlock3;
#define NAME_CFOAQ00600OutBlock3     "CFOAQ00600OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CFOAQ00600_H_
