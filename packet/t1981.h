#ifndef _t1981_H_
#define _t1981_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ڻ긮��Ʈ��ȸ(t1981) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1981     "t1981"

// �⺻�Է�
typedef struct _t1981InBlock
{
    char    mkt_gb              [   1];    char    _mkt_gb              ;    // [string,    1] ���屸��(0:��ü1:�ڽ���2:�ڽ��� StartPos 0, Length 1
} t1981InBlock, *LPt1981InBlock;
#define NAME_t1981InBlock     "t1981InBlock"

// ���1
typedef struct _t1981OutBlock
{
    char    ksp_cnt             [   4];    char    _ksp_cnt             ;    // [string,    4] �ڽ�������Ǽ�                 StartPos 0, Length 4
    char    ksd_cnt             [   4];    char    _ksd_cnt             ;    // [string,    4] �ڽ�������Ǽ�                 StartPos 5, Length 4
} t1981OutBlock, *LPt1981OutBlock;
#define NAME_t1981OutBlock     "t1981OutBlock"

// ���1, occurs
typedef struct _t1981OutBlock1
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
    char    expcode             [  12];    char    _expcode             ;    // [string,   12] ǥ���ڵ�                       StartPos 7, Length 12
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                         StartPos 20, Length 20
    char    price               [  12];    char    _price               ;    // [string,   12] ���簡                         StartPos 41, Length 12
    char    sign                [   1];    char    _sign                ;    // [string,    1] ��ȣ                           StartPos 54, Length 1
    char    change              [  12];    char    _change              ;    // [string,   12] ���                           StartPos 56, Length 12
    char    rate                [   5];    char    _rate                ;    // [float ,  5.2] �����                         StartPos 69, Length 5
    char    volume              [  12];    char    _volume              ;    // [string,   12] �����ŷ���(��)                 StartPos 75, Length 12
    char    value               [  12];    char    _value               ;    // [string,   12] �����ŷ����(�鸸)             StartPos 88, Length 12
    char    mkt_gb              [   1];    char    _mkt_gb              ;    // [string,    1] ���屸��                       StartPos 101, Length 1
} t1981OutBlock1, *LPt1981OutBlock1;
#define NAME_t1981OutBlock1     "t1981OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1981_H_
