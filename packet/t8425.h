#ifndef _t8425_H_
#define _t8425_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��ü�׸�(t8425) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8425     "t8425"

// �⺻�Է�                       
typedef struct _t8425InBlock
{
    char    dummy               [   1];    char    _dummy               ;    // [string,    1] Dummy                           StartPos 0, Length 1
} t8425InBlock, *LPt8425InBlock;
#define NAME_t8425InBlock     "t8425InBlock"

// ���                           , occurs
typedef struct _t8425OutBlock
{
    char    tmname              [  36];    char    _tmname              ;    // [string,   36] �׸���                          StartPos 0, Length 36
    char    tmcode              [   4];    char    _tmcode              ;    // [string,    4] �׸��ڵ�                        StartPos 37, Length 4
} t8425OutBlock, *LPt8425OutBlock;
#define NAME_t8425OutBlock     "t8425OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8425_H_
