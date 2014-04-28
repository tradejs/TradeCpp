#ifndef _t9944_H_
#define _t9944_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼǸ�������ȸAPI��(t9944) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t9944     "t9944"

// �⺻�Է�
typedef struct _t9944InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy                          StartPos 0, Length 1
} t9944InBlock, *LPt9944InBlock;
#define NAME_t9944InBlock     "t9944InBlock"

// �ֽ����񸶽���, occurs
typedef struct _t9944OutBlock
{
    char    hname               [  20];    // [string,   20] �����                         StartPos 0, Length 20
    char    shcode              [   8];    // [string,    8] �����ڵ�                       StartPos 20, Length 8
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                       StartPos 28, Length 12
} t9944OutBlock, *LPt9944OutBlock;
#define NAME_t9944OutBlock     "t9944OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t9944_H_
