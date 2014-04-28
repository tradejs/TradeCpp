#ifndef _t1921_H_
#define _t1921_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ſ�ŷ�����(t1921) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1921     "t1921"

// �⺻�Է�                       
typedef struct _t1921InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ���ڴ��ֱ���                    StartPos 7, Length 1
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 9, Length 8
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 18, Length 4
} t1921InBlock, *LPt1921InBlock;
#define NAME_t1921InBlock     "t1921InBlock"

// ���                           
typedef struct _t1921OutBlock
{
    char    cnt                 [   4];    char    _cnt                 ;    // [long  ,    4] CNT                             StartPos 0, Length 4
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 5, Length 8
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 14, Length 4
} t1921OutBlock, *LPt1921OutBlock;
#define NAME_t1921OutBlock     "t1921OutBlock"

// ���1                          , occurs
typedef struct _t1921OutBlock1
{
    char    mmdate              [   8];    char    _mmdate              ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    close               [   8];    char    _close               ;    // [long  ,    8] ����                            StartPos 9, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 18, Length 1
    char    jchange             [   8];    char    _jchange             ;    // [long  ,    8] ���ϴ��                        StartPos 20, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 29, Length 6
    char    nvolume             [   8];    char    _nvolume             ;    // [long  ,    8] �ű�                            StartPos 36, Length 8
    char    svolume             [   8];    char    _svolume             ;    // [long  ,    8] ��ȯ                            StartPos 45, Length 8
    char    jvolume             [   8];    char    _jvolume             ;    // [long  ,    8] �ܰ�                            StartPos 54, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] �ݾ�                            StartPos 63, Length 8
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���                            StartPos 72, Length 8
    char    gyrate              [   6];    char    _gyrate              ;    // [float ,  6.2] ������                          StartPos 81, Length 6
    char    jkrate              [   6];    char    _jkrate              ;    // [float ,  6.2] �ܰ���                          StartPos 88, Length 6
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 95, Length 6
} t1921OutBlock1, *LPt1921OutBlock1;
#define NAME_t1921OutBlock1     "t1921OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1921_H_
