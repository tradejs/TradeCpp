#ifndef _o3117_H_
#define _o3117_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ؿܼ����ð��뺰(NTick)ü��(o3117)-API�� ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_o3117     "o3117"

// �⺻�Է�                       
typedef struct _o3117InBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
    char    ncnt                [   4];    char    _ncnt                ;    // [long  ,    4] ����                            StartPos 9, Length 4
    char    qrycnt              [   4];    char    _qrycnt              ;    // [long  ,    4] �Ǽ�                            StartPos 14, Length 4
    char    cts_seq             [  10];    char    _cts_seq             ;    // [string,   10] ���ӽð�                        StartPos 19, Length 10
    char    cts_daygb           [   2];    char    _cts_daygb           ;    // [string,    2] ���Ӵ��ϱ���                    StartPos 30, Length 2
} o3117InBlock, *LPo3117InBlock;
#define NAME_o3117InBlock     "o3117InBlock"

// ���                           
typedef struct _o3117OutBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
    char    rec_count           [   7];    char    _rec_count           ;    // [long  ,    7] ���ڵ�ī��Ʈ                    StartPos 9, Length 7
    char    cts_seq             [  10];    char    _cts_seq             ;    // [string,   10] ���ӽð�                        StartPos 17, Length 10
    char    cts_daygb           [   2];    char    _cts_daygb           ;    // [string,    2] ���Ӵ��ϱ���                    StartPos 28, Length 2
} o3117OutBlock, *LPo3117OutBlock;
#define NAME_o3117OutBlock     "o3117OutBlock"

// ���1                          , occurs
typedef struct _o3117OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    time                [   6];    char    _time                ;    // [string,    6] �ð�                            StartPos 9, Length 6
    char    open                [  15];    char    _open                ;    // [double, 15.8] �ð�                            StartPos 16, Length 15
    char    high                [  15];    char    _high                ;    // [double, 15.8] ��                            StartPos 32, Length 15
    char    low                 [  15];    char    _low                 ;    // [double, 15.8] ����                            StartPos 48, Length 15
    char    close               [  15];    char    _close               ;    // [double, 15.8] ����                            StartPos 64, Length 15
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 80, Length 12
} o3117OutBlock1, *LPo3117OutBlock1;
#define NAME_o3117OutBlock1     "o3117OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _o3117_H_
