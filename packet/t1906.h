#ifndef _t1906_H_
#define _t1906_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ETFLPȣ��(t1906) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1906     "t1906"

// �⺻�Է�                       
typedef struct _t1906InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
} t1906InBlock, *LPt1906InBlock;
#define NAME_t1906InBlock     "t1906InBlock"

// ���                           
typedef struct _t1906OutBlock
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] �ѱ۸�                          StartPos 0, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 21, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 30, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 32, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 41, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 48, Length 12
    char    lp_offerrem1        [  12];    char    _lp_offerrem1        ;    // [long  ,   12] LP�ŵ�ȣ������1                 StartPos 61, Length 12
    char    lp_bidrem1          [  12];    char    _lp_bidrem1          ;    // [long  ,   12] LP�ż�ȣ������1                 StartPos 74, Length 12
    char    lp_offerrem2        [  12];    char    _lp_offerrem2        ;    // [long  ,   12] LP�ŵ�ȣ������2                 StartPos 87, Length 12
    char    lp_bidrem2          [  12];    char    _lp_bidrem2          ;    // [long  ,   12] LP�ż�ȣ������2                 StartPos 100, Length 12
    char    lp_offerrem3        [  12];    char    _lp_offerrem3        ;    // [long  ,   12] LP�ŵ�ȣ������3                 StartPos 113, Length 12
    char    lp_bidrem3          [  12];    char    _lp_bidrem3          ;    // [long  ,   12] LP�ż�ȣ������3                 StartPos 126, Length 12
    char    lp_offerrem4        [  12];    char    _lp_offerrem4        ;    // [long  ,   12] LP�ŵ�ȣ������4                 StartPos 139, Length 12
    char    lp_bidrem4          [  12];    char    _lp_bidrem4          ;    // [string,   12] LP�ż�ȣ������4                 StartPos 152, Length 12
    char    lp_offerrem5        [  12];    char    _lp_offerrem5        ;    // [long  ,   12] LP�ŵ�ȣ������5                 StartPos 165, Length 12
    char    lp_bidrem5          [  12];    char    _lp_bidrem5          ;    // [long  ,   12] LP�ż�ȣ������5                 StartPos 178, Length 12
    char    lp_offerrem6        [  12];    char    _lp_offerrem6        ;    // [long  ,   12] LP�ŵ�ȣ������6                 StartPos 191, Length 12
    char    lp_bidrem6          [  12];    char    _lp_bidrem6          ;    // [long  ,   12] LP�ż�ȣ������6                 StartPos 204, Length 12
    char    lp_offerrem7        [  12];    char    _lp_offerrem7        ;    // [long  ,   12] LP�ŵ�ȣ������7                 StartPos 217, Length 12
    char    lp_bidrem7          [  12];    char    _lp_bidrem7          ;    // [long  ,   12] LP�ż�ȣ������7                 StartPos 230, Length 12
    char    lp_offerrem8        [  12];    char    _lp_offerrem8        ;    // [long  ,   12] LP�ŵ�ȣ������8                 StartPos 243, Length 12
    char    lp_bidrem8          [  12];    char    _lp_bidrem8          ;    // [long  ,   12] LP�ż�ȣ������8                 StartPos 256, Length 12
    char    lp_offerrem9        [  12];    char    _lp_offerrem9        ;    // [long  ,   12] LP�ŵ�ȣ������9                 StartPos 269, Length 12
    char    lp_bidrem9          [  12];    char    _lp_bidrem9          ;    // [long  ,   12] LP�ż�ȣ������9                 StartPos 282, Length 12
    char    lp_offerrem10       [  12];    char    _lp_offerrem10       ;    // [long  ,   12] LP�ŵ�ȣ������10                StartPos 295, Length 12
    char    lp_bidrem10         [  12];    char    _lp_bidrem10         ;    // [long  ,   12] LP�ż�ȣ������10                StartPos 308, Length 12
    char    jnilclose           [   8];    char    _jnilclose           ;    // [long  ,    8] ��������                        StartPos 321, Length 8
    char    offerho1            [   8];    char    _offerho1            ;    // [long  ,    8] �ŵ�ȣ��1                       StartPos 330, Length 8
    char    bidho1              [   8];    char    _bidho1              ;    // [long  ,    8] �ż�ȣ��1                       StartPos 339, Length 8
    char    offerrem1           [  12];    char    _offerrem1           ;    // [long  ,   12] �ŵ�ȣ������1                   StartPos 348, Length 12
    char    bidrem1             [  12];    char    _bidrem1             ;    // [long  ,   12] �ż�ȣ������1                   StartPos 361, Length 12
    char    preoffercha1        [  12];    char    _preoffercha1        ;    // [long  ,   12] �����ŵ�������1               StartPos 374, Length 12
    char    prebidcha1          [  12];    char    _prebidcha1          ;    // [long  ,   12] �����ż�������1               StartPos 387, Length 12
    char    offerho2            [   8];    char    _offerho2            ;    // [long  ,    8] �ŵ�ȣ��2                       StartPos 400, Length 8
    char    bidho2              [   8];    char    _bidho2              ;    // [long  ,    8] �ż�ȣ��2                       StartPos 409, Length 8
    char    offerrem2           [  12];    char    _offerrem2           ;    // [long  ,   12] �ŵ�ȣ������2                   StartPos 418, Length 12
    char    bidrem2             [  12];    char    _bidrem2             ;    // [long  ,   12] �ż�ȣ������2                   StartPos 431, Length 12
    char    preoffercha2        [  12];    char    _preoffercha2        ;    // [long  ,   12] �����ŵ�������2               StartPos 444, Length 12
    char    prebidcha2          [  12];    char    _prebidcha2          ;    // [long  ,   12] �����ż�������2               StartPos 457, Length 12
    char    offerho3            [   8];    char    _offerho3            ;    // [long  ,    8] �ŵ�ȣ��3                       StartPos 470, Length 8
    char    bidho3              [   8];    char    _bidho3              ;    // [long  ,    8] �ż�ȣ��3                       StartPos 479, Length 8
    char    offerrem3           [  12];    char    _offerrem3           ;    // [long  ,   12] �ŵ�ȣ������3                   StartPos 488, Length 12
    char    bidrem3             [  12];    char    _bidrem3             ;    // [long  ,   12] �ż�ȣ������3                   StartPos 501, Length 12
    char    preoffercha3        [  12];    char    _preoffercha3        ;    // [long  ,   12] �����ŵ�������3               StartPos 514, Length 12
    char    prebidcha3          [  12];    char    _prebidcha3          ;    // [long  ,   12] �����ż�������3               StartPos 527, Length 12
    char    offerho4            [   8];    char    _offerho4            ;    // [long  ,    8] �ŵ�ȣ��4                       StartPos 540, Length 8
    char    bidho4              [   8];    char    _bidho4              ;    // [long  ,    8] �ż�ȣ��4                       StartPos 549, Length 8
    char    offerrem4           [  12];    char    _offerrem4           ;    // [long  ,   12] �ŵ�ȣ������4                   StartPos 558, Length 12
    char    bidrem4             [  12];    char    _bidrem4             ;    // [long  ,   12] �ż�ȣ������4                   StartPos 571, Length 12
    char    preoffercha4        [  12];    char    _preoffercha4        ;    // [long  ,   12] �����ŵ�������4               StartPos 584, Length 12
    char    prebidcha4          [  12];    char    _prebidcha4          ;    // [long  ,   12] �����ż�������4               StartPos 597, Length 12
    char    offerho5            [   8];    char    _offerho5            ;    // [long  ,    8] �ŵ�ȣ��5                       StartPos 610, Length 8
    char    bidho5              [   8];    char    _bidho5              ;    // [long  ,    8] �ż�ȣ��5                       StartPos 619, Length 8
    char    offerrem5           [  12];    char    _offerrem5           ;    // [long  ,   12] �ŵ�ȣ������5                   StartPos 628, Length 12
    char    bidrem5             [  12];    char    _bidrem5             ;    // [long  ,   12] �ż�ȣ������5                   StartPos 641, Length 12
    char    preoffercha5        [  12];    char    _preoffercha5        ;    // [long  ,   12] �����ŵ�������5               StartPos 654, Length 12
    char    prebidcha5          [  12];    char    _prebidcha5          ;    // [long  ,   12] �����ż�������5               StartPos 667, Length 12
    char    offerho6            [   8];    char    _offerho6            ;    // [long  ,    8] �ŵ�ȣ��6                       StartPos 680, Length 8
    char    bidho6              [   8];    char    _bidho6              ;    // [long  ,    8] �ż�ȣ��6                       StartPos 689, Length 8
    char    offerrem6           [  12];    char    _offerrem6           ;    // [long  ,   12] �ŵ�ȣ������6                   StartPos 698, Length 12
    char    bidrem6             [  12];    char    _bidrem6             ;    // [long  ,   12] �ż�ȣ������6                   StartPos 711, Length 12
    char    preoffercha6        [  12];    char    _preoffercha6        ;    // [long  ,   12] �����ŵ�������6               StartPos 724, Length 12
    char    prebidcha6          [  12];    char    _prebidcha6          ;    // [long  ,   12] �����ż�������6               StartPos 737, Length 12
    char    offerho7            [   8];    char    _offerho7            ;    // [long  ,    8] �ŵ�ȣ��7                       StartPos 750, Length 8
    char    bidho7              [   8];    char    _bidho7              ;    // [long  ,    8] �ż�ȣ��7                       StartPos 759, Length 8
    char    offerrem7           [  12];    char    _offerrem7           ;    // [long  ,   12] �ŵ�ȣ������7                   StartPos 768, Length 12
    char    bidrem7             [  12];    char    _bidrem7             ;    // [long  ,   12] �ż�ȣ������7                   StartPos 781, Length 12
    char    preoffercha7        [  12];    char    _preoffercha7        ;    // [long  ,   12] �����ŵ�������7               StartPos 794, Length 12
    char    prebidcha7          [  12];    char    _prebidcha7          ;    // [long  ,   12] �����ż�������7               StartPos 807, Length 12
    char    offerho8            [   8];    char    _offerho8            ;    // [long  ,    8] �ŵ�ȣ��8                       StartPos 820, Length 8
    char    bidho8              [   8];    char    _bidho8              ;    // [long  ,    8] �ż�ȣ��8                       StartPos 829, Length 8
    char    offerrem8           [  12];    char    _offerrem8           ;    // [long  ,   12] �ŵ�ȣ������8                   StartPos 838, Length 12
    char    bidrem8             [  12];    char    _bidrem8             ;    // [long  ,   12] �ż�ȣ������8                   StartPos 851, Length 12
    char    preoffercha8        [  12];    char    _preoffercha8        ;    // [long  ,   12] �����ŵ�������8               StartPos 864, Length 12
    char    prebidcha8          [  12];    char    _prebidcha8          ;    // [long  ,   12] �����ż�������8               StartPos 877, Length 12
    char    offerho9            [   8];    char    _offerho9            ;    // [long  ,    8] �ŵ�ȣ��9                       StartPos 890, Length 8
    char    bidho9              [   8];    char    _bidho9              ;    // [long  ,    8] �ż�ȣ��9                       StartPos 899, Length 8
    char    offerrem9           [  12];    char    _offerrem9           ;    // [long  ,   12] �ŵ�ȣ������9                   StartPos 908, Length 12
    char    bidrem9             [  12];    char    _bidrem9             ;    // [long  ,   12] �ż�ȣ������9                   StartPos 921, Length 12
    char    preoffercha9        [  12];    char    _preoffercha9        ;    // [long  ,   12] �����ŵ�������9               StartPos 934, Length 12
    char    prebidcha9          [  12];    char    _prebidcha9          ;    // [long  ,   12] �����ż�������9               StartPos 947, Length 12
    char    offerho10           [   8];    char    _offerho10           ;    // [long  ,    8] �ŵ�ȣ��10                      StartPos 960, Length 8
    char    bidho10             [   8];    char    _bidho10             ;    // [long  ,    8] �ż�ȣ��10                      StartPos 969, Length 8
    char    offerrem10          [  12];    char    _offerrem10          ;    // [long  ,   12] �ŵ�ȣ������10                  StartPos 978, Length 12
    char    bidrem10            [  12];    char    _bidrem10            ;    // [long  ,   12] �ż�ȣ������10                  StartPos 991, Length 12
    char    preoffercha10       [  12];    char    _preoffercha10       ;    // [long  ,   12] �����ŵ�������10              StartPos 1004, Length 12
    char    prebidcha10         [  12];    char    _prebidcha10         ;    // [long  ,   12] �����ż�������10              StartPos 1017, Length 12
    char    offer               [  12];    char    _offer               ;    // [long  ,   12] �ŵ�ȣ��������                  StartPos 1030, Length 12
    char    bid                 [  12];    char    _bid                 ;    // [long  ,   12] �ż�ȣ��������                  StartPos 1043, Length 12
    char    preoffercha         [  12];    char    _preoffercha         ;    // [long  ,   12] �����ŵ���������              StartPos 1056, Length 12
    char    prebidcha           [  12];    char    _prebidcha           ;    // [long  ,   12] �����ż���������              StartPos 1069, Length 12
    char    hotime              [   8];    char    _hotime              ;    // [string,    8] ���Žð�                        StartPos 1082, Length 8
    char    yeprice             [   8];    char    _yeprice             ;    // [long  ,    8] ����ü�ᰡ��                    StartPos 1091, Length 8
    char    yevolume            [  12];    char    _yevolume            ;    // [long  ,   12] ����ü�����                    StartPos 1100, Length 12
    char    yesign              [   1];    char    _yesign              ;    // [string,    1] ����ü�����ϱ���                StartPos 1113, Length 1
    char    yechange            [   8];    char    _yechange            ;    // [long  ,    8] ����ü�����ϴ��                StartPos 1115, Length 8
    char    yediff              [   6];    char    _yediff              ;    // [float ,  6.2] ����ü������                  StartPos 1124, Length 6
    char    tmoffer             [  12];    char    _tmoffer             ;    // [long  ,   12] �ð��ܸŵ��ܷ�                  StartPos 1131, Length 12
    char    tmbid               [  12];    char    _tmbid               ;    // [long  ,   12] �ð��ܸż��ܷ�                  StartPos 1144, Length 12
    char    ho_status           [   1];    char    _ho_status           ;    // [string,    1] ���ñ���                        StartPos 1157, Length 1
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 1159, Length 6
    char    uplmtprice          [   8];    char    _uplmtprice          ;    // [long  ,    8] ���Ѱ�                          StartPos 1166, Length 8
    char    dnlmtprice          [   8];    char    _dnlmtprice          ;    // [long  ,    8] ���Ѱ�                          StartPos 1175, Length 8
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                            StartPos 1184, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                            StartPos 1193, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                            StartPos 1202, Length 8
} t1906OutBlock, *LPt1906OutBlock;
#define NAME_t1906OutBlock     "t1906OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1906_H_
