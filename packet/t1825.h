#ifndef _t1825_H_
#define _t1825_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����QŬ���˻�(��ť����Ʈ)(t1825) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1825     "t1825"

// �⺻�Է�                       
typedef struct _t1825InBlock
{
    char    search_cd           [   4];    char    _search_cd           ;    // [string,    4] �˻��ڵ�                        StartPos 0, Length 4
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����(0:��ü1:�ڽ���2:�ڽ���)    StartPos 5, Length 1
} t1825InBlock, *LPt1825InBlock;
#define NAME_t1825InBlock     "t1825InBlock"

// ���                           
typedef struct _t1825OutBlock
{
    char    JongCnt             [   4];    char    _JongCnt             ;    // [long  ,    4] �˻������                      StartPos 0, Length 4
} t1825OutBlock, *LPt1825OutBlock;
#define NAME_t1825OutBlock     "t1825OutBlock"

// ���1                          , occurs
typedef struct _t1825OutBlock1
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                          StartPos 7, Length 20
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 28, Length 1
    char    signcnt             [   3];    char    _signcnt             ;    // [long  ,    3] ���Ӻ���                        StartPos 30, Length 3
    char    close               [   9];    char    _close               ;    // [long  ,    9] ���簡                          StartPos 34, Length 9
    char    change              [   9];    char    _change              ;    // [long  ,    9] ���ϴ��                        StartPos 44, Length 9
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 54, Length 6
    char    volume              [  10];    char    _volume              ;    // [long  ,   10] �ŷ���                          StartPos 61, Length 10
    char    volumerate          [   6];    char    _volumerate          ;    // [float ,  6.2] �ŷ������ϴ����                StartPos 72, Length 6
} t1825OutBlock1, *LPt1825OutBlock1;
#define NAME_t1825OutBlock1     "t1825OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1825_H_
