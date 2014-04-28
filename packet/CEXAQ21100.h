#ifndef _CEXAQ21100_H_
#define _CEXAQ21100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������ �ֹ�ü�᳻����ȸ ( SERVICE=CEXAQ21100,headtype=B,CREATOR=�̽���,CREDATE=2012/07/02 21 )
#pragma pack( push, 1 )

#define NAME_CEXAQ21100     "CEXAQ21100"

// In(*EMPTY*)                    
typedef struct _CEXAQ21100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    ChoicInptTpCode     [   1];    // [string,    1] �����Է±���                    StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ������ȣ                        StartPos 6, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 26, Length 8
    char    PrdtExecTpCode      [   1];    // [string,    1] ü�ᱸ��                        StartPos 34, Length 1
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 35, Length 1
} CEXAQ21100InBlock1, *LPCEXAQ21100InBlock1;
#define NAME_CEXAQ21100InBlock1     "CEXAQ21100InBlock1"

// In(*EMPTY*)                    
typedef struct _CEXAQ21100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    ChoicInptTpCode     [   1];    // [string,    1] �����Է±���                    StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ������ȣ                        StartPos 6, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 26, Length 8
    char    PrdtExecTpCode      [   1];    // [string,    1] ü�ᱸ��                        StartPos 34, Length 1
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 35, Length 1
} CEXAQ21100OutBlock1, *LPCEXAQ21100OutBlock1;
#define NAME_CEXAQ21100OutBlock1     "CEXAQ21100OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CEXAQ21100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����                        StartPos 45, Length 16
    char    ExecQty             [  16];    // [long  ,   16] ü�����                        StartPos 61, Length 16
} CEXAQ21100OutBlock2, *LPCEXAQ21100OutBlock2;
#define NAME_CEXAQ21100OutBlock2     "CEXAQ21100OutBlock2"

// Out1(*EMPTY*)                  , occurs
typedef struct _CEXAQ21100OutBlock3
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
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�          StartPos 130, Length 1
    char    FnoOrdprcPtnNm      [  40];    // [string,   40] �����ɼ�ȣ��������              StartPos 131, Length 40
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���                    StartPos 171, Length 25
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���                          StartPos 196, Length 13
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����                        StartPos 209, Length 16
    char    OrdTpNm             [  10];    // [string,   10] �ֹ����и�                      StartPos 225, Length 10
    char    ExecPrc             [  13];    // [double, 13.2] ü�ᰡ                          StartPos 235, Length 13
    char    ExecQty             [  16];    // [long  ,   16] ü�����                        StartPos 248, Length 16
    char    UnercQty            [  16];    // [long  ,   16] ��ü�����                      StartPos 264, Length 16
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 280, Length 2
    char    CommdaNm            [  40];    // [string,   40] ��Ÿ�ü��                      StartPos 282, Length 40
} CEXAQ21100OutBlock3, *LPCEXAQ21100OutBlock3;
#define NAME_CEXAQ21100OutBlock3     "CEXAQ21100OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CEXAQ21100_H_
