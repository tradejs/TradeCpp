#ifndef _YFC_H_
#define _YFC_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ������������ü��(YFC) ( attr,block )
#pragma pack( push, 1 )

#define NAME_YFC     "YFC"

// �Է�
typedef struct _YFC_InBlock
{
    char    futcode             [   8];                                      // [string,    8] �����ڵ�                       StartPos 0, Length 8
} YFC_InBlock, *LPYFC_InBlock;
#define NAME_YFC_InBlock     "InBlock"

// ���
typedef struct _YFC_OutBlock
{
    char    ychetime            [   6];    char    _ychetime            ;    // [string,    6] ����ü��ð�                   StartPos 0, Length 6
    char    yeprice             [   6];    char    _yeprice             ;    // [float ,  6.2] ����ü�ᰡ��                   StartPos 7, Length 6
    char    jnilysign           [   1];    char    _jnilysign           ;    // [string,    1] ����ü�ᰡ����������񱸺�     StartPos 14, Length 1
    char    preychange          [   6];    char    _preychange          ;    // [float ,  6.2] ����ü�ᰡ�����������         StartPos 16, Length 6
    char    jnilydrate          [   6];    char    _jnilydrate          ;    // [float ,  6.2] ����ü�ᰡ�������������       StartPos 23, Length 6
    char    futcode             [   8];    char    _futcode             ;    // [string,    8] �����ڵ�                       StartPos 30, Length 8
} YFC_OutBlock, *LPYFC_OutBlock;
#define NAME_YFC_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _YFC_H_
