#ifndef _t1411_H_
#define _t1411_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ���ű�����������ȸ(t1411) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1411     "t1411"

// �⺻�Է�                       
typedef struct _t1411InBlock
{
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ���屸��                        StartPos 0, Length 1
    char    jongchk             [   1];    char    _jongchk             ;    // [string,    1] ��Ź�ſ뱸��                    StartPos 2, Length 1
    char    jkrate              [   1];    char    _jkrate              ;    // [string,    1] ���ű�������                    StartPos 4, Length 1
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 6, Length 6
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 13, Length 4
} t1411InBlock, *LPt1411InBlock;
#define NAME_t1411InBlock     "t1411InBlock"

// ���                           
typedef struct _t1411OutBlock
{
    char    jkrate              [   3];    char    _jkrate              ;    // [long  ,    3] ��Ź���ű���                    StartPos 0, Length 3
    char    sjkrate             [   3];    char    _sjkrate             ;    // [long  ,    3] �ſ����ű���                    StartPos 4, Length 3
    char    idx                 [   4];    char    _idx                 ;    // [long  ,    4] IDX                             StartPos 8, Length 4
} t1411OutBlock, *LPt1411OutBlock;
#define NAME_t1411OutBlock     "t1411OutBlock"

// ���1                          , occurs
typedef struct _t1411OutBlock1
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                          StartPos 7, Length 20
    char    jkrate              [   3];    char    _jkrate              ;    // [long  ,    3] ��Ź���ű���                    StartPos 28, Length 3
    char    sjkrate             [   3];    char    _sjkrate             ;    // [long  ,    3] �ſ����ű���                    StartPos 32, Length 3
    char    subprice            [   8];    char    _subprice            ;    // [long  ,    8] ��밡                          StartPos 36, Length 8
    char    recprice            [   8];    char    _recprice            ;    // [long  ,    8] ��������                        StartPos 45, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 54, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 63, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 65, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 74, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 81, Length 12
} t1411OutBlock1, *LPt1411OutBlock1;
#define NAME_t1411OutBlock1     "t1411OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1411_H_
