#ifndef _t1427_H_
#define _t1427_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��/���Ѱ�����(t1427) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1427     "t1427"

// �⺻�Է�                       
typedef struct _t1427InBlock
{
    char    qrygb               [   1];    char    _qrygb               ;    // [string,    1] ��ȸ����                        StartPos 0, Length 1
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����                            StartPos 2, Length 1
    char    signgubun           [   1];    char    _signgubun           ;    // [string,    1] �����Ѱ�����                    StartPos 4, Length 1
    char    diff                [   3];    char    _diff                ;    // [long  ,    3] �����                          StartPos 6, Length 3
    char    jc_num              [  12];    char    _jc_num              ;    // [long  ,   12] �������                        StartPos 10, Length 12
    char    sprice              [   8];    char    _sprice              ;    // [long  ,    8] ���۰���                        StartPos 23, Length 8
    char    eprice              [   8];    char    _eprice              ;    // [long  ,    8] ���ᰡ��                        StartPos 32, Length 8
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                          StartPos 41, Length 12
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 54, Length 4
} t1427InBlock, *LPt1427InBlock;
#define NAME_t1427InBlock     "t1427InBlock"

// ���                           
typedef struct _t1427OutBlock
{
    char    cnt                 [   4];    char    _cnt                 ;    // [long  ,    4] CNT                             StartPos 0, Length 4
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 5, Length 4
} t1427OutBlock, *LPt1427OutBlock;
#define NAME_t1427OutBlock     "t1427OutBlock"

// ���1                          , occurs
typedef struct _t1427OutBlock1
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] �ѱ۸�                          StartPos 0, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 21, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 30, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 32, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 41, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 48, Length 12
    char    diff_vol            [  10];    char    _diff_vol            ;    // [float , 10.2] �ŷ�������                      StartPos 61, Length 10
    char    lmtprice            [   8];    char    _lmtprice            ;    // [long  ,    8] ���Ѱ�/���Ѱ�                   StartPos 72, Length 8
    char    rate                [  12];    char    _rate                ;    // [float , 12.2] �����                          StartPos 81, Length 12
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 94, Length 6
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϰŷ���                      StartPos 101, Length 12
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                            StartPos 114, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                            StartPos 123, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                            StartPos 132, Length 8
    char    lmtdaycnt           [   8];    char    _lmtdaycnt           ;    // [long  ,    8] ����                            StartPos 141, Length 8
} t1427OutBlock1, *LPt1427OutBlock1;
#define NAME_t1427OutBlock1     "t1427OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1427_H_
