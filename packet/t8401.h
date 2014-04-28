#ifndef _t8401_H_
#define _t8401_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽļ�����������ȸ(API��)(t8401) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8401     "t8401"

// �⺻�Է�
typedef struct _t8401InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy                          StartPos 0, Length 1
} t8401InBlock, *LPt8401InBlock;
#define NAME_t8401InBlock     "t8401InBlock"

// �ֽ����񸶽���, occurs
typedef struct _t8401OutBlock
{
    char    hname               [  20];    // [string,   20] �����                         StartPos 0, Length 20
    char    shcode              [   8];    // [string,    8] �����ڵ�                       StartPos 20, Length 8
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                       StartPos 28, Length 12
} t8401OutBlock, *LPt8401OutBlock;
#define NAME_t8401OutBlock     "t8401OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8401_H_
