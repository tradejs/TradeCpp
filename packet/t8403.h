#ifndef _t8403_H_
#define _t8403_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽļ���ȣ����ȸ(API��)(t8403) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8403     "t8403"

// �⺻�Է�
typedef struct _t8403InBlock
{
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                       StartPos 0, Length 8
} t8403InBlock, *LPt8403InBlock;
#define NAME_t8403InBlock     "t8403InBlock"

// ���
typedef struct _t8403OutBlock
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                         StartPos 0, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 21, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 30, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 32, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 41, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                         StartPos 48, Length 12
    char    stimeqrt            [   6];    char    _stimeqrt            ;    // [float ,  6.2] �ŷ������ϵ��ð�����           StartPos 61, Length 6
    char    jnilclose           [   8];    char    _jnilclose           ;    // [long  ,    8] ��������                       StartPos 68, Length 8
    char    offerho1            [   8];    char    _offerho1            ;    // [long  ,    8] �ŵ�ȣ��1                      StartPos 77, Length 8
    char    bidho1              [   8];    char    _bidho1              ;    // [long  ,    8] �ż�ȣ��1                      StartPos 86, Length 8
    char    offerrem1           [   8];    char    _offerrem1           ;    // [long  ,    8] �ŵ�ȣ������1                  StartPos 95, Length 8
    char    bidrem1             [   8];    char    _bidrem1             ;    // [long  ,    8] �ż�ȣ������1                  StartPos 104, Length 8
    char    dcnt1               [   8];    char    _dcnt1               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�1                  StartPos 113, Length 8
    char    scnt1               [   8];    char    _scnt1               ;    // [long  ,    8] �ż�ȣ���Ǽ�1                  StartPos 122, Length 8
    char    offerho2            [   8];    char    _offerho2            ;    // [long  ,    8] �ŵ�ȣ��2                      StartPos 131, Length 8
    char    bidho2              [   8];    char    _bidho2              ;    // [long  ,    8] �ż�ȣ��2                      StartPos 140, Length 8
    char    offerrem2           [   8];    char    _offerrem2           ;    // [long  ,    8] �ŵ�ȣ������2                  StartPos 149, Length 8
    char    bidrem2             [   8];    char    _bidrem2             ;    // [long  ,    8] �ż�ȣ������2                  StartPos 158, Length 8
    char    dcnt2               [   8];    char    _dcnt2               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�2                  StartPos 167, Length 8
    char    scnt2               [   8];    char    _scnt2               ;    // [long  ,    8] �ż�ȣ���Ǽ�2                  StartPos 176, Length 8
    char    offerho3            [   8];    char    _offerho3            ;    // [long  ,    8] �ŵ�ȣ��3                      StartPos 185, Length 8
    char    bidho3              [   8];    char    _bidho3              ;    // [long  ,    8] �ż�ȣ��3                      StartPos 194, Length 8
    char    offerrem3           [   8];    char    _offerrem3           ;    // [long  ,    8] �ŵ�ȣ������3                  StartPos 203, Length 8
    char    bidrem3             [   8];    char    _bidrem3             ;    // [long  ,    8] �ż�ȣ������3                  StartPos 212, Length 8
    char    dcnt3               [   8];    char    _dcnt3               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�3                  StartPos 221, Length 8
    char    scnt3               [   8];    char    _scnt3               ;    // [long  ,    8] �ż�ȣ���Ǽ�3                  StartPos 230, Length 8
    char    offerho4            [   8];    char    _offerho4            ;    // [long  ,    8] �ŵ�ȣ��4                      StartPos 239, Length 8
    char    bidho4              [   8];    char    _bidho4              ;    // [long  ,    8] �ż�ȣ��4                      StartPos 248, Length 8
    char    offerrem4           [   8];    char    _offerrem4           ;    // [long  ,    8] �ŵ�ȣ������4                  StartPos 257, Length 8
    char    bidrem4             [   8];    char    _bidrem4             ;    // [long  ,    8] �ż�ȣ������4                  StartPos 266, Length 8
    char    dcnt4               [   8];    char    _dcnt4               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�4                  StartPos 275, Length 8
    char    scnt4               [   8];    char    _scnt4               ;    // [long  ,    8] �ż�ȣ���Ǽ�4                  StartPos 284, Length 8
    char    offerho5            [   8];    char    _offerho5            ;    // [long  ,    8] �ŵ�ȣ��5                      StartPos 293, Length 8
    char    bidho5              [   8];    char    _bidho5              ;    // [long  ,    8] �ż�ȣ��5                      StartPos 302, Length 8
    char    offerrem5           [   8];    char    _offerrem5           ;    // [long  ,    8] �ŵ�ȣ������5                  StartPos 311, Length 8
    char    bidrem5             [   8];    char    _bidrem5             ;    // [long  ,    8] �ż�ȣ������5                  StartPos 320, Length 8
    char    dcnt5               [   8];    char    _dcnt5               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�5                  StartPos 329, Length 8
    char    scnt5               [   8];    char    _scnt5               ;    // [long  ,    8] �ż�ȣ���Ǽ�5                  StartPos 338, Length 8
    char    offerho6            [   8];    char    _offerho6            ;    // [long  ,    8] �ŵ�ȣ��6                      StartPos 347, Length 8
    char    bidho6              [   8];    char    _bidho6              ;    // [long  ,    8] �ż�ȣ��6                      StartPos 356, Length 8
    char    offerrem6           [   8];    char    _offerrem6           ;    // [long  ,    8] �ŵ�ȣ������6                  StartPos 365, Length 8
    char    bidrem6             [   8];    char    _bidrem6             ;    // [long  ,    8] �ż�ȣ������6                  StartPos 374, Length 8
    char    dcnt6               [   8];    char    _dcnt6               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�6                  StartPos 383, Length 8
    char    scnt6               [   8];    char    _scnt6               ;    // [long  ,    8] �ż�ȣ���Ǽ�6                  StartPos 392, Length 8
    char    offerho7            [   8];    char    _offerho7            ;    // [long  ,    8] �ŵ�ȣ��7                      StartPos 401, Length 8
    char    bidho7              [   8];    char    _bidho7              ;    // [long  ,    8] �ż�ȣ��7                      StartPos 410, Length 8
    char    offerrem7           [   8];    char    _offerrem7           ;    // [long  ,    8] �ŵ�ȣ������7                  StartPos 419, Length 8
    char    bidrem7             [   8];    char    _bidrem7             ;    // [long  ,    8] �ż�ȣ������7                  StartPos 428, Length 8
    char    dcnt7               [   8];    char    _dcnt7               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�7                  StartPos 437, Length 8
    char    scnt7               [   8];    char    _scnt7               ;    // [long  ,    8] �ż�ȣ���Ǽ�7                  StartPos 446, Length 8
    char    offerho8            [   8];    char    _offerho8            ;    // [long  ,    8] �ŵ�ȣ��8                      StartPos 455, Length 8
    char    bidho8              [   8];    char    _bidho8              ;    // [long  ,    8] �ż�ȣ��8                      StartPos 464, Length 8
    char    offerrem8           [   8];    char    _offerrem8           ;    // [long  ,    8] �ŵ�ȣ������8                  StartPos 473, Length 8
    char    bidrem8             [   8];    char    _bidrem8             ;    // [long  ,    8] �ż�ȣ������8                  StartPos 482, Length 8
    char    dcnt8               [   8];    char    _dcnt8               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�8                  StartPos 491, Length 8
    char    scnt8               [   8];    char    _scnt8               ;    // [long  ,    8] �ż�ȣ���Ǽ�8                  StartPos 500, Length 8
    char    offerho9            [   8];    char    _offerho9            ;    // [long  ,    8] �ŵ�ȣ��9                      StartPos 509, Length 8
    char    bidho9              [   8];    char    _bidho9              ;    // [long  ,    8] �ż�ȣ��9                      StartPos 518, Length 8
    char    offerrem9           [   8];    char    _offerrem9           ;    // [long  ,    8] �ŵ�ȣ������9                  StartPos 527, Length 8
    char    bidrem9             [   8];    char    _bidrem9             ;    // [long  ,    8] �ż�ȣ������9                  StartPos 536, Length 8
    char    dcnt9               [   8];    char    _dcnt9               ;    // [long  ,    8] �ŵ�ȣ���Ǽ�9                  StartPos 545, Length 8
    char    scnt9               [   8];    char    _scnt9               ;    // [long  ,    8] �ż�ȣ���Ǽ�9                  StartPos 554, Length 8
    char    offerho10           [   8];    char    _offerho10           ;    // [long  ,    8] �ŵ�ȣ��10                     StartPos 563, Length 8
    char    bidho10             [   8];    char    _bidho10             ;    // [long  ,    8] �ż�ȣ��10                     StartPos 572, Length 8
    char    offerrem10          [   8];    char    _offerrem10          ;    // [long  ,    8] �ŵ�ȣ������10                 StartPos 581, Length 8
    char    bidrem10            [   8];    char    _bidrem10            ;    // [long  ,    8] �ż�ȣ������10                 StartPos 590, Length 8
    char    dcnt10              [   8];    char    _dcnt10              ;    // [long  ,    8] �ŵ�ȣ���Ǽ�10                 StartPos 599, Length 8
    char    scnt10              [   8];    char    _scnt10              ;    // [long  ,    8] �ż�ȣ���Ǽ�10                 StartPos 608, Length 8
    char    dvol                [   8];    char    _dvol                ;    // [long  ,    8] �ŵ�ȣ���Ѽ���                 StartPos 617, Length 8
    char    svol                [   8];    char    _svol                ;    // [long  ,    8] �ż�ȣ���Ѽ���                 StartPos 626, Length 8
    char    toffernum           [   8];    char    _toffernum           ;    // [long  ,    8] �Ѹŵ�ȣ���Ǽ�                 StartPos 635, Length 8
    char    tbidnum             [   8];    char    _tbidnum             ;    // [long  ,    8] �Ѹż�ȣ���Ǽ�                 StartPos 644, Length 8
    char    time                [   6];    char    _time                ;    // [string,    6] ���Žð�                       StartPos 653, Length 6
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 660, Length 6
} t8403OutBlock, *LPt8403OutBlock;
#define NAME_t8403OutBlock     "t8403OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8403_H_
