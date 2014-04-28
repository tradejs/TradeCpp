#ifndef _t1964_H_
#define _t1964_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW������(t1964) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1964     "t1964"

// �⺻�Է�
typedef struct _t1964InBlock
{
    char    item                [  12];    char    _item                ;    // [string,   12] �����ڻ��ڵ�                   StartPos 0, Length 12
    char    issuercd            [  12];    char    _issuercd            ;    // [string,   12] �����                         StartPos 13, Length 12
    char    lastmonth           [   6];    char    _lastmonth           ;    // [string,    6] �������                       StartPos 26, Length 6
    char    elwopt              [   1];    char    _elwopt              ;    // [string,    1] ��ǲ����                       StartPos 33, Length 1
    char    atmgubun            [   1];    char    _atmgubun            ;    // [string,    1] �Ӵϱ���                       StartPos 35, Length 1
    char    elwtype             [   2];    char    _elwtype             ;    // [string,    2] �Ǹ������                   StartPos 37, Length 2
    char    settletype          [   2];    char    _settletype          ;    // [string,    2] �������                       StartPos 40, Length 2
    char    elwexecgubun        [   1];    char    _elwexecgubun        ;    // [string,    1] �������ڻ걸��               StartPos 43, Length 1
    char    fromrat             [   5];    char    _fromrat             ;    // [string,    5] ���ۺ���                       StartPos 45, Length 5
    char    torat               [   5];    char    _torat               ;    // [string,    5] �������                       StartPos 51, Length 5
    char    volume              [  12];    char    _volume              ;    // [string,   12] �ŷ���                         StartPos 57, Length 12
} t1964InBlock, *LPt1964InBlock;
#define NAME_t1964InBlock     "t1964InBlock"

// ���1, occurs
typedef struct _t1964OutBlock1
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] ELW�ڵ�                        StartPos 0, Length 6
    char    hname               [  40];    char    _hname               ;    // [string,   40] �����                         StartPos 7, Length 40
    char    item1               [   6];    char    _item1               ;    // [string,    6] �����ڻ��ڵ�                   StartPos 48, Length 6
    char    itemnm              [  20];    char    _itemnm              ;    // [string,   20] �����ڻ��                     StartPos 55, Length 20
    char    issuernmk           [  40];    char    _issuernmk           ;    // [string,   40] �����                         StartPos 76, Length 40
    char    elwopt              [   4];    char    _elwopt              ;    // [string,    4] ��ǲ����                       StartPos 117, Length 4
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 122, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 131, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 133, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 142, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                         StartPos 149, Length 12
    char    elwexec             [  10];    char    _elwexec             ;    // [float , 10.2] ��簡                         StartPos 162, Length 10
    char    jandatecnt          [   8];    char    _jandatecnt          ;    // [long  ,    8] �����ϼ�                       StartPos 173, Length 8
    char    convrate            [   8];    char    _convrate            ;    // [float ,  8.4] ��ȯ����                       StartPos 182, Length 8
    char    lastdate            [   8];    char    _lastdate            ;    // [string,    8] �����ŷ���                     StartPos 191, Length 8
    char    mmsdate             [   8];    char    _mmsdate             ;    // [string,    8] ��簳����                     StartPos 200, Length 8
    char    payday              [   8];    char    _payday              ;    // [string,    8] ������                         StartPos 209, Length 8
    char    listing             [   8];    char    _listing             ;    // [long  ,    8] �������                       StartPos 218, Length 8
    char    atmgbnm             [  10];    char    _atmgbnm             ;    // [string,   10] �Ӵϱ���                       StartPos 227, Length 10
    char    parity              [   6];    char    _parity              ;    // [float ,  6.2] �и�Ƽ                         StartPos 238, Length 6
    char    preminum            [  10];    char    _preminum            ;    // [float , 10.2] �����̾�                       StartPos 245, Length 10
    char    spread              [   3];    char    _spread              ;    // [float ,  3.2] ��������                       StartPos 256, Length 3
    char    berate              [   6];    char    _berate              ;    // [float ,  6.2] ���ͺб���                     StartPos 260, Length 6
    char    capt                [   6];    char    _capt                ;    // [float ,  6.2] �ں�������                     StartPos 267, Length 6
    char    gearing             [   6];    char    _gearing             ;    // [float ,  6.2] ��                         StartPos 274, Length 6
    char    egearing            [   6];    char    _egearing            ;    // [float ,  6.2] e��                        StartPos 281, Length 6
    char    itemprice           [   8];    char    _itemprice           ;    // [long  ,    8] �����ڻ����簡                 StartPos 288, Length 8
    char    itemsign            [   1];    char    _itemsign            ;    // [string,    1] �����ڻ����ϴ�񱸺�           StartPos 297, Length 1
    char    itemchange          [   8];    char    _itemchange          ;    // [long  ,    8] �����ڻ����ϴ��               StartPos 299, Length 8
    char    itemdiff            [   6];    char    _itemdiff            ;    // [float ,  6.2] �����ڻ�����                 StartPos 308, Length 6
    char    itemvolume          [  12];    char    _itemvolume          ;    // [long  ,   12] �����ڻ�ŷ���                 StartPos 315, Length 12
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϰŷ���                     StartPos 328, Length 12
    char    theoryprice         [  10];    char    _theoryprice         ;    // [float , 10.2] �̷а�                         StartPos 341, Length 10
    char    lp_rate             [   5];    char    _lp_rate             ;    // [float ,  5.2] LP��������                     StartPos 352, Length 5
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���纯����                     StartPos 358, Length 6
    char    delta               [  10];    char    _delta               ;    // [float , 10.6] ��Ÿ                           StartPos 365, Length 10
    char    theta               [  10];    char    _theta               ;    // [float , 10.6] ��Ÿ                           StartPos 376, Length 10
} t1964OutBlock1, *LPt1964OutBlock1;
#define NAME_t1964OutBlock1     "t1964OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1964_H_
