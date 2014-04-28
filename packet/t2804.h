#ifndef _t2804_H_
#define _t2804_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// CME�߰������ð��뺰ü����ȸ(t2804) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t2804     "t2804"

// �⺻�Է�
typedef struct _t2804InBlock
{
    char    focode              [   8];    char    _focode              ;    // [string,    8] �����ڵ�                       StartPos 0, Length 8
    char    cvolume             [  12];    char    _cvolume             ;    // [long  ,   12] Ư�̰ŷ���                     StartPos 9, Length 12
    char    stime               [   4];    char    _stime               ;    // [string,    4] ���۽ð�                       StartPos 22, Length 4
    char    etime               [   4];    char    _etime               ;    // [string,    4] ����ð�                       StartPos 27, Length 4
    char    cts_time            [  10];    char    _cts_time            ;    // [string,   10] �ð�CTS                        StartPos 32, Length 10
} t2804InBlock, *LPt2804InBlock;
#define NAME_t2804InBlock     "t2804InBlock"

// ���
typedef struct _t2804OutBlock
{
    char    cts_time            [  10];    char    _cts_time            ;    // [string,   10] �ð�CTS                        StartPos 0, Length 10
} t2804OutBlock, *LPt2804OutBlock;
#define NAME_t2804OutBlock     "t2804OutBlock"

// ���1, occurs
typedef struct _t2804OutBlock1
{
    char    chetime             [  10];    char    _chetime             ;    // [string,   10] �ð�                           StartPos 0, Length 10
    char    chetime24           [  10];    char    _chetime24           ;    // [string,   10] �ð�24                         StartPos 11, Length 10
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                         StartPos 22, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 29, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���ϴ��                       StartPos 31, Length 6
    char    cvolume             [   8];    char    _cvolume             ;    // [long  ,    8] ü�����                       StartPos 38, Length 8
    char    chdegree            [   8];    char    _chdegree            ;    // [float ,  8.2] ü�ᰭ��                       StartPos 47, Length 8
    char    offerho             [   6];    char    _offerho             ;    // [float ,  6.2] �ŵ�ȣ��                       StartPos 56, Length 6
    char    bidho               [   6];    char    _bidho               ;    // [float ,  6.2] �ż�ȣ��                       StartPos 63, Length 6
    char    volume              [  12];    char    _volume              ;    // [double,   12] �ŷ���                         StartPos 70, Length 12
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰����                       StartPos 83, Length 8
    char    jnilopenupdn        [   8];    char    _jnilopenupdn        ;    // [long  ,    8] �̰���������                   StartPos 92, Length 8
    char    ibasis              [   6];    char    _ibasis              ;    // [float ,  6.2] �̷�BASIS                      StartPos 101, Length 6
    char    sbasis              [   6];    char    _sbasis              ;    // [float ,  6.2] ����BASIS                      StartPos 108, Length 6
    char    kasis               [   6];    char    _kasis               ;    // [float ,  6.2] ������                         StartPos 115, Length 6
    char    value               [  12];    char    _value               ;    // [double,   12] �ŷ����                       StartPos 122, Length 12
    char    j_openupdn          [   8];    char    _j_openupdn          ;    // [long  ,    8] �̰���������                   StartPos 135, Length 8
    char    n_msvolume          [  12];    char    _n_msvolume          ;    // [double,   12] �����ż�ü�ᷮ                 StartPos 144, Length 12
    char    n_mdvolume          [  12];    char    _n_mdvolume          ;    // [double,   12] �����ŵ�ü�ᷮ                 StartPos 157, Length 12
    char    s_msvolume          [  12];    char    _s_msvolume          ;    // [double,   12] �������ż�ü�ᷮ               StartPos 170, Length 12
    char    n_mschecnt          [   8];    char    _n_mschecnt          ;    // [long  ,    8] �����ż�ü��Ǽ�               StartPos 183, Length 8
    char    n_mdchecnt          [   8];    char    _n_mdchecnt          ;    // [long  ,    8] �����ŵ�ü��Ǽ�               StartPos 192, Length 8
    char    s_mschecnt          [   8];    char    _s_mschecnt          ;    // [long  ,    8] �������ż�ü��Ǽ�             StartPos 201, Length 8
} t2804OutBlock1, *LPt2804OutBlock1;
#define NAME_t2804OutBlock1     "t2804OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t2804_H_
