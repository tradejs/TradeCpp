#ifndef _t1422_H_
#define _t1422_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��/����(t1422) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1422     "t1422"

// �⺻�Է�
typedef struct _t1422InBlock
{
    char    qrygb               [   1];    char    _qrygb               ;    // [string,    1] ��ȸ����                       StartPos 0, Length 1
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����                           StartPos 2, Length 1
    char    jnilgubun           [   1];    char    _jnilgubun           ;    // [string,    1] ���ϱ���                       StartPos 4, Length 1
    char    sign                [   1];    char    _sign                ;    // [string,    1] �����ѱ���                     StartPos 6, Length 1
    char    jc_num              [  12];    char    _jc_num              ;    // [long  ,   12] �������                       StartPos 8, Length 12
    char    sprice              [   8];    char    _sprice              ;    // [long  ,    8] ���۰���                       StartPos 21, Length 8
    char    eprice              [   8];    char    _eprice              ;    // [long  ,    8] ���ᰡ��                       StartPos 30, Length 8
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                         StartPos 39, Length 12
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                            StartPos 52, Length 4
} t1422InBlock, *LPt1422InBlock;
#define NAME_t1422InBlock     "t1422InBlock"

// ���
typedef struct _t1422OutBlock
{
    char    cnt                 [   4];    char    _cnt                 ;    // [long  ,    4] CNT                            StartPos 0, Length 4
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                            StartPos 5, Length 4
} t1422OutBlock, *LPt1422OutBlock;
#define NAME_t1422OutBlock     "t1422OutBlock"

// ���1, occurs
typedef struct _t1422OutBlock1
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] �ѱ۸�                         StartPos 0, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 21, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 30, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 32, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 41, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                     StartPos 48, Length 12
    char    diff_vol            [  10];    char    _diff_vol            ;    // [float , 10.2] �ŷ�������                     StartPos 61, Length 10
    char    offerrem1           [  12];    char    _offerrem1           ;    // [long  ,   12] �ŵ��ܷ�                       StartPos 72, Length 12
    char    bidrem1             [  12];    char    _bidrem1             ;    // [long  ,   12] �ż��ܷ�                       StartPos 85, Length 12
    char    last                [   6];    char    _last                ;    // [string,    6] ��������                       StartPos 98, Length 6
    char    lmtdaycnt           [   8];    char    _lmtdaycnt           ;    // [long  ,    8] ����                           StartPos 105, Length 8
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϰŷ���                     StartPos 114, Length 12
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 127, Length 6
} t1422OutBlock1, *LPt1422OutBlock1;
#define NAME_t1422OutBlock1     "t1422OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1422_H_
