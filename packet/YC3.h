#ifndef _YC3_H_
#define _YC3_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��ǰ��������ü��(YC3) ( attr,block )
#pragma pack( push, 1 )

#define NAME_YC3     "YC3"

// �Է�                           
typedef struct _YC3_InBlock
{
    char    shcode              [   8];    //char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
} YC3_InBlock, *LPYC3_InBlock;
#define NAME_YC3_InBlock     "InBlock"

// ���                           
typedef struct _YC3_OutBlock
{
    char    ychetime            [   6];    char    _ychetime            ;    // [string,    6] ����ü��ð�                    StartPos 0, Length 6
    char    yeprice             [   9];    char    _yeprice             ;    // [float ,  9.2] ����ü�ᰡ��                    StartPos 7, Length 9
    char    yevolume            [   6];    char    _yevolume            ;    // [long  ,    6] ����ü�����                    StartPos 17, Length 6
    char    jnilysign           [   1];    char    _jnilysign           ;    // [string,    1] ����ü�ᰡ����������񱸺�      StartPos 24, Length 1
    char    preychange          [   9];    char    _preychange          ;    // [float ,  9.2] ����ü�ᰡ�����������          StartPos 26, Length 9
    char    jnilydrate          [   9];    char    _jnilydrate          ;    // [float ,  9.2] ����ü�ᰡ�������������        StartPos 36, Length 9
    char    shcode              [   8];    char    _shcode              ;    // [string,    8] �����ڵ�                        StartPos 46, Length 8
} YC3_OutBlock, *LPYC3_OutBlock;
#define NAME_YC3_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _YC3_H_
