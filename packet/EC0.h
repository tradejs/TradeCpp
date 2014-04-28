#ifndef _EC0_H_
#define _EC0_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// EUREX����KP200�����ɼǼ���ü��(EC0) ( attr,block )
#pragma pack( push, 1 )

#define NAME_EC0     "EC0"

// �Է�                           
typedef struct _EC0_InBlock
{
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
} EC0_InBlock, *LPEC0_InBlock;
#define NAME_EC0_InBlock     "InBlock"

// ���                           
typedef struct _EC0_OutBlock
{
    char    chetime             [   6];    char    _chetime             ;    // [string,    6] ü��ð�(24�ð�)                StartPos 0, Length 6
    char    chetime1            [   6];    char    _chetime1            ;    // [string,    6] ü��ð�(36�ð�)                StartPos 7, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ������������񱸺�              StartPos 14, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] �������������                  StartPos 16, Length 6
    char    drate               [   6];    char    _drate               ;    // [float ,  6.2] �������������ص����            StartPos 23, Length 6
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                          StartPos 30, Length 6
    char    open                [   6];    char    _open                ;    // [float ,  6.2] �ð�                            StartPos 37, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] ��                            StartPos 44, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] ����                            StartPos 51, Length 6
    char    cgubun              [   1];    char    _cgubun              ;    // [string,    1] ü�ᱸ��                        StartPos 58, Length 1
    char    cvolume             [   6];    char    _cvolume             ;    // [long  ,    6] ü�ᷮ                          StartPos 60, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 67, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �����ŷ����(������)            StartPos 80, Length 12
    char    mdvolume            [  12];    char    _mdvolume            ;    // [long  ,   12] �ŵ�����ü�ᷮ                  StartPos 93, Length 12
    char    mdchecnt            [   8];    char    _mdchecnt            ;    // [long  ,    8] �ŵ�����ü��Ǽ�(������)        StartPos 106, Length 8
    char    msvolume            [  12];    char    _msvolume            ;    // [long  ,   12] �ż�����ü�ᷮ                  StartPos 115, Length 12
    char    mschecnt            [   8];    char    _mschecnt            ;    // [long  ,    8] �ż�����ü��Ǽ�(������)        StartPos 128, Length 8
    char    cpower              [   9];    char    _cpower              ;    // [float ,  9.2] ü�ᰭ��                        StartPos 137, Length 9
    char    offerho1            [   6];    char    _offerho1            ;    // [float ,  6.2] �ŵ�ȣ��1                       StartPos 147, Length 6
    char    bidho1              [   6];    char    _bidho1              ;    // [float ,  6.2] �ż�ȣ��1                       StartPos 154, Length 6
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰�����������                  StartPos 161, Length 8
    char    k200jisu            [   6];    char    _k200jisu            ;    // [float ,  6.2] KOSPI200����                    StartPos 170, Length 6
    char    eqva                [   7];    char    _eqva                ;    // [float ,  7.2] KOSPI�                       StartPos 177, Length 7
    char    theoryprice         [   6];    char    _theoryprice         ;    // [float ,  6.2] �̷а�                          StartPos 185, Length 6
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���纯����                      StartPos 192, Length 6
    char    openyakcha          [   8];    char    _openyakcha          ;    // [long  ,    8] �̰�����������                  StartPos 199, Length 8
    char    timevalue           [   6];    char    _timevalue           ;    // [float ,  6.2] �ð���ġ                        StartPos 208, Length 6
    char    jgubun              [   2];    char    _jgubun              ;    // [string,    2] ������                      StartPos 215, Length 2
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϵ��ð���ŷ���              StartPos 218, Length 12
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] �����ڵ�                        StartPos 231, Length 8
} EC0_OutBlock, *LPEC0_OutBlock;
#define NAME_EC0_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _EC0_H_
