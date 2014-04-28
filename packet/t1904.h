#ifndef _t1904_H_
#define _t1904_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ETF����������ȸ(t1904) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1904     "t1904"

// �⺻�Է�                       
typedef struct _t1904InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] ETF�����ڵ�                     StartPos 0, Length 6
    char    date                [   8];    char    _date                ;    // [string,    8] PDF��������                     StartPos 7, Length 8
    char    sgb                 [   1];    char    _sgb                 ;    // [string,    1] ���ı���(1:�򰡱ݾ�2:���Ǽ�)    StartPos 16, Length 1
} t1904InBlock, *LPt1904InBlock;
#define NAME_t1904InBlock     "t1904InBlock"

// ���                           
typedef struct _t1904OutBlock
{
    char    chk_tday            [   1];    char    _chk_tday            ;    // [string,    1] ���ϱ���                        StartPos 0, Length 1
    char    date                [   8];    char    _date                ;    // [string,    8] PDF��������                     StartPos 2, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] ETF���簡                       StartPos 11, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ETF���ϴ�񱸺�                 StartPos 20, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ETF���ϴ��                     StartPos 22, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] ETF�����                       StartPos 31, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] ETF�����ŷ���                   StartPos 38, Length 12
    char    nav                 [   8];    char    _nav                 ;    // [float ,  8.2] NAV                             StartPos 51, Length 8
    char    navsign             [   1];    char    _navsign             ;    // [string,    1] NAV���ϴ�񱸺�                 StartPos 60, Length 1
    char    navchange           [   8];    char    _navchange           ;    // [float ,  8.2] NAV���ϴ��                     StartPos 62, Length 8
    char    navdiff             [   6];    char    _navdiff             ;    // [float ,  6.2] NAV�����                       StartPos 71, Length 6
    char    jnilnav             [   8];    char    _jnilnav             ;    // [float ,  8.2] ����NAV                         StartPos 78, Length 8
    char    jnilnavsign         [   1];    char    _jnilnavsign         ;    // [string,    1] ����NAV���ϴ�񱸺�             StartPos 87, Length 1
    char    jnilnavchange       [   8];    char    _jnilnavchange       ;    // [float ,  8.2] ����NAV���ϴ��                 StartPos 89, Length 8
    char    jnilnavdiff         [   6];    char    _jnilnavdiff         ;    // [float ,  6.2] ����NAV�����                   StartPos 98, Length 6
    char    upname              [  20];    char    _upname              ;    // [string,   20] ������                          StartPos 105, Length 20
    char    upcode              [   3];    char    _upcode              ;    // [string,    3] �����ڵ�                        StartPos 126, Length 3
    char    upprice             [   7];    char    _upprice             ;    // [float ,  7.2] �������簡                      StartPos 130, Length 7
    char    upsign              [   1];    char    _upsign              ;    // [string,    1] �������Ϻ񱸺�                  StartPos 138, Length 1
    char    upchange            [   6];    char    _upchange            ;    // [float ,  6.2] �������ϴ��                    StartPos 140, Length 6
    char    updiff              [   6];    char    _updiff              ;    // [float ,  6.2] ���������                      StartPos 147, Length 6
    char    futname             [  20];    char    _futname             ;    // [string,   20] �����ֱٿ�����                  StartPos 154, Length 20
    char    futcode             [   8];    char    _futcode             ;    // [string,    8] �����ֱٿ����ڵ�                StartPos 175, Length 8
    char    futprice            [   6];    char    _futprice            ;    // [float ,  6.2] �������簡                      StartPos 184, Length 6
    char    futsign             [   1];    char    _futsign             ;    // [string,    1] �������Ϻ񱸺�                  StartPos 191, Length 1
    char    futchange           [   6];    char    _futchange           ;    // [float ,  6.2] �������ϴ��                    StartPos 193, Length 6
    char    futdiff             [   6];    char    _futdiff             ;    // [float ,  6.2] ���������                      StartPos 200, Length 6
    char    upname2             [  20];    char    _upname2             ;    // [string,   20] ����������                      StartPos 207, Length 20
    char    upcode2             [   3];    char    _upcode2             ;    // [string,    3] ���������ڵ�                    StartPos 228, Length 3
    char    upprice2            [   7];    char    _upprice2            ;    // [float ,  7.2] �����������簡                  StartPos 232, Length 7
    char    etftotcap           [  12];    char    _etftotcap           ;    // [long  ,   12] ���ڻ��Ѿ�(����:��)             StartPos 240, Length 12
    char    etfnum              [   4];    char    _etfnum              ;    // [long  ,    4] ���������                      StartPos 253, Length 4
    char    etfcunum            [  12];    char    _etfcunum            ;    // [long  ,   12] CU�ֽļ�                        StartPos 258, Length 12
    char    cash                [  12];    char    _cash                ;    // [long  ,   12] ����                            StartPos 271, Length 12
    char    opcom_nmk           [  20];    char    _opcom_nmk           ;    // [string,   20] �����                        StartPos 284, Length 20
    char    tot_pval            [  12];    char    _tot_pval            ;    // [long  ,   12] �������򰡱ݾ���                StartPos 305, Length 12
    char    tot_sigatval        [  12];    char    _tot_sigatval        ;    // [long  ,   12] �����񱸼��ð��Ѿ���            StartPos 318, Length 12
} t1904OutBlock, *LPt1904OutBlock;
#define NAME_t1904OutBlock     "t1904OutBlock"

// ���1                          , occurs
typedef struct _t1904OutBlock1
{
    char    shcode              [  12];    char    _shcode              ;    // [string,   12] �����ڵ�                        StartPos 0, Length 12
    char    hname               [  20];    char    _hname               ;    // [string,   20] �ѱ۸�                          StartPos 13, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 34, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 43, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 45, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 54, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 61, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �ŷ����(�鸸)                  StartPos 74, Length 12
    char    icux                [  12];    char    _icux                ;    // [long  ,   12] �������Ǽ�(����/��ȭ����/USD� StartPos 87, Length 12
    char    parprice            [  12];    char    _parprice            ;    // [long  ,   12] �׸�ݾ�/�������ݾ�             StartPos 100, Length 12
    char    pvalue              [  12];    char    _pvalue              ;    // [long  ,   12] �򰡱ݾ�                        StartPos 113, Length 12
    char    sigatvalue          [  12];    char    _sigatvalue          ;    // [long  ,   12] �����ð��Ѿ�                    StartPos 126, Length 12
    char    profitdate          [   8];    char    _profitdate          ;    // [string,    8] PDF��������                     StartPos 139, Length 8
    char    weight              [   6];    char    _weight              ;    // [float ,  6.2] ����(�򰡱ݾ�)                  StartPos 148, Length 6
    char    diff2               [   6];    char    _diff2               ;    // [float ,  6.2] ETF����������                 StartPos 155, Length 6
} t1904OutBlock1, *LPt1904OutBlock1;
#define NAME_t1904OutBlock1     "t1904OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1904_H_
