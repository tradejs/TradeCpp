#ifndef _t1442_H_
#define _t1442_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �Ű�/������(t1442) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1442     "t1442"

// �⺻�Է�
typedef struct _t1442InBlock
{
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����                           StartPos 0, Length 1
    char    type1               [   1];    char    _type1               ;    // [string,    1] �Ű����                       StartPos 2, Length 1
    char    type2               [   1];    char    _type2               ;    // [string,    1] �Ⱓ                           StartPos 4, Length 1
    char    type3               [   1];    char    _type3               ;    // [string,    1] ��������                       StartPos 6, Length 1
    char    jc_num              [  12];    char    _jc_num              ;    // [long  ,   12] �������                       StartPos 8, Length 12
    char    sprice              [   8];    char    _sprice              ;    // [long  ,    8] ���۰���                       StartPos 21, Length 8
    char    eprice              [   8];    char    _eprice              ;    // [long  ,    8] ���ᰡ��                       StartPos 30, Length 8
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                         StartPos 39, Length 12
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                            StartPos 52, Length 4
} t1442InBlock, *LPt1442InBlock;
#define NAME_t1442InBlock     "t1442InBlock"

// ���
typedef struct _t1442OutBlock
{
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                            StartPos 0, Length 4
} t1442OutBlock, *LPt1442OutBlock;
#define NAME_t1442OutBlock     "t1442OutBlock"

// ���1, occurs
typedef struct _t1442OutBlock1
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                         StartPos 7, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 28, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 37, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 39, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 48, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �ŷ���                         StartPos 55, Length 12
    char    pastprice           [   8];    char    _pastprice           ;    // [long  ,    8] ������                         StartPos 68, Length 8
    char    pastsign            [   1];    char    _pastsign            ;    // [string,    1] ��������񱸺�                 StartPos 77, Length 1
    char    pastchange          [   8];    char    _pastchange          ;    // [long  ,    8] ���������                     StartPos 79, Length 8
    char    pastdiff            [   6];    char    _pastdiff            ;    // [float ,  6.2] �����������                   StartPos 88, Length 6
} t1442OutBlock1, *LPt1442OutBlock1;
#define NAME_t1442OutBlock1     "t1442OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1442_H_
