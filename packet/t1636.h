#ifndef _t1636_H_
#define _t1636_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �������α׷��Ÿŵ���(t1636) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1636     "t1636"

// �⺻�Է�                       
typedef struct _t1636InBlock
{
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����                            StartPos 0, Length 1
    char    gubun1              [   1];    char    _gubun1              ;    // [string,    1] �ݾ׼�������                    StartPos 2, Length 1
    char    gubun2              [   1];    char    _gubun2              ;    // [string,    1] ���ı���                        StartPos 4, Length 1
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 6, Length 6
    char    cts_idx             [   4];    char    _cts_idx             ;    // [long  ,    4] IDXCTS                          StartPos 13, Length 4
} t1636InBlock, *LPt1636InBlock;
#define NAME_t1636InBlock     "t1636InBlock"

// ���                           
typedef struct _t1636OutBlock
{
    char    cts_idx             [   4];    char    _cts_idx             ;    // [long  ,    4] IDXCTS                          StartPos 0, Length 4
} t1636OutBlock, *LPt1636OutBlock;
#define NAME_t1636OutBlock     "t1636OutBlock"

// ���1                          , occurs
typedef struct _t1636OutBlock1
{
    char    rank                [   8];    char    _rank                ;    // [long  ,    8] ����                            StartPos 0, Length 8
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                          StartPos 9, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 30, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ��񱸺�                        StartPos 39, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���                            StartPos 41, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 50, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 57, Length 12
    char    svalue              [  12];    char    _svalue              ;    // [long  ,   12] ���ż��ݾ�                      StartPos 70, Length 12
    char    offervalue          [  12];    char    _offervalue          ;    // [long  ,   12] �ŵ��ݾ�                        StartPos 83, Length 12
    char    stksvalue           [  12];    char    _stksvalue           ;    // [long  ,   12] �ż��ݾ�                        StartPos 96, Length 12
    char    svolume             [  12];    char    _svolume             ;    // [long  ,   12] ���ż�����                      StartPos 109, Length 12
    char    offervolume         [  12];    char    _offervolume         ;    // [long  ,   12] �ŵ�����                        StartPos 122, Length 12
    char    stksvolume          [  12];    char    _stksvolume          ;    // [long  ,   12] �ż�����                        StartPos 135, Length 12
    char    sgta                [  15];    char    _sgta                ;    // [long  ,   15] �ð��Ѿ�                        StartPos 148, Length 15
    char    rate                [   6];    char    _rate                ;    // [float ,  6.2] ����                            StartPos 164, Length 6
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 171, Length 6
} t1636OutBlock1, *LPt1636OutBlock1;
#define NAME_t1636OutBlock1     "t1636OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1636_H_
