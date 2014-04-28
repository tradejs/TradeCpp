#ifndef _JC0_H_
#define _JC0_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽļ���ü��(JC0) ( attr,block )
#pragma pack( push, 1 )

#define NAME_JC0     "JC0"

// �Է�
typedef struct _JC0_InBlock
{
    char    futcode             [   8];                                      // [string,    8] �����ڵ�                       StartPos 0, Length 8
} JC0_InBlock, *LPJC0_InBlock;
#define NAME_JC0_InBlock     "InBlock"

// ���
typedef struct _JC0_OutBlock
{
    char    futcode             [   8];    char    _futcode             ;    // [string,    8] �����ڵ�                       StartPos 0, Length 8
    char    chetime             [   6];    char    _chetime             ;    // [string,    6] ü��ð�                       StartPos 9, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ����ȣ                       StartPos 16, Length 1
    char    change              [  10];    char    _change              ;    // [long  ,   10] ���ϴ��                       StartPos 18, Length 10
    char    drate               [   6];    char    _drate               ;    // [double,  6.2] �����                         StartPos 29, Length 6
    char    price               [  10];    char    _price               ;    // [long  ,   10] ���簡                         StartPos 36, Length 10
    char    open                [  10];    char    _open                ;    // [long  ,   10] �ð�                           StartPos 47, Length 10
    char    high                [  10];    char    _high                ;    // [long  ,   10] ��                           StartPos 58, Length 10
    char    low                 [  10];    char    _low                 ;    // [long  ,   10] ����                           StartPos 69, Length 10
    char    cgubun              [   1];    char    _cgubun              ;    // [string,    1] ü�ᱸ��                       StartPos 80, Length 1
    char    cvolume             [   6];    char    _cvolume             ;    // [long  ,    6] ü�ᷮ                         StartPos 82, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                     StartPos 89, Length 12
    char    value               [  15];    char    _value               ;    // [long  ,   15] �����ŷ����                   StartPos 102, Length 15
    char    mdvolume            [  12];    char    _mdvolume            ;    // [long  ,   12] �ŵ�����ü�ᷮ                 StartPos 118, Length 12
    char    mdchecnt            [   8];    char    _mdchecnt            ;    // [long  ,    8] �ŵ�����ü��Ǽ�               StartPos 131, Length 8
    char    msvolume            [  12];    char    _msvolume            ;    // [long  ,   12] �ż�����ü�ᷮ                 StartPos 140, Length 12
    char    mschecnt            [   8];    char    _mschecnt            ;    // [long  ,    8] �ż�����ü��Ǽ�               StartPos 153, Length 8
    char    cpower              [   9];    char    _cpower              ;    // [double,  9.2] ü�ᰭ��                       StartPos 162, Length 9
    char    offerho1            [  10];    char    _offerho1            ;    // [long  ,   10] �ŵ�ȣ��1                      StartPos 172, Length 10
    char    bidho1              [  10];    char    _bidho1              ;    // [long  ,   10] �ż�ȣ��1                      StartPos 183, Length 10
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰�����������                 StartPos 194, Length 8
    char    k200jisu            [   6];    char    _k200jisu            ;    // [double,  6.2] KOSPI200����                   StartPos 203, Length 6
    char    theoryprice         [   8];    char    _theoryprice         ;    // [long  ,    8] �̷а�                         StartPos 210, Length 8
    char    kasis               [   6];    char    _kasis               ;    // [double,  6.3] ������                         StartPos 219, Length 6
    char    sbasis              [   6];    char    _sbasis              ;    // [long  ,    6] ����BASIS                      StartPos 226, Length 6
    char    ibasis              [   6];    char    _ibasis              ;    // [long  ,    6] �̷�BASIS                      StartPos 233, Length 6
    char    openyakcha          [   8];    char    _openyakcha          ;    // [long  ,    8] �̰�����������                 StartPos 240, Length 8
    char    jgubun              [   2];    char    _jgubun              ;    // [string,    2] ������                     StartPos 249, Length 2
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϵ��ð���ŷ���             StartPos 252, Length 12
    char    basprice            [   8];    char    _basprice            ;    // [long  ,    8] �����ڻ����簡                 StartPos 265, Length 8
} JC0_OutBlock, *LPJC0_OutBlock;
#define NAME_JC0_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _JC0_H_
