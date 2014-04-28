#ifndef _CCEAT00200_H_
#define _CCEAT00200_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// CME �����ֹ� (  )
#pragma pack( push, 1 )

#define NAME_CCEAT00200     "CCEAT00200"

// In(*EMPTY*)                    
typedef struct _CCEAT00200InBlock1
{
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ               
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ               
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ       
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ             
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�   
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����               
    char    MdfyQty             [  16];    // [long  ,   16] ��������               
} CCEAT00200InBlock1, *LPCCEAT00200InBlock1;
#define NAME_CCEAT00200InBlock1     "CCEAT00200InBlock1"

// In(*EMPTY*)                    
typedef struct _CCEAT00200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�                    StartPos 5, Length 2
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 7, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 27, Length 8
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ                StartPos 35, Length 12
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�            StartPos 47, Length 2
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ                      StartPos 49, Length 10
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�            StartPos 59, Length 2
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 61, Length 15
    char    MdfyQty             [  16];    // [long  ,   16] ��������                        StartPos 76, Length 16
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 92, Length 2
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�                StartPos 94, Length 9
    char    GrpId               [  20];    // [string,   20] �׷�ID                          StartPos 103, Length 20
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ                    StartPos 123, Length 10
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ                  StartPos 133, Length 10
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ                      StartPos 143, Length 10
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ                      StartPos 153, Length 10
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ                      StartPos 163, Length 10
    char    MgempNo             [   9];    // [string,    9] ���������ȣ                    StartPos 173, Length 9
    char    FundId              [  12];    // [string,   12] �ݵ�ID                          StartPos 182, Length 12
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ                  StartPos 194, Length 10
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ                    StartPos 204, Length 10
} CCEAT00200OutBlock1, *LPCCEAT00200OutBlock1;
#define NAME_CCEAT00200OutBlock1     "CCEAT00200OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CCEAT00200OutBlock2
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
} CCEAT00200OutBlock2, *LPCCEAT00200OutBlock2;
#define NAME_CCEAT00200OutBlock2     "CCEAT00200OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CCEAT00200_H_
