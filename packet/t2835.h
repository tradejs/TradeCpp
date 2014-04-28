#ifndef _t2835_H_
#define _t2835_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// EUREX�ɼǼ����ü�������(t2835) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t2835     "t2835"

// �⺻�Է�                       
typedef struct _t2835InBlock
{
    char    yyyymm              [   6];    char    _yyyymm              ;    // [string,    6] ����                            StartPos 0, Length 6
} t2835InBlock, *LPt2835InBlock;
#define NAME_t2835InBlock     "t2835InBlock"

// ���                           
typedef struct _t2835OutBlock
{
    char    gmprice             [   6];    char    _gmprice             ;    // [float ,  6.2] �ٿ������簡                    StartPos 0, Length 6
    char    gmsign              [   1];    char    _gmsign              ;    // [string,    1] �ٿ������ϴ�񱸺�              StartPos 7, Length 1
    char    gmchange            [   6];    char    _gmchange            ;    // [float ,  6.2] �ٿ������ϴ��                  StartPos 9, Length 6
    char    gmdiff              [   6];    char    _gmdiff              ;    // [float ,  6.2] �ٿ��������                    StartPos 16, Length 6
    char    gmvolume            [  12];    char    _gmvolume            ;    // [long  ,   12] �ٿ����ŷ���                    StartPos 23, Length 12
    char    gmshcode            [   8];    char    _gmshcode            ;    // [string,    8] �ٿ��������ڵ�                  StartPos 36, Length 8
} t2835OutBlock, *LPt2835OutBlock;
#define NAME_t2835OutBlock     "t2835OutBlock"

// ���1                          , occurs
typedef struct _t2835OutBlock1
{
    char    actprice            [   6];    char    _actprice            ;    // [float ,  6.2] ��簡                          StartPos 0, Length 6
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] �ݿɼ��ڵ�                      StartPos 7, Length 8
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                          StartPos 16, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 23, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���ϴ��                        StartPos 25, Length 6
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 32, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 39, Length 12
    char    offerho1            [   6];    char    _offerho1            ;    // [float ,  6.2] �ŵ�ȣ��                        StartPos 52, Length 6
    char    bidho1              [   6];    char    _bidho1              ;    // [float ,  6.2] �ż�ȣ��                        StartPos 59, Length 6
    char    cvolume             [  12];    char    _cvolume             ;    // [long  ,   12] ü�ᷮ                          StartPos 66, Length 12
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���簡ġ                        StartPos 79, Length 6
    char    timevl              [   6];    char    _timevl              ;    // [float ,  6.2] �ð���ġ                        StartPos 86, Length 6
    char    offerrem1           [  12];    char    _offerrem1           ;    // [long  ,   12] �ŵ��ܷ�                        StartPos 93, Length 12
    char    bidrem1             [  12];    char    _bidrem1             ;    // [long  ,   12] �ż��ܷ�                        StartPos 106, Length 12
    char    open                [   6];    char    _open                ;    // [float ,  6.2] �ð�                            StartPos 119, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] ��                            StartPos 126, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] ����                            StartPos 133, Length 6
    char    atmgubun            [   1];    char    _atmgubun            ;    // [string,    1] ATM����                         StartPos 140, Length 1
    char    jisuconv            [   6];    char    _jisuconv            ;    // [float ,  6.2] ����ȯ��                        StartPos 142, Length 6
} t2835OutBlock1, *LPt2835OutBlock1;
#define NAME_t2835OutBlock1     "t2835OutBlock1"

// ���2                          , occurs
typedef struct _t2835OutBlock2
{
    char    actprice            [   6];    char    _actprice            ;    // [float ,  6.2] ��簡                          StartPos 0, Length 6
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] ǲ�ɼ��ڵ�                      StartPos 7, Length 8
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                          StartPos 16, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 23, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���ϴ��                        StartPos 25, Length 6
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 32, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 39, Length 12
    char    offerho1            [   6];    char    _offerho1            ;    // [float ,  6.2] �ŵ�ȣ��                        StartPos 52, Length 6
    char    bidho1              [   6];    char    _bidho1              ;    // [float ,  6.2] �ż�ȣ��                        StartPos 59, Length 6
    char    cvolume             [  12];    char    _cvolume             ;    // [long  ,   12] ü�ᷮ                          StartPos 66, Length 12
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���簡ġ                        StartPos 79, Length 6
    char    timevl              [   6];    char    _timevl              ;    // [float ,  6.2] �ð���ġ                        StartPos 86, Length 6
    char    offerrem1           [  12];    char    _offerrem1           ;    // [long  ,   12] �ŵ��ܷ�                        StartPos 93, Length 12
    char    bidrem1             [  12];    char    _bidrem1             ;    // [long  ,   12] �ż��ܷ�                        StartPos 106, Length 12
    char    open                [   6];    char    _open                ;    // [float ,  6.2] �ð�                            StartPos 119, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] ��                            StartPos 126, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] ����                            StartPos 133, Length 6
    char    atmgubun            [   1];    char    _atmgubun            ;    // [string,    1] ATM����                         StartPos 140, Length 1
    char    jisuconv            [   6];    char    _jisuconv            ;    // [float ,  6.2] ����ȯ��                        StartPos 142, Length 6
} t2835OutBlock2, *LPt2835OutBlock2;
#define NAME_t2835OutBlock2     "t2835OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t2835_H_
