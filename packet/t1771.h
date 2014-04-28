#ifndef _t1771_H_
#define _t1771_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����ȸ��������(t1771) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1771     "t1771"

// �⺻�Է�                       
typedef struct _t1771InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    tradno              [   3];    char    _tradno              ;    // [string,    3] �ŷ����ڵ�                      StartPos 7, Length 3
    char    gubun1              [   1];    char    _gubun1              ;    // [string,    1] ����1                           StartPos 11, Length 1
    char    traddate1           [   8];    char    _traddate1           ;    // [string,    8] �ŷ�����¥1                     StartPos 13, Length 8
    char    traddate2           [   8];    char    _traddate2           ;    // [string,    8] �ŷ�����¥2                     StartPos 22, Length 8
    char    cts_idx             [   4];    char    _cts_idx             ;    // [long  ,    4] CTSIDX                          StartPos 31, Length 4
    char    cnt                 [   3];    char    _cnt                 ;    // [string,    3] ��û�Ǽ�                        StartPos 36, Length 3
} t1771InBlock, *LPt1771InBlock;
#define NAME_t1771InBlock     "t1771InBlock"

// �⺻���                       
typedef struct _t1771OutBlock
{
    char    cts_idx             [   4];    char    _cts_idx             ;    // [long  ,    4] CTSIDX                          StartPos 0, Length 4
} t1771OutBlock, *LPt1771OutBlock;
#define NAME_t1771OutBlock     "t1771OutBlock"

// ���2                          , occurs
typedef struct _t1771OutBlock2
{
    char    traddate            [   8];    char    _traddate            ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    tradtime            [   8];    char    _tradtime            ;    // [string,    8] �ð�                            StartPos 9, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 18, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ��񱸺�                        StartPos 27, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���                            StartPos 29, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 38, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 45, Length 12
    char    tradmdcha           [  12];    char    _tradmdcha           ;    // [long  ,   12] �ŵ�                            StartPos 58, Length 12
    char    tradmscha           [  12];    char    _tradmscha           ;    // [long  ,   12] �ż�                            StartPos 71, Length 12
    char    tradmdval           [  18];    char    _tradmdval           ;    // [long  ,   18] �ŵ����                        StartPos 84, Length 18
    char    tradmsval           [  18];    char    _tradmsval           ;    // [long  ,   18] �ż����                        StartPos 103, Length 18
    char    tradmsscha          [  12];    char    _tradmsscha          ;    // [long  ,   12] ���ż�                          StartPos 122, Length 12
    char    tradmttvolume       [  12];    char    _tradmttvolume       ;    // [long  ,   12] �������ż�                      StartPos 135, Length 12
    char    tradavg             [   8];    char    _tradavg             ;    // [long  ,    8] ��մܰ�                        StartPos 148, Length 8
    char    tradmttavg          [   8];    char    _tradmttavg          ;    // [long  ,    8] ������մܰ�                    StartPos 157, Length 8
} t1771OutBlock2, *LPt1771OutBlock2;
#define NAME_t1771OutBlock2     "t1771OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1771_H_
