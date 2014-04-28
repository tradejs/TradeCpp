#ifndef _t1954_H_
#define _t1954_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW�Ϻ��ְ�(t1954) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1954     "t1954"

// �⺻�Է�
typedef struct _t1954InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                           StartPos 7, Length 8
    char    cnt                 [   3];    char    _cnt                 ;    // [long  ,    3] �Ǽ�                           StartPos 16, Length 3
} t1954InBlock, *LPt1954InBlock;
#define NAME_t1954InBlock     "t1954InBlock"

// ���
typedef struct _t1954OutBlock
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                           StartPos 0, Length 8
    char    bsjgubun            [   1];    char    _bsjgubun            ;    // [string,    1] �����ڻ걸��                   StartPos 9, Length 1
    char    bscode              [   6];    char    _bscode              ;    // [string,    6] �����ڻ��ڵ�(����)             StartPos 11, Length 6
    char    bjcode              [   3];    char    _bjcode              ;    // [string,    3] �����ڻ��ڵ�(����)             StartPos 18, Length 3
} t1954OutBlock, *LPt1954OutBlock;
#define NAME_t1954OutBlock     "t1954OutBlock"

// ���1, occurs
typedef struct _t1954OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                           StartPos 0, Length 8
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                           StartPos 9, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                           StartPos 18, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                           StartPos 27, Length 8
    char    close               [   8];    char    _close               ;    // [long  ,    8] ����                           StartPos 36, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 45, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 47, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 56, Length 6
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �ŷ���                         StartPos 63, Length 12
    char    bsprice             [   8];    char    _bsprice             ;    // [long  ,    8] �����ڻ�(����)                 StartPos 76, Length 8
    char    bjprice             [   8];    char    _bjprice             ;    // [float ,  8.2] �����ڻ�(����)                 StartPos 85, Length 8
    char    bsign               [   1];    char    _bsign               ;    // [string,    1] ���ϴ�񱸺�                   StartPos 94, Length 1
    char    bschange            [   8];    char    _bschange            ;    // [long  ,    8] ���ϴ��(����)                 StartPos 96, Length 8
    char    bjchange            [   8];    char    _bjchange            ;    // [float ,  8.2] ���ϴ��(����)                 StartPos 105, Length 8
    char    bdiff               [   6];    char    _bdiff               ;    // [float ,  6.2] �����                         StartPos 114, Length 6
    char    bvolume             [  12];    char    _bvolume             ;    // [float ,   12] �����ڻ�ŷ���                 StartPos 121, Length 12
    char    parity              [   6];    char    _parity              ;    // [float ,  6.2] �и�Ƽ                         StartPos 134, Length 6
    char    egearing            [   6];    char    _egearing            ;    // [float ,  6.2] e.��                       StartPos 141, Length 6
    char    premium             [   6];    char    _premium             ;    // [float ,  6.2] �����̾�                       StartPos 148, Length 6
    char    berate              [   6];    char    _berate              ;    // [float ,  6.2] ���ͺб�                       StartPos 155, Length 6
    char    capt                [   6];    char    _capt                ;    // [float ,  6.2] �ں�����                       StartPos 162, Length 6
    char    gearing             [   6];    char    _gearing             ;    // [float ,  6.2] ��                         StartPos 169, Length 6
    char    mness               [   1];    char    _mness               ;    // [string,    1] Moneyness                      StartPos 176, Length 1
} t1954OutBlock1, *LPt1954OutBlock1;
#define NAME_t1954OutBlock1     "t1954OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1954_H_
