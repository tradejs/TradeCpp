#ifndef _CSPBQ00200_H_
#define _CSPBQ00200_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����������űݷ����ֹ����ɼ�����ȸ (  )
#pragma pack( push, 1 )

#define NAME_CSPBQ00200     "CSPBQ00200"

// In(*EMPTY*)                    
typedef struct _CSPBQ00200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 6, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 26, Length 8
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 34, Length 12
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 46, Length 15
    char    RegCommdaCode       [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 61, Length 2
} CSPBQ00200InBlock1, *LPCSPBQ00200InBlock1;
#define NAME_CSPBQ00200InBlock1     "CSPBQ00200InBlock1"

// In(*EMPTY*)                    
typedef struct _CSPBQ00200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���                        StartPos 5, Length 1
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 6, Length 20
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ                    StartPos 26, Length 8
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 34, Length 12
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����                        StartPos 46, Length 15
    char    RegCommdaCode       [   2];    // [string,    2] ��Ÿ�ü�ڵ�                    StartPos 61, Length 2
} CSPBQ00200OutBlock1, *LPCSPBQ00200OutBlock1;
#define NAME_CSPBQ00200OutBlock1     "CSPBQ00200OutBlock1"

// Out(*EMPTY*)                   
typedef struct _CSPBQ00200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 45, Length 40
    char    Dps                 [  16];    // [long  ,   16] ������                          StartPos 85, Length 16
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�                        StartPos 101, Length 16
    char    CrdtPldgRuseAmt     [  16];    // [long  ,   16] �ſ�㺸����ݾ�              StartPos 117, Length 16
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�                StartPos 133, Length 16
    char    SubstOrdAbleAmt     [  16];    // [long  ,   16] ����ֹ����ɱݾ�                StartPos 149, Length 16
    char    MnyMgn              [  16];    // [long  ,   16] �������űݾ�                    StartPos 165, Length 16
    char    SubstMgn            [  16];    // [long  ,   16] ������űݾ�                    StartPos 181, Length 16
    char    SeOrdAbleAmt        [  16];    // [long  ,   16] �ŷ��ұݾ�                      StartPos 197, Length 16
    char    KdqOrdAbleAmt       [  16];    // [long  ,   16] �ڽ��ڱݾ�                      StartPos 213, Length 16
    char    PrsmptDpsD1         [  16];    // [long  ,   16] ����������(D+1)                 StartPos 229, Length 16
    char    PrsmptDpsD2         [  16];    // [long  ,   16] ����������(D+2)                 StartPos 245, Length 16
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] ��ݰ��ɱݾ�                    StartPos 261, Length 16
    char    RcvblAmt            [  16];    // [long  ,   16] �̼��ݾ�                        StartPos 277, Length 16
    char    CmsnRat             [  15];    // [double, 15.5] ��������                        StartPos 293, Length 15
    char    AddLevyAmt          [  16];    // [long  ,   16] �߰�¡���ݾ�                    StartPos 308, Length 16
    char    RuseObjAmt          [  16];    // [long  ,   16] ������ݾ�                  StartPos 324, Length 16
    char    MnyRuseObjAmt       [  16];    // [long  ,   16] ����������ݾ�              StartPos 340, Length 16
    char    FirmMgnRat          [   7];    // [double,  7.4] �̿�����űݷ�                  StartPos 356, Length 7
    char    SubstRuseObjAmt     [  16];    // [long  ,   16] ���������ݾ�              StartPos 363, Length 16
    char    IsuMgnRat           [   7];    // [double,  7.4] �������űݷ�                    StartPos 379, Length 7
    char    AcntMgnRat          [   7];    // [double,  7.4] �������űݷ�                    StartPos 386, Length 7
    char    TrdMgnrt            [   7];    // [double,  7.4] �ŷ����űݷ�                    StartPos 393, Length 7
    char    Cmsn                [  16];    // [long  ,   16] ������                          StartPos 400, Length 16
    char    MgnRat20pctOrdAbleAmt[  16];    // [long  ,   16] ���űݷ�20�ۼ�Ʈ�ֹ����ɱݾ�    StartPos 416, Length 16
    char    MgnRat20OrdAbleQty  [  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ�����ֹ����ɼ� StartPos 432, Length 16
    char    MgnRat30pctOrdAbleAmt[  16];    // [long  ,   16] ���űݷ�30�ۼ�Ʈ�ֹ����ɱݾ�    StartPos 448, Length 16
    char    MgnRat30OrdAbleQty  [  16];    // [long  ,   16] ���űݷ�30�ۼ�Ʈ�ֹ����ɼ���??  StartPos 464, Length 16
    char    MgnRat40pctOrdAbleAmt[  16];    // [long  ,   16] ���űݷ�40�ۼ�Ʈ�ֹ����ɱݾ�    StartPos 480, Length 16
    char    MgnRat40OrdAbleQty  [  16];    // [long  ,   16] ���űݷ�40�ۼ�Ʈ�ֹ����ɼ���??  StartPos 496, Length 16
    char    MgnRat100pctOrdAbleAmt[  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ�ֹ����ɱݾ�   StartPos 512, Length 16
    char    MgnRat100OrdAbleQty [  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ�ֹ����ɼ���?? StartPos 528, Length 16
    char    MgnRat100MnyOrdAbleAmt[  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ�����ֹ����ɱ� StartPos 544, Length 16
    char    MgnRat100MnyOrdAbleQty[  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ�����ֹ����ɼ� StartPos 560, Length 16
    char    MgnRat20pctRuseAbleAmt[  16];    // [long  ,   16] ���űݷ�20�ۼ�Ʈ���밡�ɱݾ�  StartPos 576, Length 16
    char    MgnRat30pctRuseAbleAmt[  16];    // [long  ,   16] ���űݷ�30�ۼ�Ʈ���밡�ɱݾ�  StartPos 592, Length 16
    char    MgnRat40pctRuseAbleAmt[  16];    // [long  ,   16] ���űݷ�40�ۼ�Ʈ���밡�ɱݾ�  StartPos 608, Length 16
    char    MgnRat100pctRuseAbleAmt[  16];    // [long  ,   16] ���űݷ�100�ۼ�Ʈ���밡�ɱݾ� StartPos 624, Length 16
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���                    StartPos 640, Length 16
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                    StartPos 656, Length 16
} CSPBQ00200OutBlock2, *LPCSPBQ00200OutBlock2;
#define NAME_CSPBQ00200OutBlock2     "CSPBQ00200OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CSPBQ00200_H_
