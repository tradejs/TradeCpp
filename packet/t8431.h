#ifndef _t8431_H_
#define _t8431_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ELW������ȸ(t8431) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8431     "t8431"

// �⺻�Է�                       
typedef struct _t8431InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy                           StartPos 0, Length 1
} t8431InBlock, *LPt8431InBlock;
#define NAME_t8431InBlock     "t8431InBlock"

// �ֽ����񸶽���                 , occurs
typedef struct _t8431OutBlock
{
    char    hname               [  40];    // [string,   40] �����                          StartPos 0, Length 40
    char    shcode              [   6];    // [string,    6] �����ڵ�                        StartPos 40, Length 6
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                        StartPos 46, Length 12
    char    uplmtprice          [   8];    // [long  ,    8] ���Ѱ�                          StartPos 58, Length 8
    char    dnlmtprice          [   8];    // [long  ,    8] ���Ѱ�                          StartPos 66, Length 8
    char    jnilclose           [   8];    // [long  ,    8] ��������                        StartPos 74, Length 8
    char    recprice            [   8];    // [long  ,    8] ���ذ�                          StartPos 82, Length 8
} t8431OutBlock, *LPt8431OutBlock;
#define NAME_t8431OutBlock     "t8431OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8431_H_
