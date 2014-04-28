#ifndef _CEXAT11100_H_
#define _CEXAT11100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������ �ż�/�ŵ��ֹ� ( SERVICE=CEXAT11100,headtype=B,CREATOR=�̽���,CREDATE=2012/06/27 20 )
#pragma pack( push, 1 )

#define NAME_CEXAT11100     "CEXAT11100"

// In(*EMPTY*)                    
typedef struct _CEXAT11100InBlock1
{
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 33, Length 12
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 45, Length 1
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�          StartPos 46, Length 1
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 47, Length 15
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����                        StartPos 62, Length 16
} CEXAT11100InBlock1, *LPCEXAT11100InBlock1;
#define NAME_CEXAT11100InBlock1     "CEXAT11100InBlock1"

// In(*EMPTY*)                    
typedef struct _CEXAT11100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 33, Length 12
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 45, Length 1
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�          StartPos 46, Length 1
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 47, Length 15
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����                        StartPos 62, Length 16
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���                    StartPos 78, Length 25
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 103, Length 2
} CEXAT11100OutBlock1, *LPCEXAT11100OutBlock1;
#define NAME_CEXAT11100OutBlock1     "CEXAT11100OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CEXAT11100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ                        StartPos 5, Length 10
    char    BrnNm               [  40];    // [string,   40] ������                          StartPos 15, Length 40
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 55, Length 40
    char    IsuNm               [  50];    // [string,   50] �����                          StartPos 95, Length 50
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                    StartPos 145, Length 16
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 161, Length 16
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����ű�                      StartPos 177, Length 16
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����ű�                  StartPos 193, Length 16
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���                    StartPos 209, Length 16
} CEXAT11100OutBlock2, *LPCEXAT11100OutBlock2;
#define NAME_CEXAT11100OutBlock2     "CEXAT11100OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CEXAT11100_H_
