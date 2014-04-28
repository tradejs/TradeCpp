#ifndef _CLNAQ00100_H_
#define _CLNAQ00100_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��Ź�㺸���ڰ���������Ȳ��ȸ ( SERVICE=CLNAQ00100,headtype=B,CREATOR=�̼�ȣ,CREDATE=2012/01/10 15 )
#pragma pack( push, 1 )

#define NAME_CLNAQ00100     "CLNAQ00100"

// In(*EMPTY*)                    
typedef struct _CLNAQ00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 5, Length 1
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 6, Length 12
    char    SecTpCode           [   1];    // [string,    1] �������Ǳ���                    StartPos 18, Length 1
    char    LoanIntrstGrdCode   [   2];    // [string,    2] �������ڵ���ڵ�                StartPos 19, Length 2
    char    LoanTp              [   1];    // [string,    1] ���ⱸ��                        StartPos 21, Length 1
} CLNAQ00100InBlock1, *LPCLNAQ00100InBlock1;
#define NAME_CLNAQ00100InBlock1     "CLNAQ00100InBlock1"

// In(*EMPTY*)                    
typedef struct _CLNAQ00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 5, Length 1
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 6, Length 12
    char    SecTpCode           [   1];    // [string,    1] �������Ǳ���                    StartPos 18, Length 1
    char    LoanIntrstGrdCode   [   2];    // [string,    2] �������ڵ���ڵ�                StartPos 19, Length 2
    char    LoanTp              [   1];    // [string,    1] ���ⱸ��                        StartPos 21, Length 1
} CLNAQ00100OutBlock1, *LPCLNAQ00100OutBlock1;
#define NAME_CLNAQ00100OutBlock1     "CLNAQ00100OutBlock1"

// Out(*EMPTY*)                   , occurs
typedef struct _CLNAQ00100OutBlock2
{
    char    IsuNo               [  12];    // [string,   12] �����ȣ                        StartPos 0, Length 12
    char    IsuNm               [  40];    // [string,   40] �����                          StartPos 12, Length 40
    char    Parprc              [  13];    // [double, 13.2] �׸鰡                          StartPos 52, Length 13
    char    PrdayCprc           [  13];    // [double, 13.2] ��������                        StartPos 65, Length 13
    char    RatVal              [  19];    // [double, 19.8] ������                          StartPos 78, Length 19
    char    SubstPrc            [  13];    // [double, 13.2] ��밡                          StartPos 97, Length 13
    char    RegTpNm             [  20];    // [string,   20] ��ϱ���                        StartPos 110, Length 20
    char    SpotMgnLevyClssNm   [  40];    // [string,   40] �������ű�¡���з���            StartPos 130, Length 40
    char    FnoTrdStopRsnCnts   [  40];    // [string,   40] �ŷ���������                    StartPos 170, Length 40
    char    DgrsPtnNm           [  40];    // [string,   40] ������������                    StartPos 210, Length 40
    char    AcdPtnNm            [  40];    // [string,   40] �������                        StartPos 250, Length 40
    char    MktTpNm             [  20];    // [string,   20] ���屸��                        StartPos 290, Length 20
    char    LmtVal              [  18];    // [long  ,   18] �ѵ���                          StartPos 310, Length 18
    char    AcntLmtVal          [  18];    // [long  ,   18] �����ѵ���                      StartPos 328, Length 18
    char    LoanGrdCode         [   2];    // [string,    2] �������ڵ�                    StartPos 346, Length 2
    char    LoanAmt             [  16];    // [long  ,   16] ����ݾ�                        StartPos 348, Length 16
    char    LoanAbleRat         [  26];    // [double, 26.9] ���Ⱑ����                      StartPos 364, Length 26
    char    LoanIntrat1         [  14];    // [double, 14.4] ��������1                       StartPos 390, Length 14
    char    RegPsnId            [  16];    // [string,   16] �����ID                        StartPos 404, Length 16
    char    Rat01               [  19];    // [double, 19.8] ������                          StartPos 420, Length 19
    char    Rat02               [  19];    // [double, 19.8] ������                          StartPos 439, Length 19
} CLNAQ00100OutBlock2, *LPCLNAQ00100OutBlock2;
#define NAME_CLNAQ00100OutBlock2     "CLNAQ00100OutBlock2"

// Sum(*EMPTY*)                   
typedef struct _CLNAQ00100OutBlock3
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    LrgMnyoutSumAmt     [  16];    // [long  ,   16] ������հ�ݾ�                  StartPos 5, Length 16
} CLNAQ00100OutBlock3, *LPCLNAQ00100OutBlock3;
#define NAME_CLNAQ00100OutBlock3     "CLNAQ00100OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CLNAQ00100_H_
