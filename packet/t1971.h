#ifndef _t1971_H_
#define _t1971_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW���簡ȣ����ȸ(t1971) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1971     "t1971"

// �⺻�Է�
typedef struct _t1971InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
} t1971InBlock, *LPt1971InBlock;
#define NAME_t1971InBlock     "t1971InBlock"

// ���
typedef struct _t1971OutBlock
{
    char    hname               [  40];    char    _hname               ;    // [string,   40] �ѱ۸�                         StartPos 0, Length 40
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 41, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 50, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 52, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 61, Length 6
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �����ŷ���                     StartPos 68, Length 12
    char    jnilclose           [   8];    char    _jnilclose           ;    // [long  ,    8] ��������                       StartPos 81, Length 8
    char    offerho1            [   8];    char    _offerho1            ;    // [long  ,    8] �ŵ�ȣ��1                      StartPos 90, Length 8
    char    bidho1              [   8];    char    _bidho1              ;    // [long  ,    8] �ż�ȣ��1                      StartPos 99, Length 8
    char    offerrem1           [  12];    char    _offerrem1           ;    // [long  ,   12] �ŵ�ȣ������1                  StartPos 108, Length 12
    char    lp_offerrem1        [  12];    char    _lp_offerrem1        ;    // [long  ,   12] LP�ŵ�ȣ������1                StartPos 121, Length 12
    char    bidrem1             [  12];    char    _bidrem1             ;    // [long  ,   12] �ż�ȣ������1                  StartPos 134, Length 12
    char    lp_bidrem1          [  12];    char    _lp_bidrem1          ;    // [long  ,   12] LP�ż�ȣ������1                StartPos 147, Length 12
    char    preoffercha1        [  12];    char    _preoffercha1        ;    // [long  ,   12] �����ŵ�������1              StartPos 160, Length 12
    char    prebidcha1          [  12];    char    _prebidcha1          ;    // [long  ,   12] �����ż�������1              StartPos 173, Length 12
    char    offerho2            [   8];    char    _offerho2            ;    // [long  ,    8] �ŵ�ȣ��2                      StartPos 186, Length 8
    char    bidho2              [   8];    char    _bidho2              ;    // [long  ,    8] �ż�ȣ��2                      StartPos 195, Length 8
    char    offerrem2           [  12];    char    _offerrem2           ;    // [long  ,   12] �ŵ�ȣ������2                  StartPos 204, Length 12
    char    lp_offerrem2        [  12];    char    _lp_offerrem2        ;    // [long  ,   12] LP�ŵ�ȣ������2                StartPos 217, Length 12
    char    bidrem2             [  12];    char    _bidrem2             ;    // [long  ,   12] �ż�ȣ������2                  StartPos 230, Length 12
    char    lp_bidrem2          [  12];    char    _lp_bidrem2          ;    // [long  ,   12] LP�ż�ȣ������2                StartPos 243, Length 12
    char    preoffercha2        [  12];    char    _preoffercha2        ;    // [long  ,   12] �����ŵ�������2              StartPos 256, Length 12
    char    prebidcha2          [  12];    char    _prebidcha2          ;    // [long  ,   12] �����ż�������2              StartPos 269, Length 12
    char    offerho3            [   8];    char    _offerho3            ;    // [long  ,    8] �ŵ�ȣ��3                      StartPos 282, Length 8
    char    bidho3              [   8];    char    _bidho3              ;    // [long  ,    8] �ż�ȣ��3                      StartPos 291, Length 8
    char    offerrem3           [  12];    char    _offerrem3           ;    // [long  ,   12] �ŵ�ȣ������3                  StartPos 300, Length 12
    char    lp_offerrem3        [  12];    char    _lp_offerrem3        ;    // [long  ,   12] LP�ŵ�ȣ������3                StartPos 313, Length 12
    char    bidrem3             [  12];    char    _bidrem3             ;    // [long  ,   12] �ż�ȣ������3                  StartPos 326, Length 12
    char    lp_bidrem3          [  12];    char    _lp_bidrem3          ;    // [long  ,   12] LP�ż�ȣ������3                StartPos 339, Length 12
    char    preoffercha3        [  12];    char    _preoffercha3        ;    // [long  ,   12] �����ŵ�������3              StartPos 352, Length 12
    char    prebidcha3          [  12];    char    _prebidcha3          ;    // [long  ,   12] �����ż�������3              StartPos 365, Length 12
    char    offerho4            [   8];    char    _offerho4            ;    // [long  ,    8] �ŵ�ȣ��4                      StartPos 378, Length 8
    char    bidho4              [   8];    char    _bidho4              ;    // [long  ,    8] �ż�ȣ��4                      StartPos 387, Length 8
    char    offerrem4           [  12];    char    _offerrem4           ;    // [long  ,   12] �ŵ�ȣ������4                  StartPos 396, Length 12
    char    lp_offerrem4        [  12];    char    _lp_offerrem4        ;    // [long  ,   12] LP�ŵ�ȣ������4                StartPos 409, Length 12
    char    bidrem4             [  12];    char    _bidrem4             ;    // [long  ,   12] �ż�ȣ������4                  StartPos 422, Length 12
    char    lp_bidrem4          [  12];    char    _lp_bidrem4          ;    // [long  ,   12] LP�ż�ȣ������4                StartPos 435, Length 12
    char    preoffercha4        [  12];    char    _preoffercha4        ;    // [long  ,   12] �����ŵ�������4              StartPos 448, Length 12
    char    prebidcha4          [  12];    char    _prebidcha4          ;    // [long  ,   12] �����ż�������4              StartPos 461, Length 12
    char    offerho5            [   8];    char    _offerho5            ;    // [long  ,    8] �ŵ�ȣ��5                      StartPos 474, Length 8
    char    bidho5              [   8];    char    _bidho5              ;    // [long  ,    8] �ż�ȣ��5                      StartPos 483, Length 8
    char    offerrem5           [  12];    char    _offerrem5           ;    // [long  ,   12] �ŵ�ȣ������5                  StartPos 492, Length 12
    char    lp_offerrem5        [  12];    char    _lp_offerrem5        ;    // [long  ,   12] LP�ŵ�ȣ������5                StartPos 505, Length 12
    char    bidrem5             [  12];    char    _bidrem5             ;    // [long  ,   12] �ż�ȣ������5                  StartPos 518, Length 12
    char    lp_bidrem5          [  12];    char    _lp_bidrem5          ;    // [long  ,   12] LP�ż�ȣ������5                StartPos 531, Length 12
    char    preoffercha5        [  12];    char    _preoffercha5        ;    // [long  ,   12] �����ŵ�������5              StartPos 544, Length 12
    char    prebidcha5          [  12];    char    _prebidcha5          ;    // [long  ,   12] �����ż�������5              StartPos 557, Length 12
    char    offerho6            [   8];    char    _offerho6            ;    // [long  ,    8] �ŵ�ȣ��6                      StartPos 570, Length 8
    char    bidho6              [   8];    char    _bidho6              ;    // [long  ,    8] �ż�ȣ��6                      StartPos 579, Length 8
    char    offerrem6           [  12];    char    _offerrem6           ;    // [long  ,   12] �ŵ�ȣ������6                  StartPos 588, Length 12
    char    lp_offerrem6        [  12];    char    _lp_offerrem6        ;    // [long  ,   12] LP�ŵ�ȣ������6                StartPos 601, Length 12
    char    bidrem6             [  12];    char    _bidrem6             ;    // [long  ,   12] �ż�ȣ������6                  StartPos 614, Length 12
    char    lp_bidrem6          [  12];    char    _lp_bidrem6          ;    // [long  ,   12] LP�ż�ȣ������6                StartPos 627, Length 12
    char    preoffercha6        [  12];    char    _preoffercha6        ;    // [long  ,   12] �����ŵ�������6              StartPos 640, Length 12
    char    prebidcha6          [  12];    char    _prebidcha6          ;    // [long  ,   12] �����ż�������6              StartPos 653, Length 12
    char    offerho7            [   8];    char    _offerho7            ;    // [long  ,    8] �ŵ�ȣ��7                      StartPos 666, Length 8
    char    bidho7              [   8];    char    _bidho7              ;    // [long  ,    8] �ż�ȣ��7                      StartPos 675, Length 8
    char    offerrem7           [  12];    char    _offerrem7           ;    // [long  ,   12] �ŵ�ȣ������7                  StartPos 684, Length 12
    char    lp_offerrem7        [  12];    char    _lp_offerrem7        ;    // [long  ,   12] LP�ŵ�ȣ������7                StartPos 697, Length 12
    char    bidrem7             [  12];    char    _bidrem7             ;    // [long  ,   12] �ż�ȣ������7                  StartPos 710, Length 12
    char    lp_bidrem7          [  12];    char    _lp_bidrem7          ;    // [long  ,   12] LP�ż�ȣ������7                StartPos 723, Length 12
    char    preoffercha7        [  12];    char    _preoffercha7        ;    // [long  ,   12] �����ŵ�������7              StartPos 736, Length 12
    char    prebidcha7          [  12];    char    _prebidcha7          ;    // [long  ,   12] �����ż�������7              StartPos 749, Length 12
    char    offerho8            [   8];    char    _offerho8            ;    // [long  ,    8] �ŵ�ȣ��8                      StartPos 762, Length 8
    char    bidho8              [   8];    char    _bidho8              ;    // [long  ,    8] �ż�ȣ��8                      StartPos 771, Length 8
    char    offerrem8           [  12];    char    _offerrem8           ;    // [long  ,   12] �ŵ�ȣ������8                  StartPos 780, Length 12
    char    lp_offerrem8        [  12];    char    _lp_offerrem8        ;    // [long  ,   12] LP�ŵ�ȣ������8                StartPos 793, Length 12
    char    bidrem8             [  12];    char    _bidrem8             ;    // [long  ,   12] �ż�ȣ������8                  StartPos 806, Length 12
    char    lp_bidrem8          [  12];    char    _lp_bidrem8          ;    // [long  ,   12] LP�ż�ȣ������8                StartPos 819, Length 12
    char    preoffercha8        [  12];    char    _preoffercha8        ;    // [long  ,   12] �����ŵ�������8              StartPos 832, Length 12
    char    prebidcha8          [  12];    char    _prebidcha8          ;    // [long  ,   12] �����ż�������8              StartPos 845, Length 12
    char    offerho9            [   8];    char    _offerho9            ;    // [long  ,    8] �ŵ�ȣ��9                      StartPos 858, Length 8
    char    bidho9              [   8];    char    _bidho9              ;    // [long  ,    8] �ż�ȣ��9                      StartPos 867, Length 8
    char    offerrem9           [  12];    char    _offerrem9           ;    // [long  ,   12] �ŵ�ȣ������9                  StartPos 876, Length 12
    char    lp_offerrem9        [  12];    char    _lp_offerrem9        ;    // [long  ,   12] LP�ŵ�ȣ������9                StartPos 889, Length 12
    char    bidrem9             [  12];    char    _bidrem9             ;    // [long  ,   12] �ż�ȣ������9                  StartPos 902, Length 12
    char    lp_bidrem9          [  12];    char    _lp_bidrem9          ;    // [long  ,   12] LP�ż�ȣ������9                StartPos 915, Length 12
    char    preoffercha9        [  12];    char    _preoffercha9        ;    // [long  ,   12] �����ŵ�������9              StartPos 928, Length 12
    char    prebidcha9          [  12];    char    _prebidcha9          ;    // [long  ,   12] �����ż�������9              StartPos 941, Length 12
    char    offerho10           [   8];    char    _offerho10           ;    // [long  ,    8] �ŵ�ȣ��10                     StartPos 954, Length 8
    char    bidho10             [   8];    char    _bidho10             ;    // [long  ,    8] �ż�ȣ��10                     StartPos 963, Length 8
    char    offerrem10          [  12];    char    _offerrem10          ;    // [long  ,   12] �ŵ�ȣ������10                 StartPos 972, Length 12
    char    lp_offerrem10       [  12];    char    _lp_offerrem10       ;    // [long  ,   12] LP�ŵ�ȣ������10               StartPos 985, Length 12
    char    bidrem10            [  12];    char    _bidrem10            ;    // [long  ,   12] �ż�ȣ������10                 StartPos 998, Length 12
    char    lp_bidrem10         [  12];    char    _lp_bidrem10         ;    // [long  ,   12] LP�ż�ȣ������10               StartPos 1011, Length 12
    char    preoffercha10       [  12];    char    _preoffercha10       ;    // [long  ,   12] �����ŵ�������10             StartPos 1024, Length 12
    char    prebidcha10         [  12];    char    _prebidcha10         ;    // [long  ,   12] �����ż�������10             StartPos 1037, Length 12
    char    offer               [  12];    char    _offer               ;    // [long  ,   12] �ŵ�ȣ��������                 StartPos 1050, Length 12
    char    bid                 [  12];    char    _bid                 ;    // [long  ,   12] �ż�ȣ��������                 StartPos 1063, Length 12
    char    preoffercha         [  12];    char    _preoffercha         ;    // [long  ,   12] �����ŵ���������             StartPos 1076, Length 12
    char    prebidcha           [  12];    char    _prebidcha           ;    // [long  ,   12] �����ż���������             StartPos 1089, Length 12
    char    hotime              [   8];    char    _hotime              ;    // [string,    8] ���Žð�                       StartPos 1102, Length 8
    char    yeprice             [   8];    char    _yeprice             ;    // [long  ,    8] ����ü�ᰡ��                   StartPos 1111, Length 8
    char    yevolume            [  12];    char    _yevolume            ;    // [float ,   12] ����ü�����                   StartPos 1120, Length 12
    char    yesign              [   1];    char    _yesign              ;    // [string,    1] ����ü�����ϱ���               StartPos 1133, Length 1
    char    yechange            [   8];    char    _yechange            ;    // [long  ,    8] ����ü�����ϴ��               StartPos 1135, Length 8
    char    yediff              [   6];    char    _yediff              ;    // [float ,  6.2] ����ü������                 StartPos 1144, Length 6
    char    tmoffer             [  12];    char    _tmoffer             ;    // [long  ,   12] �ð��ܸŵ��ܷ�                 StartPos 1151, Length 12
    char    tmbid               [  12];    char    _tmbid               ;    // [long  ,   12] �ð��ܸż��ܷ�                 StartPos 1164, Length 12
    char    ho_status           [   1];    char    _ho_status           ;    // [string,    1] ���ñ���                       StartPos 1177, Length 1
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                           StartPos 1179, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                           StartPos 1188, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                           StartPos 1197, Length 8
    char    invidx              [   1];    char    _invidx              ;    // [string,    1] ELW�Ǹ�����(1:ǥ��2:������3:��� StartPos 1206, Length 1
    char    koba_stdprc         [  12];    char    _koba_stdprc         ;    // [float , 12.2] KO������                       StartPos 1208, Length 12
    char    koba_acc_rt         [  12];    char    _koba_acc_rt         ;    // [float , 12.2] KO���ٵ�                       StartPos 1221, Length 12
    char    koba_yn             [   1];    char    _koba_yn             ;    // [string,    1] KO�߻�����(Y/N)                StartPos 1234, Length 1
    char    lp_impv             [   6];    char    _lp_impv             ;    // [float ,  6.2] LP���纯����                   StartPos 1236, Length 6
} t1971OutBlock, *LPt1971OutBlock;
#define NAME_t1971OutBlock     "t1971OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1971_H_
