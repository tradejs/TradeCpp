#ifndef _H01_H_
#define _H01_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ֹ�������� ( block )
#pragma pack( push, 1 )

#define NAME_H01     "H01"

// �Է�                           
typedef struct _H01_InBlock
{
} H01_InBlock, *LPH01_InBlock;
#define NAME_H01_InBlock     "InBlock"

// ���                           
typedef struct _H01_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] �����Ϸù�ȣ                    StartPos 0, Length 10
    char    accno               [  11];    // [string,   11] ���¹�ȣ                        StartPos 10, Length 11
    char    user                [   8];    // [string,    8] ������ID                        StartPos 21, Length 8
    char    seq                 [  11];    // [long  ,   11] �Ϸù�ȣ                        StartPos 29, Length 11
    char    trcode              [  11];    // [string,   11] trcode                          StartPos 40, Length 11
    char    megrpno             [   2];    // [string,    2] ��Ī�׷��ȣ                    StartPos 51, Length 2
    char    boardid             [   2];    // [string,    2] ����ID                          StartPos 53, Length 2
    char    memberno            [   5];    // [string,    5] ȸ����ȣ                        StartPos 55, Length 5
    char    bpno                [   5];    // [string,    5] ������ȣ                        StartPos 60, Length 5
    char    ordno               [  10];    // [string,   10] �ֹ���ȣ                        StartPos 65, Length 10
    char    orgordno            [  10];    // [string,   10] ���ֹ���ȣ                      StartPos 75, Length 10
    char    expcode             [  12];    // [string,   12] �����ڵ�                        StartPos 85, Length 12
    char    dosugb              [   1];    // [string,    1] �ŵ�������                      StartPos 97, Length 1
    char    mocagb              [   1];    // [string,    1] ������ұ���                    StartPos 98, Length 1
    char    accno1              [  12];    // [string,   12] ���¹�ȣ1                       StartPos 99, Length 12
    char    qty2                [  10];    // [long  ,   10] ȣ������                        StartPos 111, Length 10
    char    price               [  11];    // [float , 11.2] ȣ������                        StartPos 121, Length 11
    char    ordgb               [   1];    // [string,    1] �ֹ�����                        StartPos 132, Length 1
    char    hogagb              [   1];    // [string,    1] ȣ������                        StartPos 133, Length 1
    char    sihogagb            [  11];    // [string,   11] ��������ȣ������                StartPos 134, Length 11
    char    tradid              [   5];    // [string,    5] �ڻ��ֽŰ�ID                  StartPos 145, Length 5
    char    treacode            [   1];    // [string,    1] �ڻ��ָŸŹ��                  StartPos 150, Length 1
    char    askcode             [   2];    // [string,    2] �ŵ������ڵ�                    StartPos 151, Length 2
    char    creditcode          [   2];    // [string,    2] �ſ뱸���ڵ�                    StartPos 153, Length 2
    char    jakigb              [   2];    // [string,    2] ��Ź�ڱⱸ��                    StartPos 155, Length 2
    char    trustnum            [   5];    // [string,    5] ��Ź���ȣ                      StartPos 157, Length 5
    char    ptgb                [   2];    // [string,    2] ���α׷�����                    StartPos 162, Length 2
    char    substonum           [  12];    // [string,   12] ����ֱǰ��¹�ȣ                StartPos 164, Length 12
    char    accgb               [   2];    // [string,    2] ���±����ڵ�                    StartPos 176, Length 2
    char    accmarggb           [   2];    // [string,    2] �������ű��ڵ�                  StartPos 178, Length 2
    char    nationcode          [   3];    // [string,    3] �����ڵ�                        StartPos 180, Length 3
    char    investgb            [   4];    // [string,    4] �����ڱ���                      StartPos 183, Length 4
    char    forecode            [   2];    // [string,    2] �ܱ����ڵ�                      StartPos 187, Length 2
    char    medcode             [   1];    // [string,    1] �ֹ���ü����                    StartPos 189, Length 1
    char    ordid               [  12];    // [string,   12] �ֹ��ĺ��ڹ�ȣ                  StartPos 190, Length 12
    char    macid               [  12];    // [string,   12] MAC�ּ�                         StartPos 202, Length 12
    char    orddate             [   8];    // [string,    8] ȣ������                        StartPos 214, Length 8
    char    rcvtime             [   9];    // [string,    9] ȸ�����ֹ��ð�                  StartPos 222, Length 9
    char    mem_filler          [   7];    // [string,    7] mem_filler                      StartPos 231, Length 7
    char    mem_accno           [  11];    // [string,   11] mem_accno                       StartPos 238, Length 11
    char    mem_filler1         [  42];    // [string,   42] mem_filler1                     StartPos 249, Length 42
    char    ordacpttm           [   9];    // [string,    9] ��Ī�����ð�                    StartPos 291, Length 9
    char    qty                 [  10];    // [long  ,   10] ��������Ҽ���                  StartPos 300, Length 10
    char    autogb              [   1];    // [string,    1] �ڵ���ұ���                    StartPos 310, Length 1
    char    rejcode             [   4];    // [string,    4] �źλ���                        StartPos 311, Length 4
    char    prgordde            [   1];    // [string,    1] ���α׷�ȣ���Ű�                StartPos 315, Length 1
} H01_OutBlock, *LPH01_OutBlock;
#define NAME_H01_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _H01_H_
