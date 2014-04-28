#ifndef _t3521_H_
#define _t3521_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ؿ�������ȸ(API��)(t3521) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t3521     "t3521"

// �⺻�Է�
typedef struct _t3521InBlock
{
    char    kind                [   1];    char    _kind                ;    // [string,    1] ��������                       StartPos 0, Length 1
    char    symbol              [  16];    char    _symbol              ;    // [string,   16] SYMBOL                         StartPos 2, Length 16
} t3521InBlock, *LPt3521InBlock;
#define NAME_t3521InBlock     "t3521InBlock"

// ���
typedef struct _t3521OutBlock
{
    char    symbol              [  16];    char    _symbol              ;    // [string,   16] �ɹ�                           StartPos 0, Length 16
    char    hname               [  20];    char    _hname               ;    // [string,   20] ������                         StartPos 17, Length 20
    char    close               [  12];    char    _close               ;    // [float , 12.2] ����                           StartPos 38, Length 12
    char    sign                [   1];    char    _sign                ;    // [string,    1] ��񱸺�                       StartPos 51, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���                           StartPos 53, Length 6
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 60, Length 6
    char    date                [   8];    char    _date                ;    // [string,    8] ����                           StartPos 67, Length 8
} t3521OutBlock, *LPt3521OutBlock;
#define NAME_t3521OutBlock     "t3521OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t3521_H_
