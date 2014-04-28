#ifndef _SHI_H_
#define _SHI_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��/���Ѱ�����(SHI) ( attr,block )
#pragma pack( push, 1 )

#define NAME_SHI     "SHI"

// �Է�                           
typedef struct _SHI_InBlock
{
    char    updnlmtgubun        [   1];    char    _updnlmtgubun        ;    // [string,    1] ��/���ѱ���                     StartPos 0, Length 1
} SHI_InBlock, *LPSHI_InBlock;
#define NAME_SHI_InBlock     "InBlock"

// ���                           
typedef struct _SHI_OutBlock
{
    char    sijanggubun         [   1];    char    _sijanggubun         ;    // [string,    1] �ŷ���/�ڽ��ڱ���               StartPos 0, Length 1
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                          StartPos 2, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 23, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 32, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 34, Length 8
    char    drate               [   6];    char    _drate               ;    // [float ,  6.2] �����                          StartPos 43, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 50, Length 12
    char    volincrate          [  12];    char    _volincrate          ;    // [float , 12.2] �ŷ�������                      StartPos 63, Length 12
    char    totofferrem         [  12];    char    _totofferrem         ;    // [long  ,   12] �ŵ�ȣ���Ѽ���                  StartPos 76, Length 12
    char    totbidrem           [  12];    char    _totbidrem           ;    // [long  ,   12] �ż�ȣ���Ѽ���                  StartPos 89, Length 12
    char    updnlmtstime        [   6];    char    _updnlmtstime        ;    // [string,    6] ���Ѱ�/���Ѱ��������Խð�       StartPos 102, Length 6
    char    updnlmtdaycnt       [   3];    char    _updnlmtdaycnt       ;    // [long  ,    3] ���Ѱ�/���Ѱ������ϼ�           StartPos 109, Length 3
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϰŷ���                      StartPos 113, Length 12
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 126, Length 6
    char    gwangubun           [   1];    char    _gwangubun           ;    // [string,    1] ��������                        StartPos 133, Length 1
    char    undergubun          [   1];    char    _undergubun          ;    // [string,    1] �̻�޵��                    StartPos 135, Length 1
    char    tgubun              [   1];    char    _tgubun              ;    // [string,    1] �������Ǳ���                    StartPos 137, Length 1
    char    wgubun              [   1];    char    _wgubun              ;    // [string,    1] �켱�ֱ���                      StartPos 139, Length 1
    char    dishonest           [   1];    char    _dishonest           ;    // [string,    1] �Ҽ��Ǳ���                      StartPos 141, Length 1
    char    jkrate              [   1];    char    _jkrate              ;    // [string,    1] ���űݷ�                        StartPos 143, Length 1
} SHI_OutBlock, *LPSHI_OutBlock;
#define NAME_SHI_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _SHI_H_
