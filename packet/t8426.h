#ifndef _t8426_H_
#define _t8426_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��ǰ������������ȸ(API��)(t8426) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8426     "t8426"

// �⺻�Է�                       
typedef struct _t8426InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy                           StartPos 0, Length 1
} t8426InBlock, *LPt8426InBlock;
#define NAME_t8426InBlock     "t8426InBlock"

// �ֽ����񸶽���                 , occurs
typedef struct _t8426OutBlock
{
    char    hname               [  20];    // [string,   20] �����                          StartPos 0, Length 20
    char    shcode              [   8];    // [string,    8] �����ڵ�                        StartPos 20, Length 8
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                        StartPos 28, Length 12
} t8426OutBlock, *LPt8426OutBlock;
#define NAME_t8426OutBlock     "t8426OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8426_H_
