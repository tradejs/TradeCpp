#ifndef _FOCCQ33700_H_
#define _FOCCQ33700_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ� �Ⱓ�� ���� ���ͷ� ��Ȳ ( SERVICE=FOCCQ33700,headtype=B,CREATOR=�̼���,CREDATE=2013/01/08 10 )
#pragma pack( push, 1 )

#define NAME_FOCCQ33700     "FOCCQ33700"

// In(*EMPTY*)                    
typedef struct _FOCCQ33700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 49, Length 1
    char    BaseAmtTp           [   1];    // [string,    1] ���رݾױ���                    StartPos 50, Length 1
    char    QryTermTp           [   1];    // [string,    1] ��ȸ�Ⱓ����                    StartPos 51, Length 1
    char    PnlCalcTpCode       [   1];    // [string,    1] ���ͻ��ⱸ���ڵ�                StartPos 52, Length 1
} FOCCQ33700InBlock1, *LPFOCCQ33700InBlock1;
#define NAME_FOCCQ33700InBlock1     "FOCCQ33700InBlock1"

// In(*EMPTY*)                    
typedef struct _FOCCQ33700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                        StartPos 5, Length 20
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                        StartPos 25, Length 8
    char    QrySrtDt            [   8];    // [string,    8] ��ȸ������                      StartPos 33, Length 8
    char    QryEndDt            [   8];    // [string,    8] ��ȸ������                      StartPos 41, Length 8
    char    QryTp               [   1];    // [string,    1] ��ȸ����                        StartPos 49, Length 1
    char    BaseAmtTp           [   1];    // [string,    1] ���رݾױ���                    StartPos 50, Length 1
    char    QryTermTp           [   1];    // [string,    1] ��ȸ�Ⱓ����                    StartPos 51, Length 1
    char    PnlCalcTpCode       [   1];    // [string,    1] ���ͻ��ⱸ���ڵ�                StartPos 52, Length 1
} FOCCQ33700OutBlock1, *LPFOCCQ33700OutBlock1;
#define NAME_FOCCQ33700OutBlock1     "FOCCQ33700OutBlock1"

// Out(*EMPTY*)                   
typedef struct _FOCCQ33700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                      StartPos 0, Length 5
    char    AcntNm              [  40];    // [string,   40] ���¸�                          StartPos 5, Length 40
    char    InAmt               [  16];    // [long  ,   16] �Աݾ�                          StartPos 45, Length 16
    char    OutAmt              [  16];    // [long  ,   16] ��ݾ�                          StartPos 61, Length 16
    char    FnoCtrctAmt         [  16];    // [long  ,   16] �����ɼǾ����ݾ�                StartPos 77, Length 16
    char    InvstPramtAvrbalAmt [  16];    // [long  ,   16] ���ڿ������ܱݾ�                StartPos 93, Length 16
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������                    StartPos 109, Length 16
    char    OptBsnPnlAmt        [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 125, Length 16
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�                StartPos 141, Length 16
    char    InvstPlAmt          [  16];    // [long  ,   16] ���ڼ��ͱݾ�                    StartPos 157, Length 16
    char    ErnRat              [  12];    // [double, 12.6] ���ͷ�                          StartPos 173, Length 12
} FOCCQ33700OutBlock2, *LPFOCCQ33700OutBlock2;
#define NAME_FOCCQ33700OutBlock2     "FOCCQ33700OutBlock2"

// OutList(*EMPTY*)               , occurs
typedef struct _FOCCQ33700OutBlock3
{
    char    TrdDt               [   8];    // [string,    8] �ŷ���                          StartPos 0, Length 8
    char    FdDpsastAmt         [  16];    // [long  ,   16] ���ʿ�Ź�ڻ�ݾ�                StartPos 8, Length 16
    char    EotDpsastAmt        [  16];    // [long  ,   16] �⸻��Ź�ڻ�ݾ�                StartPos 24, Length 16
    char    InAmt               [  16];    // [long  ,   16] �Աݾ�                          StartPos 40, Length 16
    char    OutAmt              [  16];    // [long  ,   16] ��ݾ�                          StartPos 56, Length 16
    char    InvstAvrbalPramt    [  16];    // [long  ,   16] ���ڿ������ܱݾ�                StartPos 72, Length 16
    char    InvstPlAmt          [  16];    // [long  ,   16] ���ڼ��ͱݾ�                    StartPos 88, Length 16
    char    Ernrat              [  12];    // [double, 12.6] ���ͷ�                          StartPos 104, Length 12
    char    FnoCtrctAmt         [  16];    // [long  ,   16] �����ɼǾ����ݾ�                StartPos 116, Length 16
    char    Trnrat              [  12];    // [double, 12.6] ȸ����                          StartPos 132, Length 12
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������                    StartPos 144, Length 16
    char    OptBsnPnlAmt        [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�                StartPos 160, Length 16
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�                StartPos 176, Length 16
} FOCCQ33700OutBlock3, *LPFOCCQ33700OutBlock3;
#define NAME_FOCCQ33700OutBlock3     "FOCCQ33700OutBlock3"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _FOCCQ33700_H_
