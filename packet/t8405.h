#ifndef _t8405_H_
#define _t8405_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽļ����Ⱓ���ְ�(API��)(t8405) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8405     "t8405"

// �⺻�Է�
typedef struct _t8405InBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                       StartPos 0, Length 8
    char    futcheck            [   1];    char    _futcheck            ;    // [string,    1] �����ֱٿ���                   StartPos 9, Length 1
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                           StartPos 11, Length 8
    char    cts_code            [   8];    char    _cts_code            ;    // [string,    8] CTS�����ڵ�                    StartPos 20, Length 8
    char    lastdate            [   8];    char    _lastdate            ;    // [string,    8] �����񸸱���                   StartPos 29, Length 8
    char    cnt                 [   3];    char    _cnt                 ;    // [string,    3] ��ȸ��û�Ǽ�                   StartPos 38, Length 3
} t8405InBlock, *LPt8405InBlock;
#define NAME_t8405InBlock     "t8405InBlock"

// ���
typedef struct _t8405OutBlock
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                           StartPos 0, Length 8
    char    cts_code            [   8];    char    _cts_code            ;    // [string,    8] CTS�����ڵ�                    StartPos 9, Length 8
    char    lastdate            [   8];    char    _lastdate            ;    // [string,    8] �����񸸱���                   StartPos 18, Length 8
    char    nowfutyn            [   1];    char    _nowfutyn            ;    // [string,    1] �ֱٿ���������                 StartPos 27, Length 1
} t8405OutBlock, *LPt8405OutBlock;
#define NAME_t8405OutBlock     "t8405OutBlock"

// ���1, occurs
typedef struct _t8405OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                           StartPos 0, Length 8
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                           StartPos 9, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                           StartPos 18, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                           StartPos 27, Length 8
    char    close               [   8];    char    _close               ;    // [long  ,    8] ����                           StartPos 36, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 45, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 47, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 56, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                         StartPos 63, Length 12
    char    diff_vol            [  10];    char    _diff_vol            ;    // [float , 10.2] �ŷ�������                     StartPos 76, Length 10
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰����                       StartPos 87, Length 8
    char    openyakupdn         [   8];    char    _openyakupdn         ;    // [long  ,    8] �̰�����                       StartPos 96, Length 8
    char    value               [  12];    char    _value               ;    // [float ,   12] �ŷ����                       StartPos 105, Length 12
} t8405OutBlock1, *LPt8405OutBlock1;
#define NAME_t8405OutBlock1     "t8405OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8405_H_
