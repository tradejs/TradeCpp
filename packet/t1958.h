#ifndef _t1958_H_
#define _t1958_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW�����(t1958) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1958     "t1958"

// �Է�
typedef struct _t1958InBlock
{
    char    shcode1             [   6];    char    _shcode1             ;    // [string,    6] �����ڵ�1                      StartPos 0, Length 6
    char    shcode2             [   6];    char    _shcode2             ;    // [string,    6] �����ڵ�2                      StartPos 7, Length 6
} t1958InBlock, *LPt1958InBlock;
#define NAME_t1958InBlock     "t1958InBlock"

// ���
typedef struct _t1958OutBlock
{
    char    hname               [  40];    char    _hname               ;    // [string,   40] �����                         StartPos 0, Length 40
    char    item1               [  12];    char    _item1               ;    // [string,   12] �����ڻ�                       StartPos 41, Length 12
    char    issuernmk           [  40];    char    _issuernmk           ;    // [string,   40] �����                         StartPos 54, Length 40
    char    elwopt              [   2];    char    _elwopt              ;    // [string,    2] ��ǲ����                       StartPos 95, Length 2
    char    elwtype             [   2];    char    _elwtype             ;    // [string,    2] �����                       StartPos 98, Length 2
    char    settletype          [   2];    char    _settletype          ;    // [string,    2] �������                       StartPos 101, Length 2
    char    elwexec             [   8];    char    _elwexec             ;    // [float ,  8.2] ��簡                         StartPos 104, Length 8
    char    convrate            [  12];    char    _convrate            ;    // [float , 12.4] ��ȯ����                       StartPos 113, Length 12
    char    listing             [  12];    char    _listing             ;    // [float ,   12] �������                       StartPos 126, Length 12
    char    mmsdate             [   8];    char    _mmsdate             ;    // [string,    8] ��簳����                     StartPos 139, Length 8
    char    lastdate            [   8];    char    _lastdate            ;    // [string,    8] �����ŷ���                     StartPos 148, Length 8
    char    nofdays             [   4];    char    _nofdays             ;    // [long  ,    4] �ŷ������ϼ�                   StartPos 157, Length 4
    char    payday              [   8];    char    _payday              ;    // [string,    8] ������                         StartPos 162, Length 8
    char    parity              [   6];    char    _parity              ;    // [float ,  6.2] �и�Ƽ                         StartPos 171, Length 6
    char    premium             [   6];    char    _premium             ;    // [float ,  6.2] �����̾�                       StartPos 178, Length 6
    char    berate              [   6];    char    _berate              ;    // [float ,  6.2] ���ͺб�                       StartPos 185, Length 6
    char    capt                [   6];    char    _capt                ;    // [float ,  6.2] �ں�����                       StartPos 192, Length 6
    char    gearing             [   6];    char    _gearing             ;    // [float ,  6.2] ��                         StartPos 199, Length 6
    char    egearing            [   6];    char    _egearing            ;    // [float ,  6.2] e.��                       StartPos 206, Length 6
    char    price               [   8];    char    _price               ;    // [long  ,    8] ����                           StartPos 213, Length 8
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �ŷ���                         StartPos 222, Length 12
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 235, Length 6
} t1958OutBlock, *LPt1958OutBlock;
#define NAME_t1958OutBlock     "t1958OutBlock"

// ���1
typedef struct _t1958OutBlock1
{
    char    hname               [  40];    char    _hname               ;    // [string,   40] �����                         StartPos 0, Length 40
    char    item1               [  12];    char    _item1               ;    // [string,   12] �����ڻ�                       StartPos 41, Length 12
    char    issuernmk           [  40];    char    _issuernmk           ;    // [string,   40] �����                         StartPos 54, Length 40
    char    elwopt              [   2];    char    _elwopt              ;    // [string,    2] ��ǲ����                       StartPos 95, Length 2
    char    elwtype             [   2];    char    _elwtype             ;    // [string,    2] �����                       StartPos 98, Length 2
    char    settletype          [   2];    char    _settletype          ;    // [string,    2] �������                       StartPos 101, Length 2
    char    elwexec             [   8];    char    _elwexec             ;    // [float ,  8.2] ��簡                         StartPos 104, Length 8
    char    convrate            [  12];    char    _convrate            ;    // [float , 12.4] ��ȯ����                       StartPos 113, Length 12
    char    listing             [  12];    char    _listing             ;    // [float ,   12] �������                       StartPos 126, Length 12
    char    mmsdate             [   8];    char    _mmsdate             ;    // [string,    8] ��簳����                     StartPos 139, Length 8
    char    lastdate            [   8];    char    _lastdate            ;    // [string,    8] �����ŷ���                     StartPos 148, Length 8
    char    nofdays             [   4];    char    _nofdays             ;    // [long  ,    4] �ŷ������ϼ�                   StartPos 157, Length 4
    char    payday              [   8];    char    _payday              ;    // [string,    8] ������                         StartPos 162, Length 8
    char    parity              [   6];    char    _parity              ;    // [float ,  6.2] �и�Ƽ                         StartPos 171, Length 6
    char    premium             [   6];    char    _premium             ;    // [float ,  6.2] �����̾�                       StartPos 178, Length 6
    char    berate              [   6];    char    _berate              ;    // [float ,  6.2] ���ͺб�                       StartPos 185, Length 6
    char    capt                [   6];    char    _capt                ;    // [float ,  6.2] �ں�����                       StartPos 192, Length 6
    char    gearing             [   6];    char    _gearing             ;    // [float ,  6.2] ��                         StartPos 199, Length 6
    char    egearing            [   6];    char    _egearing            ;    // [float ,  6.2] e.��                       StartPos 206, Length 6
    char    price               [   8];    char    _price               ;    // [long  ,    8] ����                           StartPos 213, Length 8
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �ŷ���                         StartPos 222, Length 12
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 235, Length 6
} t1958OutBlock1, *LPt1958OutBlock1;
#define NAME_t1958OutBlock1     "t1958OutBlock1"

// ���2
typedef struct _t1958OutBlock2
{
    char    hnamecmp            [   6];    char    _hnamecmp            ;    // [string,    6] ������                     StartPos 0, Length 6
    char    item1cmp            [   6];    char    _item1cmp            ;    // [string,    6] �����ڻ��                   StartPos 7, Length 6
    char    issuernmkcmp        [   6];    char    _issuernmkcmp        ;    // [string,    6] ������                     StartPos 14, Length 6
    char    elwoptcmp           [   6];    char    _elwoptcmp           ;    // [string,    6] ��ǲ���к�                   StartPos 21, Length 6
    char    elwtypecmp          [   6];    char    _elwtypecmp          ;    // [string,    6] ����ĺ�                   StartPos 28, Length 6
    char    settlecmp           [   6];    char    _settlecmp           ;    // [string,    6] ���������                   StartPos 35, Length 6
    char    elwexeccmp          [   8];    char    _elwexeccmp          ;    // [float ,  8.2] ��簡��                     StartPos 42, Length 8
    char    convcmp             [  12];    char    _convcmp             ;    // [float , 12.4] ��ȯ������                   StartPos 51, Length 12
    char    listingcmp          [  12];    char    _listingcmp          ;    // [float ,   12] ���������                   StartPos 64, Length 12
    char    mmsdatecmp          [   6];    char    _mmsdatecmp          ;    // [string,    6] ��簳���Ϻ�                 StartPos 77, Length 6
    char    lastdatecmp         [   6];    char    _lastdatecmp         ;    // [string,    6] �����ŷ��Ϻ�                 StartPos 84, Length 6
    char    nofdayscmp          [   6];    char    _nofdayscmp          ;    // [string,    6] �ŷ������ϼ���               StartPos 91, Length 6
    char    paydaycmp           [   6];    char    _paydaycmp           ;    // [string,    6] �����Ϻ�                     StartPos 98, Length 6
    char    paritycmp           [   6];    char    _paritycmp           ;    // [float ,  6.2] �и�Ƽ��                     StartPos 105, Length 6
    char    premiumcmp          [   6];    char    _premiumcmp          ;    // [float ,  6.2] �����̾���                   StartPos 112, Length 6
    char    beratecmp           [   6];    char    _beratecmp           ;    // [float ,  6.2] ���ͺб��                   StartPos 119, Length 6
    char    captcmp             [   6];    char    _captcmp             ;    // [float ,  6.2] �ں�������                   StartPos 126, Length 6
    char    gearingcmp          [   6];    char    _gearingcmp          ;    // [float ,  6.2] ����                     StartPos 133, Length 6
    char    egearingcmp         [   6];    char    _egearingcmp         ;    // [float ,  6.2] e.����                   StartPos 140, Length 6
    char    pricecmp            [   8];    char    _pricecmp            ;    // [long  ,    8] ���ݺ�                       StartPos 147, Length 8
    char    volumecmp           [  12];    char    _volumecmp           ;    // [float ,   12] �ŷ�����                     StartPos 156, Length 12
    char    diffcmp             [   6];    char    _diffcmp             ;    // [float ,  6.2] �������                     StartPos 169, Length 6
} t1958OutBlock2, *LPt1958OutBlock2;
#define NAME_t1958OutBlock2     "t1958OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1958_H_
