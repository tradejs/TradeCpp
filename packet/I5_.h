#ifndef _I5__H_
#define _I5__H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ڽ���ETF����ǽð�NAV(I5) ( attr,block )
#pragma pack( push, 1 )

#define NAME_I5_     "I5_"

// �Է�                           
typedef struct _I5__InBlock
{
    char    shcode              [   6];    // [string,    6] �����ڵ�                        StartPos 0, Length 6
} I5__InBlock, *LPI5__InBlock;
#define NAME_I5__InBlock     "InBlock"

// ���                           
typedef struct _I5__OutBlock
{
    char    time                [   8];    char    _time                ;    // [string,    8] �ð�                            StartPos 0, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 9, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 18, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 20, Length 8
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �����ŷ���                      StartPos 29, Length 12
    char    navdiff             [   9];    char    _navdiff             ;    // [float ,  9.2] NAV���                         StartPos 42, Length 9
    char    nav                 [   9];    char    _nav                 ;    // [float ,  9.2] NAV                             StartPos 52, Length 9
    char    navchange           [   9];    char    _navchange           ;    // [float ,  9.2] ���ϴ��                        StartPos 62, Length 9
    char    crate               [   9];    char    _crate               ;    // [float ,  9.2] ��������                        StartPos 72, Length 9
    char    grate               [   9];    char    _grate               ;    // [float ,  9.2] ����                            StartPos 82, Length 9
    char    jisu                [   8];    char    _jisu                ;    // [float ,  8.2] ����                            StartPos 92, Length 8
    char    jichange            [   8];    char    _jichange            ;    // [float ,  8.2] ���ϴ��                        StartPos 101, Length 8
    char    jirate              [   8];    char    _jirate              ;    // [float ,  8.2] ���ϴ����                      StartPos 110, Length 8
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 119, Length 6
} I5__OutBlock, *LPI5__OutBlock;
#define NAME_I5__OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _I5__H_
