#ifndef _CCEAQ10100_H_
#define _CCEAQ10100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� CME �ֹ����� ����/�ݾ� ��ȸ (  )
#pragma pack( push, 1 )

#define NAME_CCEAQ10100     "CCEAQ10100"

// In(*EMPTY*)                    
typedef struct _CCEAQ10100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 33, Length 1
    char    OrdAmt              [  16];    // [long  ,   16] �ֹ��ݾ�                        StartPos 34, Length 16
    char    RatVal              [  19];    // [double, 19.8] ������                          StartPos 50, Length 19
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 69, Length 12
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 81, Length 1
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���                          StartPos 82, Length 13
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�            StartPos 95, Length 2
} CCEAQ10100InBlock1, *LPCCEAQ10100InBlock1;
#define NAME_CCEAQ10100InBlock1     "CCEAQ10100InBlock1"

// In(*EMPTY*)                    
typedef struct _CCEAQ10100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 33, Length 1
    char    OrdAmt              [  16];    // [long  ,   16] �ֹ��ݾ�                        StartPos 34, Length 16
    char    RatVal              [  19];    // [double, 19.8] ������                          StartPos 50, Length 19
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 69, Length 12
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 81, Length 1
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���                          StartPos 82, Length 13
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�            StartPos 95, Length 2
} CCEAQ10100OutBlock1, *LPCCEAQ10100OutBlock1;
#define NAME_CCEAQ10100OutBlock1     "CCEAQ10100OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CCEAQ10100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    QryDt               [   8];    // [string,    8] ��ȸ��                          StartPos 45, Length 8
    char    NowPrc              [  15];    // [double, 15.2] ���簡                          StartPos 53, Length 15
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���                    StartPos 68, Length 16
    char    NewOrdAbleQty       [  16];    // [long  ,   16] �ű��ֹ����ɼ���                StartPos 84, Length 16
    char    LqdtOrdAbleQty      [  16];    // [long  ,   16] û���ֹ����ɼ���                StartPos 100, Length 16
    char    UsePreargMgn        [  16];    // [long  ,   16] ��뿹�����űݾ�                StartPos 116, Length 16
    char    UsePreargMnyMgn     [  16];    // [long  ,   16] ��뿹���������űݾ�            StartPos 132, Length 16
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                    StartPos 148, Length 16
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 164, Length 16
} CCEAQ10100OutBlock2, *LPCCEAQ10100OutBlock2;
#define NAME_CCEAQ10100OutBlock2     "CCEAQ10100OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CCEAQ10100_H_
