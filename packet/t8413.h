#ifndef _t8413_H_
#define _t8413_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽ�íƮ(���ֿ�)(t8413) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8413     "t8413"

// �⺻�Է�                       
typedef struct _t8413InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] �ֱⱸ��(2:��3:��4:��)          StartPos 7, Length 1
    char    qrycnt              [   4];    char    _qrycnt              ;    // [long  ,    4] ��û�Ǽ�(�ִ�-����:2000�����:5 StartPos 9, Length 4
    char    sdate               [   8];    char    _sdate               ;    // [string,    8] ��������                        StartPos 14, Length 8
    char    edate               [   8];    char    _edate               ;    // [string,    8] ��������                        StartPos 23, Length 8
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 32, Length 8
    char    comp_yn             [   1];    char    _comp_yn             ;    // [string,    1] ���࿩��(Y:����N:�����)        StartPos 41, Length 1
} t8413InBlock, *LPt8413InBlock;
#define NAME_t8413InBlock     "t8413InBlock"

// ���                           
typedef struct _t8413OutBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    jisiga              [   8];    char    _jisiga              ;    // [long  ,    8] ���Ͻð�                        StartPos 7, Length 8
    char    jihigh              [   8];    char    _jihigh              ;    // [long  ,    8] ���ϰ�                        StartPos 16, Length 8
    char    jilow               [   8];    char    _jilow               ;    // [long  ,    8] ��������                        StartPos 25, Length 8
    char    jiclose             [   8];    char    _jiclose             ;    // [long  ,    8] ��������                        StartPos 34, Length 8
    char    jivolume            [  12];    char    _jivolume            ;    // [long  ,   12] ���ϰŷ���                      StartPos 43, Length 12
    char    disiga              [   8];    char    _disiga              ;    // [long  ,    8] ���Ͻð�                        StartPos 56, Length 8
    char    dihigh              [   8];    char    _dihigh              ;    // [long  ,    8] ���ϰ�                        StartPos 65, Length 8
    char    dilow               [   8];    char    _dilow               ;    // [long  ,    8] ��������                        StartPos 74, Length 8
    char    diclose             [   8];    char    _diclose             ;    // [long  ,    8] ��������                        StartPos 83, Length 8
    char    highend             [   8];    char    _highend             ;    // [long  ,    8] ���Ѱ�                          StartPos 92, Length 8
    char    lowend              [   8];    char    _lowend              ;    // [long  ,    8] ���Ѱ�                          StartPos 101, Length 8
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 110, Length 8
    char    s_time              [   6];    char    _s_time              ;    // [string,    6] ����۽ð�(HHMMSS)              StartPos 119, Length 6
    char    e_time              [   6];    char    _e_time              ;    // [string,    6] ������ð�(HHMMSS)              StartPos 126, Length 6
    char    dshmin              [   2];    char    _dshmin              ;    // [string,    2] ����ȣ��ó���ð�(MM:��)         StartPos 133, Length 2
    char    rec_count           [   7];    char    _rec_count           ;    // [long  ,    7] ���ڵ�ī��Ʈ                    StartPos 136, Length 7
} t8413OutBlock, *LPt8413OutBlock;
#define NAME_t8413OutBlock     "t8413OutBlock"

// ���1                          , occurs
typedef struct _t8413OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                            StartPos 9, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                            StartPos 18, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                            StartPos 27, Length 8
    char    close               [   8];    char    _close               ;    // [long  ,    8] ����                            StartPos 36, Length 8
    char    jdiff_vol           [  12];    char    _jdiff_vol           ;    // [long  ,   12] �ŷ���                          StartPos 45, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �ŷ����                        StartPos 58, Length 12
    char    jongchk             [  13];    char    _jongchk             ;    // [long  ,   13] ��������                        StartPos 71, Length 13
    char    rate                [   6];    char    _rate                ;    // [double,  6.2] ��������                        StartPos 85, Length 6
    char    pricechk            [  13];    char    _pricechk            ;    // [long  ,   13] �����ְ��ݿ��׸�                StartPos 92, Length 13
    char    ratevalue           [  12];    char    _ratevalue           ;    // [long  ,   12] ���������ݿ��ŷ����            StartPos 106, Length 12
    char    sign                [   1];    char    _sign                ;    // [string,    1] �����������(1:����2:���3:���� StartPos 119, Length 1
} t8413OutBlock1, *LPt8413OutBlock1;
#define NAME_t8413OutBlock1     "t8413OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8413_H_
