#ifndef _t8404_H_
#define _t8404_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽļ����ð��뺰ü����ȸ(API��)(t8404) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8404     "t8404"

// �⺻�Է�
typedef struct _t8404InBlock
{
    char    focode              [   8];    char    _focode              ;    // [string,    8] �����ڵ�                       StartPos 0, Length 8
    char    cvolume             [  12];    char    _cvolume             ;    // [long  ,   12] Ư�̰ŷ���                     StartPos 9, Length 12
    char    stime               [   4];    char    _stime               ;    // [string,    4] ���۽ð�                       StartPos 22, Length 4
    char    etime               [   4];    char    _etime               ;    // [string,    4] ����ð�                       StartPos 27, Length 4
    char    cts_time            [  10];    char    _cts_time            ;    // [string,   10] �ð�CTS                        StartPos 32, Length 10
} t8404InBlock, *LPt8404InBlock;
#define NAME_t8404InBlock     "t8404InBlock"

// ���
typedef struct _t8404OutBlock
{
    char    cts_time            [  10];    char    _cts_time            ;    // [string,   10] �ð�CTS                        StartPos 0, Length 10
} t8404OutBlock, *LPt8404OutBlock;
#define NAME_t8404OutBlock     "t8404OutBlock"

// ���1, occurs
typedef struct _t8404OutBlock1
{
    char    chetime             [  10];    char    _chetime             ;    // [string,   10] �ð�                           StartPos 0, Length 10
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 11, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 20, Length 1
    char    change              [   8];    char    _change              ;    // [float ,    8] ���ϴ��                       StartPos 22, Length 8
    char    cvolume             [   8];    char    _cvolume             ;    // [long  ,    8] ü�����                       StartPos 31, Length 8
    char    chdegree            [   8];    char    _chdegree            ;    // [float ,  8.2] ü�ᰭ��                       StartPos 40, Length 8
    char    offerho             [   8];    char    _offerho             ;    // [long  ,    8] �ŵ�ȣ��                       StartPos 49, Length 8
    char    bidho               [   8];    char    _bidho               ;    // [long  ,    8] �ż�ȣ��                       StartPos 58, Length 8
    char    volume              [  12];    char    _volume              ;    // [double,   12] �ŷ���                         StartPos 67, Length 12
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰����                       StartPos 80, Length 8
    char    jnilopenupdn        [   8];    char    _jnilopenupdn        ;    // [long  ,    8] �̰���������                   StartPos 89, Length 8
    char    ibasis              [   8];    char    _ibasis              ;    // [long  ,    8] �̷�BASIS                      StartPos 98, Length 8
    char    sbasis              [   8];    char    _sbasis              ;    // [long  ,    8] ����BASIS                      StartPos 107, Length 8
    char    kasis               [   6];    char    _kasis               ;    // [float ,  6.2] ������                         StartPos 116, Length 6
    char    value               [  12];    char    _value               ;    // [double,   12] �ŷ����                       StartPos 123, Length 12
    char    j_openupdn          [   8];    char    _j_openupdn          ;    // [long  ,    8] �̰���������                   StartPos 136, Length 8
    char    n_msvolume          [  12];    char    _n_msvolume          ;    // [double,   12] �����ż�ü�ᷮ                 StartPos 145, Length 12
    char    n_mdvolume          [  12];    char    _n_mdvolume          ;    // [double,   12] �����ŵ�ü�ᷮ                 StartPos 158, Length 12
    char    s_msvolume          [  12];    char    _s_msvolume          ;    // [double,   12] �������ż�ü�ᷮ               StartPos 171, Length 12
    char    n_mschecnt          [   8];    char    _n_mschecnt          ;    // [long  ,    8] �����ż�ü��Ǽ�               StartPos 184, Length 8
    char    n_mdchecnt          [   8];    char    _n_mdchecnt          ;    // [long  ,    8] �����ŵ�ü��Ǽ�               StartPos 193, Length 8
    char    s_mschecnt          [   8];    char    _s_mschecnt          ;    // [long  ,    8] �������ż�ü��Ǽ�             StartPos 202, Length 8
} t8404OutBlock1, *LPt8404OutBlock1;
#define NAME_t8404OutBlock1     "t8404OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8404_H_
