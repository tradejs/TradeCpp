#ifndef _t8414_H_
#define _t8414_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼ���Ʈ(ƽ/nƽ)(t8414) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8414     "t8414"

// �⺻�Է�                       
typedef struct _t8414InBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
    char    ncnt                [   4];    char    _ncnt                ;    // [long  ,    4] ����(nƽ)                       StartPos 9, Length 4
    char    qrycnt              [   4];    char    _qrycnt              ;    // [long  ,    4] ��û�Ǽ�(�ִ�-����:2000�����:5 StartPos 14, Length 4
    char    nday                [   1];    char    _nday                ;    // [string,    1] ��ȸ�����ϼ�(0:�̻��1>=���)   StartPos 19, Length 1
    char    sdate               [   8];    char    _sdate               ;    // [string,    8] ��������                        StartPos 21, Length 8
    char    stime               [   6];    char    _stime               ;    // [string,    6] ���۽ð�(����̻��)            StartPos 30, Length 6
    char    edate               [   8];    char    _edate               ;    // [string,    8] ��������                        StartPos 37, Length 8
    char    etime               [   6];    char    _etime               ;    // [string,    6] ����ð�(����̻��)            StartPos 46, Length 6
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 53, Length 8
    char    cts_time            [  10];    char    _cts_time            ;    // [string,   10] ���ӽð�                        StartPos 62, Length 10
    char    comp_yn             [   1];    char    _comp_yn             ;    // [string,    1] ���࿩��(Y:����N:�����)        StartPos 73, Length 1
} t8414InBlock, *LPt8414InBlock;
#define NAME_t8414InBlock     "t8414InBlock"

// ���                           
typedef struct _t8414OutBlock
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
    char    cts_time            [  10];    char    _cts_time            ;    // [string,   10] ���ӽð�                        StartPos 101, Length 10
    char    s_time              [   6];    char    _s_time              ;    // [string,    6] ����۽ð�(HHMMSS)              StartPos 112, Length 6
    char    e_time              [   6];    char    _e_time              ;    // [string,    6] ������ð�(HHMMSS)              StartPos 119, Length 6
    char    dshmin              [   2];    char    _dshmin              ;    // [string,    2] ����ȣ��ó���ð�(MM:��)         StartPos 126, Length 2
    char    rec_count           [   7];    char    _rec_count           ;    // [long  ,    7] ���ڵ�ī��Ʈ                    StartPos 129, Length 7
} t8414OutBlock, *LPt8414OutBlock;
#define NAME_t8414OutBlock     "t8414OutBlock"

// ���1                          , occurs
typedef struct _t8414OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    time                [  10];    char    _time                ;    // [string,   10] �ð�                            StartPos 9, Length 10
    char    open                [   6];    char    _open                ;    // [float ,  6.2] �ð�                            StartPos 20, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] ��                            StartPos 27, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] ����                            StartPos 34, Length 6
    char    close               [   6];    char    _close               ;    // [float ,  6.2] ����                            StartPos 41, Length 6
    char    jdiff_vol           [  12];    char    _jdiff_vol           ;    // [long  ,   12] �ŷ���                          StartPos 48, Length 12
    char    openyak             [  12];    char    _openyak             ;    // [long  ,   12] �̰�������                      StartPos 61, Length 12
} t8414OutBlock1, *LPt8414OutBlock1;
#define NAME_t8414OutBlock1     "t8414OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8414_H_
