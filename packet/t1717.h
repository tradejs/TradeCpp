#ifndef _t1717_H_
#define _t1717_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ���α�����񺰵���(t1717) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1717     "t1717"

// �⺻�Է�                       
typedef struct _t1717InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����(0:�ϰ����ż�1:�Ⱓ�������� StartPos 7, Length 1
    char    fromdt              [   8];    char    _fromdt              ;    // [string,    8] ��������(�ϰ���ȸ�ϰ���space) StartPos 9, Length 8
    char    todt                [   8];    char    _todt                ;    // [string,    8] ��������                        StartPos 18, Length 8
} t1717InBlock, *LPt1717InBlock;
#define NAME_t1717InBlock     "t1717InBlock"

// ���                           , occurs
typedef struct _t1717OutBlock
{
    char    date                [   8];    char    _date                ;    // [string,    8] ����                            StartPos 0, Length 8
    char    close               [   8];    char    _close               ;    // [long  ,    8] ����                            StartPos 9, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 18, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                        StartPos 20, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 29, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 36, Length 12
    char    tjj0000_vol         [  12];    char    _tjj0000_vol         ;    // [long  ,   12] ����ݵ�(���ż���)              StartPos 49, Length 12
    char    tjj0001_vol         [  12];    char    _tjj0001_vol         ;    // [long  ,   12] ����(���ż���)                  StartPos 62, Length 12
    char    tjj0002_vol         [  12];    char    _tjj0002_vol         ;    // [long  ,   12] ����(���ż���)                  StartPos 75, Length 12
    char    tjj0003_vol         [  12];    char    _tjj0003_vol         ;    // [long  ,   12] ����(���ż���)                  StartPos 88, Length 12
    char    tjj0004_vol         [  12];    char    _tjj0004_vol         ;    // [long  ,   12] ����(���ż���)                  StartPos 101, Length 12
    char    tjj0005_vol         [  12];    char    _tjj0005_vol         ;    // [long  ,   12] ����(���ż���)                  StartPos 114, Length 12
    char    tjj0006_vol         [  12];    char    _tjj0006_vol         ;    // [long  ,   12] ���(���ż���)                  StartPos 127, Length 12
    char    tjj0007_vol         [  12];    char    _tjj0007_vol         ;    // [long  ,   12] ��Ÿ����(���ż���)              StartPos 140, Length 12
    char    tjj0008_vol         [  12];    char    _tjj0008_vol         ;    // [long  ,   12] ����(���ż���)                  StartPos 153, Length 12
    char    tjj0009_vol         [  12];    char    _tjj0009_vol         ;    // [long  ,   12] ��Ͽܱ���(���ż���)            StartPos 166, Length 12
    char    tjj0010_vol         [  12];    char    _tjj0010_vol         ;    // [long  ,   12] �̵�Ͽܱ���(���ż���)          StartPos 179, Length 12
    char    tjj0011_vol         [  12];    char    _tjj0011_vol         ;    // [long  ,   12] ������(���ż���)                StartPos 192, Length 12
    char    tjj0018_vol         [  12];    char    _tjj0018_vol         ;    // [long  ,   12] ���(���ż���)                  StartPos 205, Length 12
    char    tjj0016_vol         [  12];    char    _tjj0016_vol         ;    // [long  ,   12] ���ΰ�(���ż���)(���+�̵��)   StartPos 218, Length 12
    char    tjj0017_vol         [  12];    char    _tjj0017_vol         ;    // [long  ,   12] ��Ÿ��(���ż���)(��Ÿ+����)     StartPos 231, Length 12
    char    tjj0000_dan         [  12];    char    _tjj0000_dan         ;    // [long  ,   12] ����ݵ�(�ܰ�)                  StartPos 244, Length 12
    char    tjj0001_dan         [  12];    char    _tjj0001_dan         ;    // [long  ,   12] ����(�ܰ�)                      StartPos 257, Length 12
    char    tjj0002_dan         [  12];    char    _tjj0002_dan         ;    // [long  ,   12] ����(�ܰ�)                      StartPos 270, Length 12
    char    tjj0003_dan         [  12];    char    _tjj0003_dan         ;    // [long  ,   12] ����(�ܰ�)                      StartPos 283, Length 12
    char    tjj0004_dan         [  12];    char    _tjj0004_dan         ;    // [long  ,   12] ����(�ܰ�)                      StartPos 296, Length 12
    char    tjj0005_dan         [  12];    char    _tjj0005_dan         ;    // [long  ,   12] ����(�ܰ�)                      StartPos 309, Length 12
    char    tjj0006_dan         [  12];    char    _tjj0006_dan         ;    // [long  ,   12] ���(�ܰ�)                      StartPos 322, Length 12
    char    tjj0007_dan         [  12];    char    _tjj0007_dan         ;    // [long  ,   12] ��Ÿ����(�ܰ�)                  StartPos 335, Length 12
    char    tjj0008_dan         [  12];    char    _tjj0008_dan         ;    // [long  ,   12] ����(�ܰ�)                      StartPos 348, Length 12
    char    tjj0009_dan         [  12];    char    _tjj0009_dan         ;    // [long  ,   12] ��Ͽܱ���(�ܰ�)                StartPos 361, Length 12
    char    tjj0010_dan         [  12];    char    _tjj0010_dan         ;    // [long  ,   12] �̵�Ͽܱ���(�ܰ�)              StartPos 374, Length 12
    char    tjj0011_dan         [  12];    char    _tjj0011_dan         ;    // [long  ,   12] ������(�ܰ�)                    StartPos 387, Length 12
    char    tjj0018_dan         [  12];    char    _tjj0018_dan         ;    // [long  ,   12] ���(�ܰ�)                      StartPos 400, Length 12
    char    tjj0016_dan         [  12];    char    _tjj0016_dan         ;    // [long  ,   12] ���ΰ�(�ܰ�)(���+�̵��)       StartPos 413, Length 12
    char    tjj0017_dan         [  12];    char    _tjj0017_dan         ;    // [long  ,   12] ��Ÿ��(�ܰ�)(��Ÿ+����)         StartPos 426, Length 12
} t1717OutBlock, *LPt1717OutBlock;
#define NAME_t1717OutBlock     "t1717OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1717_H_
