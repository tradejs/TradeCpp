#ifndef _t1973_H_
#define _t1973_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW�ð��뺰����ü����ȸ(t1973) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1973     "t1973"

// �⺻�Է�
typedef struct _t1973InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
    char    cts_time            [   8];    char    _cts_time            ;    // [string,    8] �ð�CTS                        StartPos 7, Length 8
} t1973InBlock, *LPt1973InBlock;
#define NAME_t1973InBlock     "t1973InBlock"

// ���
typedef struct _t1973OutBlock
{
    char    cts_time            [   8];    char    _cts_time            ;    // [string,    8] �ð�CTS                        StartPos 0, Length 8
} t1973OutBlock, *LPt1973OutBlock;
#define NAME_t1973OutBlock     "t1973OutBlock"

// ���1, occurs
typedef struct _t1973OutBlock1
{
    char    chetime             [   8];    char    _chetime             ;    // [string,    8] �ð�                           StartPos 0, Length 8
    char    yeprice             [   8];    char    _yeprice             ;    // [long  ,    8] ����ü�ᰡ��                   StartPos 9, Length 8
    char    yegubun             [   1];    char    _yegubun             ;    // [string,    1] ����ü�ᱸ��                   StartPos 18, Length 1
    char    jnilysign           [   1];    char    _jnilysign           ;    // [string,    1] ����������񱸺�               StartPos 20, Length 1
    char    jnilychange         [   8];    char    _jnilychange         ;    // [long  ,    8] �����������                   StartPos 22, Length 8
    char    yediff              [   6];    char    _yediff              ;    // [float ,  6.2] ����ü������                 StartPos 31, Length 6
    char    yevolume            [  12];    char    _yevolume            ;    // [long  ,   12] ����ü�ᷮ                     StartPos 38, Length 12
    char    ymdvolume           [  12];    char    _ymdvolume           ;    // [long  ,   12] ����ŵ�ü�ᷮ                 StartPos 51, Length 12
    char    ymsvolume           [  12];    char    _ymsvolume           ;    // [long  ,   12] ����ż�ü�ᷮ                 StartPos 64, Length 12
} t1973OutBlock1, *LPt1973OutBlock1;
#define NAME_t1973OutBlock1     "t1973OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1973_H_
