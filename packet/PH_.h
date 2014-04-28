#ifndef _PH__H_
#define _PH__H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// KOSPI���α׷��Ÿ�����(PH) ( attr,block )
#pragma pack( push, 1 )

#define NAME_PH_     "PH_"

// �Է�                           
typedef struct _PH__InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
} PH__InBlock, *LPPH__InBlock;
#define NAME_PH__InBlock     "InBlock"

// ���                           
typedef struct _PH__OutBlock
{
    char    time                [   6];    char    _time                ;    // [string,    6] ���Žð�                        StartPos 0, Length 6
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 7, Length 8
    char    sign                [   1];    char    _sign                ;    // [long  ,    1] ���ϴ�񱸺�                    StartPos 16, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 18, Length 8
    char    volume              [  10];    char    _volume              ;    // [long  ,   10] �����ŷ���                      StartPos 27, Length 10
    char    drate               [   6];    char    _drate               ;    // [float ,  6.2] �����                          StartPos 38, Length 6
    char    cdhrem              [   9];    char    _cdhrem              ;    // [long  ,    9] ���͸ŵ�ȣ�� �ܷ�               StartPos 45, Length 9
    char    cshrem              [   9];    char    _cshrem              ;    // [long  ,    9] ���͸ż�ȣ�� �ܷ�               StartPos 55, Length 9
    char    bdhrem              [   9];    char    _bdhrem              ;    // [long  ,    9] �����͸ŵ�ȣ�� �ܷ�             StartPos 65, Length 9
    char    bshrem              [   9];    char    _bshrem              ;    // [long  ,    9] �����͸ż�ȣ�� �ܷ�             StartPos 75, Length 9
    char    cdhvolume           [   9];    char    _cdhvolume           ;    // [long  ,    9] ���͸ŵ�ȣ�� ����               StartPos 85, Length 9
    char    cshvolume           [   9];    char    _cshvolume           ;    // [long  ,    9] ���͸ż�ȣ�� ����               StartPos 95, Length 9
    char    bdhvolume           [   9];    char    _bdhvolume           ;    // [long  ,    9] �����͸ŵ�ȣ�� ����             StartPos 105, Length 9
    char    bshvolume           [   9];    char    _bshvolume           ;    // [long  ,    9] �����͸ż�ȣ�� ����             StartPos 115, Length 9
    char    dwcvolume           [   9];    char    _dwcvolume           ;    // [long  ,    9] ��ü�ŵ���Źü�����            StartPos 125, Length 9
    char    swcvolume           [   9];    char    _swcvolume           ;    // [long  ,    9] ��ü�ż���Źü�����            StartPos 135, Length 9
    char    djcvolume           [   9];    char    _djcvolume           ;    // [long  ,    9] ��ü�ŵ��ڱ�ü�����            StartPos 145, Length 9
    char    sjcvolume           [   9];    char    _sjcvolume           ;    // [long  ,    9] ��ü�ż��ڱ�ü�����            StartPos 155, Length 9
    char    tdvolume            [   9];    char    _tdvolume            ;    // [long  ,    9] ��ü�ŵ�ü�����                StartPos 165, Length 9
    char    tsvolume            [   9];    char    _tsvolume            ;    // [long  ,    9] ��ü�ż�ü�����                StartPos 175, Length 9
    char    tvol                [   9];    char    _tvol                ;    // [long  ,    9] ��ü���ż� ����                 StartPos 185, Length 9
    char    dwcvalue            [  12];    char    _dwcvalue            ;    // [long  ,   12] ��ü�ŵ���Źü��ݾ�            StartPos 195, Length 12
    char    swcvalue            [  12];    char    _swcvalue            ;    // [long  ,   12] ��ü�ż���Źü��ݾ�            StartPos 208, Length 12
    char    djcvalue            [  12];    char    _djcvalue            ;    // [long  ,   12] ��ü�ŵ��ڱ�ü��ݾ�            StartPos 221, Length 12
    char    sjcvalue            [  12];    char    _sjcvalue            ;    // [long  ,   12] ��ü�ż��ڱ�ü��ݾ�            StartPos 234, Length 12
    char    tdvalue             [  12];    char    _tdvalue             ;    // [long  ,   12] ��ü�ŵ�ü��ݾ�                StartPos 247, Length 12
    char    tsvalue             [  12];    char    _tsvalue             ;    // [long  ,   12] ��ü�ż�ü��ݾ�                StartPos 260, Length 12
    char    tval                [  12];    char    _tval                ;    // [long  ,   12] ��ü���ż� �ݾ�                 StartPos 273, Length 12
    char    pdgvolume           [   9];    char    _pdgvolume           ;    // [long  ,    9] �ŵ� �������ü���               StartPos 286, Length 9
    char    psgvolume           [   9];    char    _psgvolume           ;    // [long  ,    9] �ż� �������ü���               StartPos 296, Length 9
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 306, Length 6
} PH__OutBlock, *LPPH__OutBlock;
#define NAME_PH__OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _PH__H_
