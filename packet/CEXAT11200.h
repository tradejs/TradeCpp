#ifndef _CEXAT11200_H_
#define _CEXAT11200_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������ �����ֹ� ( SERVICE=CEXAT11200,headtype=B,CREATOR=�̽���,CREDATE=2012/06/27 21 )
#pragma pack( push, 1 )

#define NAME_CEXAT11200     "CEXAT11200"

// In(*EMPTY*)                    
typedef struct _CEXAT11200InBlock1
{
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ                      StartPos 5, Length 10
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 15, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 35, Length 8
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 43, Length 12
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 57, Length 15
} CEXAT11200InBlock1, *LPCEXAT11200InBlock1;
#define NAME_CEXAT11200InBlock1     "CEXAT11200InBlock1"

// In(*EMPTY*)                    
typedef struct _CEXAT11200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ                      StartPos 5, Length 10
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 15, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 35, Length 8
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 43, Length 12
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�                    StartPos 55, Length 1
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�          StartPos 56, Length 1
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 57, Length 15
    char    MdfyQty             [  16];    // [long  ,   16] ��������                        StartPos 72, Length 16
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���                    StartPos 88, Length 25
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 113, Length 2
} CEXAT11200OutBlock1, *LPCEXAT11200OutBlock1;
#define NAME_CEXAT11200OutBlock1     "CEXAT11200OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CEXAT11200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ                        StartPos 5, Length 10
    char    BrnNm               [  40];    // [string,   40] ������                          StartPos 15, Length 40
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 55, Length 40
    char    IsuNm               [  50];    // [string,   50] �����                          StartPos 95, Length 50
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                    StartPos 145, Length 16
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 161, Length 16
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�                    StartPos 177, Length 16
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�                StartPos 193, Length 16
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���                    StartPos 209, Length 16
} CEXAT11200OutBlock2, *LPCEXAT11200OutBlock2;
#define NAME_CEXAT11200OutBlock2     "CEXAT11200OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CEXAT11200_H_
