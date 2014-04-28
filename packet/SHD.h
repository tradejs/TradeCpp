#ifndef _SHD_H_
#define _SHD_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��/���Ѱ�������Ż(SHD) ( attr,block )
#pragma pack( push, 1 )

#define NAME_SHD     "SHD"

// �Է�                           
typedef struct _SHD_InBlock
{
    char    updnlmtgubun        [   1];    char    _updnlmtgubun        ;    // [string,    1] ��/���ѱ���                     StartPos 0, Length 1
} SHD_InBlock, *LPSHD_InBlock;
#define NAME_SHD_InBlock     "InBlock"

// ���                           
typedef struct _SHD_OutBlock
{
    char    sijanggubun         [   1];    char    _sijanggubun         ;    // [string,    1] �ŷ���/�ڽ��ڱ���               StartPos 0, Length 1
    char    hname               [  20];    char    _hname               ;    // [string,   20] �����                          StartPos 2, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                          StartPos 23, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 32, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 34, Length 8
    char    drate               [   6];    char    _drate               ;    // [float ,  6.2] �����                          StartPos 43, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 50, Length 12
    char    volincrate          [  12];    char    _volincrate          ;    // [float , 12.2] �ŷ�������                      StartPos 63, Length 12
    char    updnlmtprice        [   8];    char    _updnlmtprice        ;    // [long  ,    8] ��/���Ѱ�                       StartPos 76, Length 8
    char    updnlmtdrate        [   6];    char    _updnlmtdrate        ;    // [float ,  6.2] ��/���Ѱ������                 StartPos 85, Length 6
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϰŷ���                      StartPos 92, Length 12
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 105, Length 6
    char    gwangubun           [   1];    char    _gwangubun           ;    // [string,    1] ��������                        StartPos 112, Length 1
    char    undergubun          [   1];    char    _undergubun          ;    // [string,    1] �̻�޵��                    StartPos 114, Length 1
    char    tgubun              [   1];    char    _tgubun              ;    // [string,    1] �������Ǳ���                    StartPos 116, Length 1
    char    wgubun              [   1];    char    _wgubun              ;    // [string,    1] �켱�ֱ���                      StartPos 118, Length 1
    char    dishonest           [   1];    char    _dishonest           ;    // [string,    1] �Ҽ��Ǳ���                      StartPos 120, Length 1
    char    jkrate              [   1];    char    _jkrate              ;    // [string,    1] ���űݷ�                        StartPos 122, Length 1
} SHD_OutBlock, *LPSHD_OutBlock;
#define NAME_SHD_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _SHD_H_
