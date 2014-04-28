#ifndef _t8428_H_
#define _t8428_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ֺ��ڱ�����(t8428) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8428     "t8428"

// �⺻�Է�                       
typedef struct _t8428InBlock
{
    char    fdate               [   8];    char    _fdate               ;    // [string,    8] from����                        StartPos 0, Length 8
    char    tdate               [   8];    char    _tdate               ;    // [string,    8] to����                          StartPos 9, Length 8
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����                            StartPos 18, Length 1
    char    key_date            [   8];    char    _key_date            ;    // [string,    8] ��¥                            StartPos 20, Length 8
    char    upcode              [   3];    char    _upcode              ;    // [string,    3] �����ڵ�                        StartPos 29, Length 3
    char    cnt                 [   3];    char    _cnt                 ;    // [string,    3] ��ȸ�Ǽ�                        StartPos 33, Length 3
} t8428InBlock, *LPt8428InBlock;
#define NAME_t8428InBlock     "t8428InBlock"

// ���                           
typedef struct _t8428OutBlock
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥CTS                         StartPos 0, Length 8
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 9, Length 4
} t8428OutBlock, *LPt8428OutBlock;
#define NAME_t8428OutBlock     "t8428OutBlock"

// ���1                          , occurs
typedef struct _t8428OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ����                            StartPos 0, Length 8
    char    jisu                [   7];    char    _jisu                ;    // [float ,  7.2] ����                            StartPos 9, Length 7
    char    sign                [   1];    char    _sign                ;    // [string,    1] ��񱸺�                        StartPos 17, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���                            StartPos 19, Length 6
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 26, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 33, Length 12
    char    custmoney           [  12];    char    _custmoney           ;    // [long  ,   12] ����Ź��_���                 StartPos 46, Length 12
    char    yecha               [  12];    char    _yecha               ;    // [long  ,   12] ��Ź����_���                   StartPos 59, Length 12
    char    vol                 [   6];    char    _vol                 ;    // [float ,  6.2] ȸ����                          StartPos 72, Length 6
    char    outmoney            [  12];    char    _outmoney            ;    // [long  ,   12] �̼���_���                     StartPos 79, Length 12
    char    trjango             [  12];    char    _trjango             ;    // [long  ,   12] �ſ��ܰ�_���                   StartPos 92, Length 12
    char    futymoney           [  12];    char    _futymoney           ;    // [long  ,   12] ����������_���                 StartPos 105, Length 12
    char    stkmoney            [   8];    char    _stkmoney            ;    // [long  ,    8] �ֽ���_���                     StartPos 118, Length 8
    char    mstkmoney           [   8];    char    _mstkmoney           ;    // [long  ,    8] ȥ����_���(�ֽ�)               StartPos 127, Length 8
    char    mbndmoney           [   8];    char    _mbndmoney           ;    // [long  ,    8] ȥ����_���(ä��)               StartPos 136, Length 8
    char    bndmoney            [   8];    char    _bndmoney            ;    // [long  ,    8] ä����_���                     StartPos 145, Length 8
    char    bndsmoney           [   8];    char    _bndsmoney           ;    // [long  ,    8] �ʷ�(��.�ܱ�ä��)               StartPos 154, Length 8
    char    mmfmoney            [   8];    char    _mmfmoney            ;    // [long  ,    8] MMF_���(�ֽ�)                  StartPos 163, Length 8
} t8428OutBlock1, *LPt8428OutBlock1;
#define NAME_t8428OutBlock1     "t8428OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8428_H_
