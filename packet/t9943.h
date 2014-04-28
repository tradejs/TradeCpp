#ifndef _t9943_H_
#define _t9943_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����������������ȸAPI��(t9943) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t9943     "t9943"

// �⺻�Է�
typedef struct _t9943InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy                          StartPos 0, Length 1
} t9943InBlock, *LPt9943InBlock;
#define NAME_t9943InBlock     "t9943InBlock"

// �ֽ����񸶽���, occurs
typedef struct _t9943OutBlock
{
    char    hname               [  20];    // [string,   20] �����                         StartPos 0, Length 20
    char    shcode              [   8];    // [string,    8] �����ڵ�                       StartPos 20, Length 8
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                       StartPos 28, Length 12
} t9943OutBlock, *LPt9943OutBlock;
#define NAME_t9943OutBlock     "t9943OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t9943_H_
