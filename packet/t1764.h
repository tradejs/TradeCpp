#ifndef _t1764_H_
#define _t1764_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ȸ���縮��Ʈ(t1764) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1764     "t1764"

// �⺻�Է�                       
typedef struct _t1764InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    gubun1              [   1];    char    _gubun1              ;    // [string,    1] ����1                           StartPos 7, Length 1
} t1764InBlock, *LPt1764InBlock;
#define NAME_t1764InBlock     "t1764InBlock"

// ���1                          , occurs
typedef struct _t1764OutBlock
{
    char    rank                [   4];    char    _rank                ;    // [long  ,    4] ����                            StartPos 0, Length 4
    char    tradno              [   3];    char    _tradno              ;    // [string,    3] �ŷ�����ȣ                      StartPos 5, Length 3
    char    tradname            [  20];    char    _tradname            ;    // [string,   20] �ŷ����̸�                      StartPos 9, Length 20
} t1764OutBlock, *LPt1764OutBlock;
#define NAME_t1764OutBlock     "t1764OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1764_H_
