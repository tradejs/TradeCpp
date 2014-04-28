#ifndef _t8430_H_
#define _t8430_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽ�������ȸ(t8430) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8430     "t8430"

// �⺻�Է�                       
typedef struct _t8430InBlock
{
    char    gubun               [   1];    // [string,    1] ����(0:��ü1:�ڽ���2:�ڽ���)    StartPos 0, Length 1
} t8430InBlock, *LPt8430InBlock;
#define NAME_t8430InBlock     "t8430InBlock"

// ���1                          , occurs
typedef struct _t8430OutBlock
{
    char    hname               [  20];    // [string,   20] �����                          StartPos 0, Length 20
    char    shcode              [   6];    // [string,    6] �����ڵ�                        StartPos 20, Length 6
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�                        StartPos 26, Length 12
    char    etfgubun            [   1];    // [string,    1] ETF����(1:ETF)                  StartPos 38, Length 1
    char    uplmtprice          [   8];    // [long  ,    8] ���Ѱ�                          StartPos 39, Length 8
    char    dnlmtprice          [   8];    // [long  ,    8] ���Ѱ�                          StartPos 47, Length 8
    char    jnilclose           [   8];    // [long  ,    8] ���ϰ�                          StartPos 55, Length 8
    char    memedan             [   5];    // [string,    5] �ֹ���������                    StartPos 63, Length 5
    char    recprice            [   8];    // [long  ,    8] ���ذ�                          StartPos 68, Length 8
    char    gubun               [   1];    // [string,    1] ����(1:�ڽ���2:�ڽ���)          StartPos 76, Length 1
} t8430OutBlock, *LPt8430OutBlock;
#define NAME_t8430OutBlock     "t8430OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8430_H_
