#ifndef _t1956_H_
#define _t1956_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW���簡(Ȯ�����޾�)��ȸ(t1956) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1956     "t1956"

// �⺻�Է�
typedef struct _t1956InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
} t1956InBlock, *LPt1956InBlock;
#define NAME_t1956InBlock     "t1956InBlock"

// ���
typedef struct _t1956OutBlock
{
    char    hname               [  40];    char    _hname               ;    // [string,   40] �ѱ۸�                         StartPos 0, Length 40
    char    chetime             [  10];    char    _chetime             ;    // [string,   10] ü��ð�                       StartPos 41, Length 10
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 52, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 61, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 63, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 72, Length 6
    char    cvolume             [  10];    char    _cvolume             ;    // [long  ,   10] ü�ᷮ                         StartPos 79, Length 10
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �����ŷ���                     StartPos 90, Length 12
    char    recprice            [   8];    char    _recprice            ;    // [long  ,    8] ���ذ�                         StartPos 103, Length 8
    char    avg                 [   8];    char    _avg                 ;    // [long  ,    8] �������                       StartPos 112, Length 8
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [float ,   12] ���ϰŷ���                     StartPos 121, Length 12
    char    jvolume             [  12];    char    _jvolume             ;    // [float ,   12] ���ϵ��ð��ŷ���               StartPos 134, Length 12
    char    jnilclose           [   8];    char    _jnilclose           ;    // [long  ,    8] ��������                       StartPos 147, Length 8
    char    volumechg           [  12];    char    _volumechg           ;    // [float ,   12] �ŷ�����                       StartPos 156, Length 12
    char    volumediff          [   6];    char    _volumediff          ;    // [float ,  6.2] �ŷ����������                 StartPos 169, Length 6
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                           StartPos 176, Length 8
    char    odiff               [   6];    char    _odiff               ;    // [float ,  6.2] �ð������                     StartPos 185, Length 6
    char    opentime            [   6];    char    _opentime            ;    // [string,    6] �ð��ð�                       StartPos 192, Length 6
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                           StartPos 199, Length 8
    char    hdiff               [   6];    char    _hdiff               ;    // [float ,  6.2] �������                     StartPos 208, Length 6
    char    hightime            [   6];    char    _hightime            ;    // [string,    6] ���ð�                       StartPos 215, Length 6
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                           StartPos 222, Length 8
    char    ldiff               [   6];    char    _ldiff               ;    // [float ,  6.2] ���������                     StartPos 231, Length 6
    char    lowtime             [   6];    char    _lowtime             ;    // [string,    6] �����ð�                       StartPos 238, Length 6
    char    high52w             [   8];    char    _high52w             ;    // [long  ,    8] 52�ְ�                       StartPos 245, Length 8
    char    high52wdiff         [   6];    char    _high52wdiff         ;    // [float ,  6.2] 52�ְ������                 StartPos 254, Length 6
    char    high52wdate         [   8];    char    _high52wdate         ;    // [string,    8] 52�ְ���                     StartPos 261, Length 8
    char    low52w              [   8];    char    _low52w              ;    // [long  ,    8] 52������                       StartPos 270, Length 8
    char    low52wdiff          [   6];    char    _low52wdiff          ;    // [float ,  6.2] 52�����������                 StartPos 279, Length 6
    char    low52wdate          [   8];    char    _low52wdate          ;    // [string,    8] 52��������                     StartPos 286, Length 8
    char    exhratio            [   6];    char    _exhratio            ;    // [float ,  6.2] ������                         StartPos 295, Length 6
    char    listing             [  12];    char    _listing             ;    // [float ,   12] �����ֽļ�(õ)                 StartPos 302, Length 12
    char    memedan             [   5];    char    _memedan             ;    // [string,    5] ��������                       StartPos 315, Length 5
    char    vol                 [   6];    char    _vol                 ;    // [float ,  6.2] ȸ����                         StartPos 321, Length 6
    char    parity              [   8];    char    _parity              ;    // [float ,  8.2] �и�Ƽ                         StartPos 328, Length 8
    char    berate              [   8];    char    _berate              ;    // [float ,  8.2] ���ͺб�                       StartPos 337, Length 8
    char    gearing             [   8];    char    _gearing             ;    // [float ,  8.2] ��                         StartPos 346, Length 8
    char    elwexec             [   8];    char    _elwexec             ;    // [float ,  8.2] ��簡                         StartPos 355, Length 8
    char    issueprice          [   8];    char    _issueprice          ;    // [long  ,    8] ���డ                         StartPos 364, Length 8
    char    convrate            [  12];    char    _convrate            ;    // [float , 12.4] ��ȯ����                       StartPos 373, Length 12
    char    lastdate            [   8];    char    _lastdate            ;    // [string,    8] �����ŷ���                     StartPos 386, Length 8
    char    capt                [   8];    char    _capt                ;    // [float ,  8.2] �ں�����                       StartPos 395, Length 8
    char    egearing            [   8];    char    _egearing            ;    // [float ,  8.2] e.��                       StartPos 404, Length 8
    char    premium             [   8];    char    _premium             ;    // [float ,  8.2] �����̾�                       StartPos 413, Length 8
    char    spread              [   6];    char    _spread              ;    // [float ,  6.2] ��������                       StartPos 422, Length 6
    char    espread             [   6];    char    _espread             ;    // [float ,  6.2] �ִ뽺������                   StartPos 429, Length 6
    char    theoryprice         [  10];    char    _theoryprice         ;    // [float , 10.2] �̷а�                         StartPos 436, Length 10
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���纯����                     StartPos 447, Length 6
    char    moneyness           [   1];    char    _moneyness           ;    // [string,    1] ����                           StartPos 454, Length 1
    char    delt                [   8];    char    _delt                ;    // [float ,  8.6] ��Ÿ                           StartPos 456, Length 8
    char    gama                [   8];    char    _gama                ;    // [float ,  8.6] ����                           StartPos 465, Length 8
    char    vega                [  13];    char    _vega                ;    // [float , 13.6] ����                           StartPos 474, Length 13
    char    ceta                [  13];    char    _ceta                ;    // [float , 13.6] ��Ÿ                           StartPos 488, Length 13
    char    rhox                [  13];    char    _rhox                ;    // [float , 13.6] ��                             StartPos 502, Length 13
    char    bjandatecnt         [   4];    char    _bjandatecnt         ;    // [long  ,    4] �����ϼ�                       StartPos 516, Length 4
    char    mmsdate             [   8];    char    _mmsdate             ;    // [string,    8] ��簳����                     StartPos 521, Length 8
    char    mmedate             [   8];    char    _mmedate             ;    // [string,    8] ���������                     StartPos 530, Length 8
    char    payday              [   8];    char    _payday              ;    // [string,    8] ������                         StartPos 539, Length 8
    char    listdate            [   8];    char    _listdate            ;    // [string,    8] ������                         StartPos 548, Length 8
    char    lpmem               [  20];    char    _lpmem               ;    // [string,   20] LPȸ����                       StartPos 557, Length 20
    char    lp_holdvol          [  12];    char    _lp_holdvol          ;    // [float ,   12] LP��������                     StartPos 578, Length 12
    char    bcode               [   6];    char    _bcode               ;    // [string,    6] �����ڻ��ڵ�                   StartPos 591, Length 6
    char    bgubun              [   1];    char    _bgubun              ;    // [string,    1] �����ڻ걸��                   StartPos 598, Length 1
    char    bprice              [   8];    char    _bprice              ;    // [long  ,    8] �����ڻ����簡                 StartPos 600, Length 8
    char    bsign               [   1];    char    _bsign               ;    // [string,    1] �����ڻ����Ϻ񱸺�             StartPos 609, Length 1
    char    bchange             [   8];    char    _bchange             ;    // [long  ,    8] �����ڻ����Ϻ�                 StartPos 611, Length 8
    char    bdiff               [   6];    char    _bdiff               ;    // [float ,  6.2] �����ڻ�����                 StartPos 620, Length 6
    char    bvolume             [  12];    char    _bvolume             ;    // [float ,   12] �����ڻ�ŷ���                 StartPos 627, Length 12
    char    info1               [  10];    char    _info1               ;    // [string,   10] ������                         StartPos 640, Length 10
    char    info2               [  10];    char    _info2               ;    // [string,   10] ����/�޵��                  StartPos 651, Length 10
    char    info3               [  10];    char    _info3               ;    // [string,   10] ����/���屸��                  StartPos 662, Length 10
    char    info4               [  12];    char    _info4               ;    // [string,   12] ����/�Ҽ��Ǳ���                StartPos 673, Length 12
    char    janginfo            [  10];    char    _janginfo            ;    // [string,   10] �屸��                         StartPos 686, Length 10
    char    basketgb            [   1];    char    _basketgb            ;    // [string,    1] �ٽ��ϱ���                     StartPos 697, Length 1
    char    basketcnt           [   3];    char    _basketcnt           ;    // [long  ,    3] �ٽ��ϰ���                     StartPos 699, Length 3
    char    elwtype             [   2];    char    _elwtype             ;    // [string,    2] ELW�Ǹ������                StartPos 703, Length 2
    char    settletype          [   2];    char    _settletype          ;    // [string,    2] ELW�������                    StartPos 706, Length 2
    char    lpord               [   2];    char    _lpord               ;    // [string,    2] LP���ֹ����ɿ���               StartPos 709, Length 2
    char    elwdetail           [ 100];    char    _elwdetail           ;    // [string,  100] �Ǹ�����                       StartPos 712, Length 100
    char    valuation           [ 100];    char    _valuation           ;    // [string,  100] �����򰡰��ݹ��               StartPos 813, Length 100
    char    givemoney           [   8];    char    _givemoney           ;    // [float ,  8.3] Ȯ�����޾�                     StartPos 914, Length 8
} t1956OutBlock, *LPt1956OutBlock;
#define NAME_t1956OutBlock     "t1956OutBlock"

// ���1, occurs
typedef struct _t1956OutBlock1
{
    char    bskcode             [   6];    char    _bskcode             ;    // [string,    6] �����ڻ��ڵ�                   StartPos 0, Length 6
    char    bskbno              [   3];    char    _bskbno              ;    // [long  ,    3] �����ڻ����                   StartPos 7, Length 3
    char    bskprice            [   8];    char    _bskprice            ;    // [long  ,    8] �����ڻ����簡                 StartPos 11, Length 8
    char    bsksign             [   1];    char    _bsksign             ;    // [string,    1] �����ڻ����Ϻ񱸺�             StartPos 20, Length 1
    char    bskchange           [   8];    char    _bskchange           ;    // [long  ,    8] �����ڻ����Ϻ�                 StartPos 22, Length 8
    char    bskdiff             [   6];    char    _bskdiff             ;    // [float ,  6.2] �����ڻ�����                 StartPos 31, Length 6
    char    bskvolume           [  12];    char    _bskvolume           ;    // [float ,   12] �����ڻ�ŷ���                 StartPos 38, Length 12
    char    bskjnilclose        [   8];    char    _bskjnilclose        ;    // [long  ,    8] �����ڻ���������               StartPos 51, Length 8
} t1956OutBlock1, *LPt1956OutBlock1;
#define NAME_t1956OutBlock1     "t1956OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1956_H_
