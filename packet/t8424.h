#ifndef _t8424_H_
#define _t8424_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��ü����(t8424) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8424     "t8424"

// �⺻�Է�                       
typedef struct _t8424InBlock
{
    char    gubun1              [   1];    char    _gubun1              ;    // [string,    1] ����1                           StartPos 0, Length 1
} t8424InBlock, *LPt8424InBlock;
#define NAME_t8424InBlock     "t8424InBlock"

// ���                           , occurs
typedef struct _t8424OutBlock
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] ������                          StartPos 0, Length 20
    char    upcode              [   3];    char    _upcode              ;    // [string,    3] �����ڵ�                        StartPos 21, Length 3
} t8424OutBlock, *LPt8424OutBlock;
#define NAME_t8424OutBlock     "t8424OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8424_H_
