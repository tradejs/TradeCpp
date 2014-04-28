#ifndef _t1927_H_
#define _t1927_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ���ŵ��Ϻ�����(t1927) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1927     "t1927"

// �⺻�Է�                       
typedef struct _t1927InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    date                [   8];    char    _date                ;    // [string,    8] ����                            StartPos 7, Length 8
    char    sdate               [   8];    char    _sdate               ;    // [string,    8] ��������                        StartPos 16, Length 8
    char    edate               [   8];    char    _edate               ;    // [string,    8] ��������                        StartPos 25, Length 8
} t1927InBlock, *LPt1927InBlock;
#define NAME_t1927InBlock     "t1927InBlock"

// ���                           
typedef struct _t1927OutBlock
{
    char    date                [   8];    char    _date                ;    // [string,    8] ����CTS                         StartPos 0, Length 8
} t1927OutBlock, *LPt1927OutBlock;
#define NAME_t1927OutBlock     "t1927OutBlock"

// ���1                          , occurs
typedef struct _t1927OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ����                            StartPos 0, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 9, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 18, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 20, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 29, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 36, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �ŷ����                        StartPos 49, Length 12
    char    gm_vo               [  12];    char    _gm_vo               ;    // [long  ,   12] ���ŵ�����                      StartPos 62, Length 12
    char    gm_va               [  12];    char    _gm_va               ;    // [long  ,   12] ���ŵ����                      StartPos 75, Length 12
    char    gm_per              [   6];    char    _gm_per              ;    // [float ,  6.2] ���ŵ��ŷ�����                  StartPos 88, Length 6
    char    gm_avg              [  12];    char    _gm_avg              ;    // [long  ,   12] ��հ��ŵ��ܰ�                  StartPos 95, Length 12
    char    gm_vo_sum           [  12];    char    _gm_vo_sum           ;    // [long  ,   12] �������ŵ�����                  StartPos 108, Length 12
} t1927OutBlock1, *LPt1927OutBlock1;
#define NAME_t1927OutBlock1     "t1927OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1927_H_
