#ifndef _OMG_H_
#define _OMG_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ɼǹΰ���(OMG) ( attr,block )
#pragma pack( push, 1 )

#define NAME_OMG     "OMG"

// �Է�
typedef struct _OMG_InBlock
{
    char    optcode             [   8];                                      // [string,    8] �ɼ��ڵ�                       StartPos 0, Length 8
} OMG_InBlock, *LPOMG_InBlock;
#define NAME_OMG_InBlock     "InBlock"

// ���
typedef struct _OMG_OutBlock
{
    char    chetime             [   6];    char    _chetime             ;    // [string,    6] ü��ð�                       StartPos 0, Length 6
    char    actprice            [   6];    char    _actprice            ;    // [float ,  6.2] ��簡                         StartPos 7, Length 6
    char    k200jisu            [   6];    char    _k200jisu            ;    // [float ,  6.2] KOSPI200����                   StartPos 14, Length 6
    char    fut200jisu          [   6];    char    _fut200jisu          ;    // [float ,  6.2] ��������                       StartPos 21, Length 6
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                         StartPos 28, Length 6
    char    capimpv             [   6];    char    _capimpv             ;    // [float ,  6.2] ��ǥ���纯����                 StartPos 35, Length 6
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���纯����                     StartPos 42, Length 6
    char    delt                [   7];    char    _delt                ;    // [float ,  7.4] ��Ÿ(������)                 StartPos 49, Length 7
    char    gama                [   7];    char    _gama                ;    // [float ,  7.4] ����(������)                 StartPos 57, Length 7
    char    ceta                [   7];    char    _ceta                ;    // [float ,  7.4] ��Ÿ(������)                 StartPos 65, Length 7
    char    vega                [   7];    char    _vega                ;    // [float ,  7.4] ����(������)                 StartPos 73, Length 7
    char    rhox                [   7];    char    _rhox                ;    // [float ,  7.4] �ο�(������)                 StartPos 81, Length 7
    char    theoryprice         [   6];    char    _theoryprice         ;    // [float ,  6.2] �̷а�(������)               StartPos 89, Length 6
    char    bimpv               [   6];    char    _bimpv               ;    // [float ,  6.2] ���ϰ����纯����               StartPos 96, Length 6
    char    offerimpv           [   6];    char    _offerimpv           ;    // [float ,  6.2] �ŵ������纯����               StartPos 103, Length 6
    char    bidimpv             [   6];    char    _bidimpv             ;    // [float ,  6.2] �ż������纯����               StartPos 110, Length 6
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] �ɼ��ڵ�                       StartPos 117, Length 8
} OMG_OutBlock, *LPOMG_OutBlock;
#define NAME_OMG_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _OMG_H_
