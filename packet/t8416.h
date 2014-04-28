#ifndef _t8416_H_
#define _t8416_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����/�ɼ�íƮ(���ֿ�)(t8416) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8416     "t8416"

// �⺻�Է�                       
typedef struct _t8416InBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] �ֱⱸ��(2:��3:��4:��)          StartPos 9, Length 1
    char    qrycnt              [   4];    char    _qrycnt              ;    // [long  ,    4] ��û�Ǽ�(�ִ�-����:2000�����:5 StartPos 11, Length 4
    char    sdate               [   8];    char    _sdate               ;    // [string,    8] ��������                        StartPos 16, Length 8
    char    edate               [   8];    char    _edate               ;    // [string,    8] ��������                        StartPos 25, Length 8
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 34, Length 8
    char    comp_yn             [   1];    char    _comp_yn             ;    // [string,    1] ���࿩��(Y:����N:�����)        StartPos 43, Length 1
} t8416InBlock, *LPt8416InBlock;
#define NAME_t8416InBlock     "t8416InBlock"

// ���                           
typedef struct _t8416OutBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
    char    jisiga              [   6];    char    _jisiga              ;    // [float ,  6.2] ���Ͻð�                        StartPos 9, Length 6
    char    jihigh              [   6];    char    _jihigh              ;    // [float ,  6.2] ���ϰ�                        StartPos 16, Length 6
    char    jilow               [   6];    char    _jilow               ;    // [float ,  6.2] ��������                        StartPos 23, Length 6
    char    jiclose             [   6];    char    _jiclose             ;    // [float ,  6.2] ��������                        StartPos 30, Length 6
    char    jivolume            [  12];    char    _jivolume            ;    // [long  ,   12] ���ϰŷ���                      StartPos 37, Length 12
    char    disiga              [   6];    char    _disiga              ;    // [float ,  6.2] ���Ͻð�                        StartPos 50, Length 6
    char    dihigh              [   6];    char    _dihigh              ;    // [float ,  6.2] ���ϰ�                        StartPos 57, Length 6
    char    dilow               [   6];    char    _dilow               ;    // [float ,  6.2] ��������                        StartPos 64, Length 6
    char    diclose             [   6];    char    _diclose             ;    // [float ,  6.2] ��������                        StartPos 71, Length 6
    char    highend             [   6];    char    _highend             ;    // [float ,  6.2] ���Ѱ�                          StartPos 78, Length 6
    char    lowend              [   6];    char    _lowend              ;    // [float ,  6.2] ���Ѱ�                          StartPos 85, Length 6
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 92, Length 8
    char    s_time              [   6];    char    _s_time              ;    // [string,    6] ����۽ð�(HHMMSS)              StartPos 101, Length 6
    char    e_time              [   6];    char    _e_time              ;    // [string,    6] ������ð�(HHMMSS)              StartPos 108, Length 6
    char    dshmin              [   2];    char    _dshmin              ;    // [string,    2] ����ȣ��ó���ð�(MM:��)         StartPos 115, Length 2
    char    rec_count           [   7];    char    _rec_count           ;    // [long  ,    7] ���ڵ�ī��Ʈ                    StartPos 118, Length 7
} t8416OutBlock, *LPt8416OutBlock;
#define NAME_t8416OutBlock     "t8416OutBlock"

// ���1                          , occurs
typedef struct _t8416OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    open                [   6];    char    _open                ;    // [float ,  6.2] �ð�                            StartPos 9, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] ��                            StartPos 16, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] ����                            StartPos 23, Length 6
    char    close               [   6];    char    _close               ;    // [float ,  6.2] ����                            StartPos 30, Length 6
    char    jdiff_vol           [  12];    char    _jdiff_vol           ;    // [long  ,   12] �����ŷ���                      StartPos 37, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �ŷ����                        StartPos 50, Length 12
    char    openyak             [  12];    char    _openyak             ;    // [long  ,   12] �̰�������                      StartPos 63, Length 12
} t8416OutBlock1, *LPt8416OutBlock1;
#define NAME_t8416OutBlock1     "t8416OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8416_H_
