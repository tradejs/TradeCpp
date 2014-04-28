#ifndef _CM0_H_
#define _CM0_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// CME�ֹ����� ( block )
#pragma pack( push, 1 )

#define NAME_CM0     "CM0"

// �Է�
typedef struct _CM0_InBlock
{
} CM0_InBlock, *LPCM0_InBlock;
#define NAME_CM0_InBlock     "InBlock"

// ���
typedef struct _CM0_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] �����Ϸù�ȣ                   StartPos 0, Length 10
    char    accno               [  11];    // [string,   11] ���¹�ȣ                       StartPos 10, Length 11
    char    user                [   8];    // [string,    8] ������ID                       StartPos 21, Length 8
    char    len                 [   6];    // [long  ,    6] �������                       StartPos 29, Length 6
    char    gubun               [   1];    // [string,    1] �������                       StartPos 35, Length 1
    char    compress            [   1];    // [string,    1] ���౸��                       StartPos 36, Length 1
    char    encrypt             [   1];    // [string,    1] ��ȣ����                       StartPos 37, Length 1
    char    offset              [   3];    // [long  ,    3] �����������                   StartPos 38, Length 3
    char    trcode              [   8];    // [string,    8] TRCODE                         StartPos 41, Length 8
    char    compid              [   3];    // [string,    3] �̿���ȣ                     StartPos 49, Length 3
    char    userid              [  16];    // [string,   16] �����ID                       StartPos 52, Length 16
    char    media               [   2];    // [string,    2] ���Ӹ�ü                       StartPos 68, Length 2
    char    ifid                [   3];    // [string,    3] I/F�Ϸù�ȣ                    StartPos 70, Length 3
    char    seq                 [   9];    // [string,    9] �����Ϸù�ȣ                   StartPos 73, Length 9
    char    trid                [  16];    // [string,   16] TR����ID                       StartPos 82, Length 16
    char    pubip               [  12];    // [string,   12] ����IP                         StartPos 98, Length 12
    char    prvip               [  12];    // [string,   12] �缳IP                         StartPos 110, Length 12
    char    pcbpno              [   3];    // [string,    3] ó��������ȣ                   StartPos 122, Length 3
    char    bpno                [   3];    // [string,    3] ������ȣ                       StartPos 125, Length 3
    char    termno              [   8];    // [string,    8] �ܸ���ȣ                       StartPos 128, Length 8
    char    lang                [   1];    // [string,    1] ����                       StartPos 136, Length 1
    char    proctm              [   9];    // [long  ,    9] APó���ð�                     StartPos 137, Length 9
    char    msgcode             [   4];    // [string,    4] �޼����ڵ�                     StartPos 146, Length 4
    char    outgu               [   1];    // [string,    1] �޼�����±���                 StartPos 150, Length 1
    char    compreq             [   1];    // [string,    1] �����û����                   StartPos 151, Length 1
    char    funckey             [   4];    // [string,    4] ���Ű                         StartPos 152, Length 4
    char    reqcnt              [   4];    // [long  ,    4] ��û���ڵ尳��                 StartPos 156, Length 4
    char    filler              [   6];    // [string,    6] ���񿵿�                       StartPos 160, Length 6
    char    cont                [   1];    // [string,    1] ���ӱ���                       StartPos 166, Length 1
    char    contkey             [  18];    // [string,   18] ����Ű��                       StartPos 167, Length 18
    char    varlen              [   2];    // [long  ,    2] �����ý��۱���                 StartPos 185, Length 2
    char    varhdlen            [   2];    // [long  ,    2] �����ش�����                   StartPos 187, Length 2
    char    varmsglen           [   2];    // [long  ,    2] �����޽�������                 StartPos 189, Length 2
    char    trsrc               [   1];    // [string,    1] ��ȸ�߿���                     StartPos 191, Length 1
    char    eventid             [   4];    // [string,    4] I/F�̺�ƮID                    StartPos 192, Length 4
    char    ifinfo              [   4];    // [string,    4] I/F����                        StartPos 196, Length 4
    char    filler1             [  41];    // [string,   41] ���񿵿�                       StartPos 200, Length 41
    char    trcode1             [   4];    // [string,    4] tr�ڵ�                         StartPos 241, Length 4
    char    firmno              [   3];    // [string,    3] ȸ���ȣ                       StartPos 245, Length 3
    char    acntno              [  11];    // [string,   11] ���¹�ȣ                       StartPos 248, Length 11
    char    acntno1             [   9];    // [string,    9] ���¹�ȣ                       StartPos 259, Length 9
    char    acntnm              [  40];    // [string,   40] ���¸�                         StartPos 268, Length 40
    char    brnno               [   3];    // [string,    3] ������ȣ                       StartPos 308, Length 3
    char    ordmktcode          [   2];    // [string,    2] �ֹ������ڵ�                   StartPos 311, Length 2
    char    ordno1              [   3];    // [string,    3] �ֹ���ȣ                       StartPos 313, Length 3
    char    ordno               [   7];    // [long  ,    7] �ֹ���ȣ                       StartPos 316, Length 7
    char    orgordno1           [   3];    // [string,    3] ���ֹ���ȣ                     StartPos 323, Length 3
    char    orgordno            [   7];    // [long  ,    7] ���ֹ���ȣ                     StartPos 326, Length 7
    char    prntordno           [   3];    // [string,    3] ���ֹ���ȣ                     StartPos 333, Length 3
    char    prntordno1          [   7];    // [long  ,    7] ���ֹ���ȣ                     StartPos 336, Length 7
    char    isuno               [  12];    // [string,   12] �����ȣ                       StartPos 343, Length 12
    char    fnoIsuno            [   8];    // [string,    8] �����ɼ������ȣ               StartPos 355, Length 8
    char    fnoIsunm            [  40];    // [string,   40] �����ɼ������                 StartPos 363, Length 40
    char    pdgrpcode           [   2];    // [string,    2] ��ǰ���з��ڵ�                 StartPos 403, Length 2
    char    fnoIsuptntp         [   1];    // [string,    1] �����ɼ�������������           StartPos 405, Length 1
    char    bnstp               [   1];    // [string,    1] �Ÿű���                       StartPos 406, Length 1
    char    mrctp               [   1];    // [string,    1] ������ұ���                   StartPos 407, Length 1
    char    ordqty              [  16];    // [long  ,   16] �ֹ�����                       StartPos 408, Length 16
    char    hogatype            [   2];    // [string,    2] ȣ�������ڵ�                   StartPos 424, Length 2
    char    mmgb                [   2];    // [string,    2] �ŷ������ڵ�                   StartPos 426, Length 2
    char    ordprc              [  13];    // [double, 13.2] �ֹ�����                       StartPos 428, Length 13
    char    unercqty            [  16];    // [long  ,   16] ��ü�����                     StartPos 441, Length 16
    char    commdacode          [   2];    // [string,    2] ��Ÿ�ü                       StartPos 457, Length 2
    char    peeamtcode          [   2];    // [string,    2] �������ջ��ڵ�                 StartPos 459, Length 2
    char    mgempno             [   9];    // [string,    9] �������                       StartPos 461, Length 9
    char    fnotrdunitamt       [  19];    // [double, 19.8] �����ɼǰŷ������ݾ�           StartPos 470, Length 19
    char    trxtime             [   9];    // [string,    9] ó���ð�                       StartPos 489, Length 9
    char    strtgcode           [   6];    // [string,    6] �����ڵ�                       StartPos 498, Length 6
    char    grpId               [  20];    // [string,   20] �׷�Id                         StartPos 504, Length 20
    char    ordseqno            [  10];    // [string,   10] �ֹ�ȸ��                       StartPos 524, Length 10
    char    ptflno              [  10];    // [string,   10] ��Ʈ������ ��ȣ                StartPos 534, Length 10
    char    bskno               [  10];    // [string,   10] �ٽ��Ϲ�ȣ                     StartPos 544, Length 10
    char    trchno              [  10];    // [string,   10] Ʈ��ġ��ȣ                     StartPos 554, Length 10
    char    Itemno              [  10];    // [string,   10] �����۹�ȣ                     StartPos 564, Length 10
    char    userId              [  16];    // [string,   16] �ֹ���Id                       StartPos 574, Length 16
    char    opdrtnno            [  12];    // [string,   12] ����ù�ȣ                   StartPos 590, Length 12
    char    rjtcode             [   4];    // [string,    4] �������ڵ�                     StartPos 602, Length 4
    char    mrccnfqty           [  16];    // [long  ,   16] �������Ȯ�μ���               StartPos 606, Length 16
    char    orgordunercqty      [  16];    // [long  ,   16] ���ֹ���ü�����               StartPos 622, Length 16
    char    orgordmrcqty        [  16];    // [long  ,   16] ���ֹ�������Ҽ���             StartPos 638, Length 16
    char    ctrcttime           [   8];    // [string,    8] �����ð�(ü��ð�)             StartPos 654, Length 8
    char    ctrctno             [  10];    // [string,   10] ������ȣ                       StartPos 662, Length 10
    char    execprc             [  13];    // [double, 13.2] ü�ᰡ��                       StartPos 672, Length 13
    char    execqty             [  16];    // [long  ,   16] ü�����                       StartPos 685, Length 16
    char    newqty              [  16];    // [long  ,   16] �ű�ü�����                   StartPos 701, Length 16
    char    qdtqty              [  16];    // [long  ,   16] û��ü�����                   StartPos 717, Length 16
    char    lastqty             [  16];    // [long  ,   16] ������������                   StartPos 733, Length 16
    char    lallexecqty         [  16];    // [long  ,   16] ��üü�����                   StartPos 749, Length 16
    char    allexecamt          [  16];    // [long  ,   16] ��üü��ݾ�                   StartPos 765, Length 16
    char    fnobalevaltp        [   1];    // [string,    1] �ܰ��򰡱���                   StartPos 781, Length 1
    char    bnsplamt            [  16];    // [long  ,   16] �Ÿż��ͱݾ�                   StartPos 782, Length 16
    char    fnoIsuno1           [   8];    // [string,    8] �����ɼ������ȣ1              StartPos 798, Length 8
    char    bnstp1              [   1];    // [string,    1] �Ÿű���1                      StartPos 806, Length 1
    char    execprc1            [  13];    // [double, 13.2] ü�ᰡ1                        StartPos 807, Length 13
    char    newqty1             [  16];    // [long  ,   16] �ű�ü�����1                  StartPos 820, Length 16
    char    qdtqty1             [  16];    // [long  ,   16] û��ü�����1                  StartPos 836, Length 16
    char    allexecamt1         [  16];    // [long  ,   16] ��üü��ݾ�1                  StartPos 852, Length 16
    char    fnoIsuno2           [   8];    // [string,    8] �����ɼ������ȣ2              StartPos 868, Length 8
    char    bnstp2              [   1];    // [string,    1] �Ÿű���2                      StartPos 876, Length 1
    char    execprc2            [  13];    // [double, 13.2] ü�ᰡ2                        StartPos 877, Length 13
    char    newqty2             [  16];    // [long  ,   16] �ű�ü�����2                  StartPos 890, Length 16
    char    lqdtqty2            [  16];    // [long  ,   16] û��ü�����2                  StartPos 906, Length 16
    char    allexecamt2         [  16];    // [long  ,   16] ��üü��ݾ�2                  StartPos 922, Length 16
    char    dps                 [  16];    // [long  ,   16] ������                         StartPos 938, Length 16
    char    ftsubtdsgnamt       [  16];    // [long  ,   16] ������������ݾ�               StartPos 954, Length 16
    char    mgn                 [  16];    // [long  ,   16] ���ű�                         StartPos 970, Length 16
    char    mnymgn              [  16];    // [long  ,   16] ���ű�����                     StartPos 986, Length 16
    char    ordableamt          [  16];    // [long  ,   16] �ֹ����ɱݾ�                   StartPos 1002, Length 16
    char    mnyordableamt       [  16];    // [long  ,   16] �ֹ��������ݾ�                 StartPos 1018, Length 16
    char    fnoIsuno_1          [   8];    // [string,    8] �ܰ� �����ȣ1                 StartPos 1034, Length 8
    char    bnstp_1             [   1];    // [string,    1] �ܰ� �Ÿű���1                 StartPos 1042, Length 1
    char    unsttqty_1          [  16];    // [long  ,   16] �̰�������1                    StartPos 1043, Length 16
    char    lqdtableqty_1       [  16];    // [long  ,   16] �ֹ����ɼ���1                  StartPos 1059, Length 16
    char    avrprc_1            [  13];    // [double, 13.2] ��հ�1                        StartPos 1075, Length 13
    char    fnoIsuno_2          [   8];    // [string,    8] �ܰ� �����ȣ2                 StartPos 1088, Length 8
    char    bnstp_2             [   1];    // [string,    1] �ܰ� �Ÿű���2                 StartPos 1096, Length 1
    char    unsttqty_2          [  16];    // [long  ,   16] �̰�������2                    StartPos 1097, Length 16
    char    lqdtableqty_2       [  16];    // [long  ,   16] �ֹ����ɼ���2                  StartPos 1113, Length 16
    char    avrprc_2            [  13];    // [double, 13.2] ��հ�2                        StartPos 1129, Length 13
} CM0_OutBlock, *LPCM0_OutBlock;
#define NAME_CM0_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _CM0_H_
