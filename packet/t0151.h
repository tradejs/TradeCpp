#ifndef _t0151_H_
#define _t0151_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽĴ��ϸŸ�����/������(����)(t0151) ( tuxcode=t0151,headtype=C )
#pragma pack( push, 1 )

#define NAME_t0151     "t0151"

// �⺻�Է�                       
typedef struct _t0151InBlock
{
    char    date                [   8];    // [string,    8] ����                            StartPos 0, Length 8
    char    accno               [  11];    // [string,   11] ���¹�ȣ                        StartPos 8, Length 11
    char    cts_medosu          [   1];    // [string,    1] CTS_�Ÿű���                    StartPos 19, Length 1
    char    cts_expcode         [  12];    // [string,   12] CTS_�����ȣ                    StartPos 20, Length 12
    char    cts_price           [   9];    // [string,    9] CTS_�ܰ�                        StartPos 32, Length 9
    char    cts_middiv          [   2];    // [string,    2] CTS_��ü                        StartPos 41, Length 2
} t0151InBlock, *LPt0151InBlock;
#define NAME_t0151InBlock     "t0151InBlock"

// ���                           
typedef struct _t0151OutBlock
{
    char    mdqty               [   9];    // [long  ,    9] �ŵ�����                        StartPos 0, Length 9
    char    mdamt               [  18];    // [long  ,   18] �ŵ������ݾ�                    StartPos 9, Length 18
    char    mdfee               [  18];    // [long  ,   18] �ŵ�������                      StartPos 27, Length 18
    char    mdtax               [  18];    // [long  ,   18] �ŵ��ŷ���                      StartPos 45, Length 18
    char    mdargtax            [  18];    // [long  ,   18] �ŵ���Ư��                      StartPos 63, Length 18
    char    tmdtax              [  18];    // [long  ,   18] �ŵ��������                    StartPos 81, Length 18
    char    mdadjamt            [  18];    // [long  ,   18] �ŵ�����ݾ�                    StartPos 99, Length 18
    char    msqty               [   9];    // [long  ,    9] �ż�����                        StartPos 117, Length 9
    char    msamt               [  18];    // [long  ,   18] �ż������ݾ�                    StartPos 126, Length 18
    char    msfee               [  18];    // [long  ,   18] �ż�������                      StartPos 144, Length 18
    char    tmstax              [  18];    // [long  ,   18] �ż��������                    StartPos 162, Length 18
    char    msadjamt            [  18];    // [long  ,   18] �ż�����ݾ�                    StartPos 180, Length 18
    char    tqty                [   9];    // [long  ,    9] �հ����                        StartPos 198, Length 9
    char    tamt                [  18];    // [long  ,   18] �հ�����ݾ�                    StartPos 207, Length 18
    char    tfee                [  18];    // [long  ,   18] �հ������                      StartPos 225, Length 18
    char    tottax              [  18];    // [long  ,   18] �հ�ŷ���                      StartPos 243, Length 18
    char    targtax             [  18];    // [long  ,   18] �հ��Ư��                      StartPos 261, Length 18
    char    ttax                [  18];    // [long  ,   18] �հ��������                    StartPos 279, Length 18
    char    tadjamt             [  18];    // [long  ,   18] �հ�����ݾ�                    StartPos 297, Length 18
    char    cts_medosu          [   1];    // [string,    1] CTS_�Ÿű���                    StartPos 315, Length 1
    char    cts_expcode         [  12];    // [string,   12] CTS_�����ȣ                    StartPos 316, Length 12
    char    cts_price           [   9];    // [string,    9] CTS_�ܰ�                        StartPos 328, Length 9
    char    cts_middiv          [   2];    // [string,    2] CTS_��ü                        StartPos 337, Length 2
} t0151OutBlock, *LPt0151OutBlock;
#define NAME_t0151OutBlock     "t0151OutBlock"

// ���1                          , occurs
typedef struct _t0151OutBlock1
{
    char    medosu              [  10];    // [string,   10] �Ÿű���                        StartPos 0, Length 10
    char    expcode             [  12];    // [string,   12] �����ȣ                        StartPos 10, Length 12
    char    qty                 [   9];    // [long  ,    9] ����                            StartPos 22, Length 9
    char    price               [   9];    // [long  ,    9] �ܰ�                            StartPos 31, Length 9
    char    amt                 [  18];    // [long  ,   18] �����ݾ�                        StartPos 40, Length 18
    char    fee                 [  18];    // [long  ,   18] ������                          StartPos 58, Length 18
    char    tax                 [  18];    // [long  ,   18] �ŷ���                          StartPos 76, Length 18
    char    argtax              [  18];    // [long  ,   18] ��Ư��                          StartPos 94, Length 18
    char    adjamt              [  18];    // [long  ,   18] ����ݾ�                        StartPos 112, Length 18
    char    middiv              [  20];    // [string,   20] ��ü                            StartPos 130, Length 20
} t0151OutBlock1, *LPt0151OutBlock1;
#define NAME_t0151OutBlock1     "t0151OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t0151_H_
