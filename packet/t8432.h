#ifndef _t8432_H_
#define _t8432_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����������������ȸAPI��(t8432) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8432     "t8432"

// �⺻�Է�                       
typedef struct _t8432InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy                           StartPos 0, Length 1
} t8432InBlock, *LPt8432InBlock;
#define NAME_t8432InBlock     "t8432InBlock"

// �ֽ����񸶽���                 , occurs
typedef struct _t8432OutBlock
{
    char    hname               [  20];    // [string,   20] �����                          StartPos 0, Length 20
    char    shcode              [   8];    // [string,    8] �����ڵ�                        StartPos 20, Length 8
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                        StartPos 28, Length 12
    char    uplmtprice          [   6];    // [float ,  6.2] ���Ѱ�                          StartPos 40, Length 6
    char    dnlmtprice          [   6];    // [float ,  6.2] ���Ѱ�                          StartPos 46, Length 6
    char    jnilclose           [   6];    // [float ,  6.2] ��������                        StartPos 52, Length 6
    char    jnilhigh            [   6];    // [float ,  6.2] ���ϰ�                        StartPos 58, Length 6
    char    jnillow             [   6];    // [float ,  6.2] ��������                        StartPos 64, Length 6
    char    recprice            [   6];    // [float ,  6.2] ���ذ�                          StartPos 70, Length 6
} t8432OutBlock, *LPt8432OutBlock;
#define NAME_t8432OutBlock     "t8432OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8432_H_
