#ifndef _CCEAQ01100_H_
#define _CCEAQ01100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� CME �ŸŰŷ���Ȳ ( SERVICE=CCEAQ01100,headtype=B,CREATOR=������,CREDATE=2013/07/19 11 )
#pragma pack( push, 1 )

#define NAME_CCEAQ01100     "CCEAQ01100"

// In(*EMPTY*)                    
typedef struct _CCEAQ01100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 49, Length 1
} CCEAQ01100InBlock1, *LPCCEAQ01100InBlock1;
#define NAME_CCEAQ01100InBlock1     "CCEAQ01100InBlock1"

// In(*EMPTY*)                    
typedef struct _CCEAQ01100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    StnlnSeqTp          [   1];    // [string,    1] ���ļ�������                    StartPos 49, Length 1
} CCEAQ01100OutBlock1, *LPCCEAQ01100OutBlock1;
#define NAME_CCEAQ01100OutBlock1     "CCEAQ01100OutBlock1"

// Sum(*EMPTY*)                   
typedef struct _CCEAQ01100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 45, Length 16
    char    FnoCtrctAmt         [  16];    // [long  ,   16] �����ɼǾ����ݾ�                StartPos 61, Length 16
    char    CmsnAmtSumAmt       [  16];    // [long  ,   16] �������հ�ݾ�                  StartPos 77, Length 16
} CCEAQ01100OutBlock2, *LPCCEAQ01100OutBlock2;
#define NAME_CCEAQ01100OutBlock2     "CCEAQ01100OutBlock2"

// Out(*EMPTY*)                   , occurs
typedef struct _CCEAQ01100OutBlock3
{
    char    BnsDt               [   8];    // [string,    8] �Ÿ���                          StartPos 0, Length 8
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ                        StartPos 8, Length 10
    char    CtrctNo             [  10];    // [long  ,   10] ������ȣ                        StartPos 18, Length 10
    char    ExecNo              [  10];    // [long  ,   10] ü���ȣ                        StartPos 28, Length 10
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 38, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 50, Length 40
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 90, Length 1
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���                        StartPos 91, Length 10
    char    BgnCtrctIdxExecPrc  [  13];    // [double, 13.2] ���ʾ�������ü�ᰡ              StartPos 101, Length 13
    char    BgnAmt              [  16];    // [long  ,   16] ���ʱݾ�                        StartPos 114, Length 16
    char    CtrctQty            [  16];    // [long  ,   16] ��������                        StartPos 130, Length 16
    char    ExecPrc             [  13];    // [double, 13.2] ü�ᰡ                          StartPos 146, Length 13
    char    CtrctAmt            [  16];    // [long  ,   16] �����ݾ�                        StartPos 159, Length 16
    char    CmsnAmt             [  16];    // [long  ,   16] ������ݾ�                      StartPos 175, Length 16
    char    BnsplAmt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                    StartPos 191, Length 16
} CCEAQ01100OutBlock3, *LPCCEAQ01100OutBlock3;
#define NAME_CCEAQ01100OutBlock3     "CCEAQ01100OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CCEAQ01100_H_
