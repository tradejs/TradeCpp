#ifndef _t8419_H_
#define _t8419_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����íƮ(���ֿ�)(t8419) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8419     "t8419"

// �⺻�Է�                       
typedef struct _t8419InBlock
{
    char    shcode              [   3];    char    _shcode              ;    // [string,    3] �����ڵ�                        StartPos 0, Length 3
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] �ֱⱸ��(2:��3:��4:��)          StartPos 4, Length 1
    char    qrycnt              [   4];    char    _qrycnt              ;    // [long  ,    4] ��û�Ǽ�(�ִ�-����:2000�����:5 StartPos 6, Length 4
    char    sdate               [   8];    char    _sdate               ;    // [string,    8] ��������                        StartPos 11, Length 8
    char    edate               [   8];    char    _edate               ;    // [string,    8] ��������                        StartPos 20, Length 8
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 29, Length 8
    char    comp_yn             [   1];    char    _comp_yn             ;    // [string,    1] ���࿩��(Y:����N:�����)        StartPos 38, Length 1
} t8419InBlock, *LPt8419InBlock;
#define NAME_t8419InBlock     "t8419InBlock"

// ���                           
typedef struct _t8419OutBlock
{
    char    shcode              [   3];    char    _shcode              ;    // [string,    3] �����ڵ�                        StartPos 0, Length 3
    char    jisiga              [   7];    char    _jisiga              ;    // [float ,  7.2] ���Ͻð�                        StartPos 4, Length 7
    char    jihigh              [   7];    char    _jihigh              ;    // [float ,  7.2] ���ϰ�                        StartPos 12, Length 7
    char    jilow               [   7];    char    _jilow               ;    // [float ,  7.2] ��������                        StartPos 20, Length 7
    char    jiclose             [   7];    char    _jiclose             ;    // [float ,  7.2] ��������                        StartPos 28, Length 7
    char    jivolume            [  12];    char    _jivolume            ;    // [long  ,   12] ���ϰŷ���                      StartPos 36, Length 12
    char    disiga              [   7];    char    _disiga              ;    // [float ,  7.2] ���Ͻð�                        StartPos 49, Length 7
    char    dihigh              [   7];    char    _dihigh              ;    // [float ,  7.2] ���ϰ�                        StartPos 57, Length 7
    char    dilow               [   7];    char    _dilow               ;    // [float ,  7.2] ��������                        StartPos 65, Length 7
    char    diclose             [   7];    char    _diclose             ;    // [float ,  7.2] ��������                        StartPos 73, Length 7
    char    disvalue            [  12];    char    _disvalue            ;    // [long  ,   12] ���ϰŷ����                    StartPos 81, Length 12
    char    cts_date            [   8];    char    _cts_date            ;    // [string,    8] ��������                        StartPos 94, Length 8
    char    s_time              [   6];    char    _s_time              ;    // [string,    6] �������۽ð�                    StartPos 103, Length 6
    char    e_time              [   6];    char    _e_time              ;    // [string,    6] ��������ð�                    StartPos 110, Length 6
    char    dshmin              [   2];    char    _dshmin              ;    // [string,    2] ����ȣ��ó���ð�(MM:��)         StartPos 117, Length 2
    char    rec_count           [   7];    char    _rec_count           ;    // [long  ,    7] ���ڵ�ī��Ʈ                    StartPos 120, Length 7
} t8419OutBlock, *LPt8419OutBlock;
#define NAME_t8419OutBlock     "t8419OutBlock"

// ���1                          , occurs
typedef struct _t8419OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ��¥                            StartPos 0, Length 8
    char    open                [   7];    char    _open                ;    // [float ,  7.2] �ð�                            StartPos 9, Length 7
    char    high                [   7];    char    _high                ;    // [float ,  7.2] ��                            StartPos 17, Length 7
    char    low                 [   7];    char    _low                 ;    // [float ,  7.2] ����                            StartPos 25, Length 7
    char    close               [   7];    char    _close               ;    // [float ,  7.2] ����                            StartPos 33, Length 7
    char    jdiff_vol           [  12];    char    _jdiff_vol           ;    // [long  ,   12] �ŷ���                          StartPos 41, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �ŷ����                        StartPos 54, Length 12
} t8419OutBlock1, *LPt8419OutBlock1;
#define NAME_t8419OutBlock1     "t8419OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8419_H_
