#ifndef _t2814_H_
#define _t2814_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// CME�߰������Ⱓ�������ڸŸ�����(íƮ) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t2814     "t2814"

// �⺻�Է�                       
typedef struct _t2814InBlock
{
    char    gubun1              [   1];    char    _gubun1              ;    // [string,    1] ��ġ����(1:��ġ2:����)          StartPos 0, Length 1
    char    gubun2              [   1];    char    _gubun2              ;    // [string,    1] ��������(1:��2:��3:��)          StartPos 2, Length 1
    char    from_date           [   8];    char    _from_date           ;    // [string,    8] ���۳�¥                        StartPos 4, Length 8
    char    to_date             [   8];    char    _to_date             ;    // [string,    8] ���ᳯ¥                        StartPos 13, Length 8
} t2814InBlock, *LPt2814InBlock;
#define NAME_t2814InBlock     "t2814InBlock"

// �⺻���                       
typedef struct _t2814OutBlock
{
    char    mcode               [   8];    char    _mcode               ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
    char    mname               [  20];    char    _mname               ;    // [string,   20] �����                          StartPos 9, Length 20
} t2814OutBlock, *LPt2814OutBlock;
#define NAME_t2814OutBlock     "t2814OutBlock"

// ���1                          , occurs
typedef struct _t2814OutBlock1
{
    char    date                [   8];    char    _date                ;    // [string,    8] ����                            StartPos 0, Length 8
    char    sv_08               [  12];    char    _sv_08               ;    // [long  ,   12] ���μ���                        StartPos 9, Length 12
    char    sv_17               [  12];    char    _sv_17               ;    // [long  ,   12] ���ΰ����(���+�̵��)         StartPos 22, Length 12
    char    sv_18               [  12];    char    _sv_18               ;    // [long  ,   12] ��������                      StartPos 35, Length 12
    char    sv_01               [  12];    char    _sv_01               ;    // [long  ,   12] ���Ǽ���                        StartPos 48, Length 12
    char    sv_03               [  12];    char    _sv_03               ;    // [long  ,   12] ���ż���                        StartPos 61, Length 12
    char    sv_04               [  12];    char    _sv_04               ;    // [long  ,   12] �������                        StartPos 74, Length 12
    char    sv_02               [  12];    char    _sv_02               ;    // [long  ,   12] �������                        StartPos 87, Length 12
    char    sv_05               [  12];    char    _sv_05               ;    // [long  ,   12] ���ݼ���                        StartPos 100, Length 12
    char    sv_06               [  12];    char    _sv_06               ;    // [long  ,   12] ��ݼ���                        StartPos 113, Length 12
    char    sv_07               [  12];    char    _sv_07               ;    // [long  ,   12] ��Ÿ����                        StartPos 126, Length 12
    char    sv_00               [  12];    char    _sv_00               ;    // [long  ,   12] ����ݵ����                    StartPos 139, Length 12
    char    sv_09               [  12];    char    _sv_09               ;    // [long  ,   12] ��Ͽܱ��μ���                  StartPos 152, Length 12
    char    sv_10               [  12];    char    _sv_10               ;    // [long  ,   12] �̵�Ͽܱ��μ���                StartPos 165, Length 12
    char    sv_11               [  12];    char    _sv_11               ;    // [long  ,   12] ��������                        StartPos 178, Length 12
    char    sv_99               [  12];    char    _sv_99               ;    // [long  ,   12] ��Ÿ�����(��Ÿ+����)           StartPos 191, Length 12
    char    sa_08               [  12];    char    _sa_08               ;    // [double,   12] ���αݾ�                        StartPos 204, Length 12
    char    sa_17               [  12];    char    _sa_17               ;    // [double,   12] ���ΰ�ݾ�(���+�̵��)         StartPos 217, Length 12
    char    sa_18               [  12];    char    _sa_18               ;    // [double,   12] �����ݾ�                      StartPos 230, Length 12
    char    sa_01               [  12];    char    _sa_01               ;    // [double,   12] ���Ǳݾ�                        StartPos 243, Length 12
    char    sa_03               [  12];    char    _sa_03               ;    // [double,   12] ���űݾ�                        StartPos 256, Length 12
    char    sa_04               [  12];    char    _sa_04               ;    // [double,   12] ����ݾ�                        StartPos 269, Length 12
    char    sa_02               [  12];    char    _sa_02               ;    // [double,   12] ����ݾ�                        StartPos 282, Length 12
    char    sa_05               [  12];    char    _sa_05               ;    // [double,   12] ���ݱݾ�                        StartPos 295, Length 12
    char    sa_06               [  12];    char    _sa_06               ;    // [double,   12] ��ݱݾ�                        StartPos 308, Length 12
    char    sa_07               [  12];    char    _sa_07               ;    // [double,   12] ��Ÿ�ݾ�                        StartPos 321, Length 12
    char    sa_00               [  12];    char    _sa_00               ;    // [double,   12] ����ݵ�ݾ�                    StartPos 334, Length 12
    char    sa_09               [  12];    char    _sa_09               ;    // [double,   12] ��Ͽܱ��αݾ�                  StartPos 347, Length 12
    char    sa_10               [  12];    char    _sa_10               ;    // [double,   12] �̵�Ͽܱ��αݾ�                StartPos 360, Length 12
    char    sa_11               [  12];    char    _sa_11               ;    // [double,   12] �����ݾ�                        StartPos 373, Length 12
    char    sa_99               [  12];    char    _sa_99               ;    // [double,   12] ��Ÿ��ݾ�(��Ÿ+����)           StartPos 386, Length 12
    char    jisu                [   7];    char    _jisu                ;    // [float ,  7.2] ��������                        StartPos 399, Length 7
} t2814OutBlock1, *LPt2814OutBlock1;
#define NAME_t2814OutBlock1     "t2814OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t2814_H_
