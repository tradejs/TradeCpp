#ifndef _YOC_H_
#define _YOC_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼǿ���ü��(YOC) ( attr,block )
#pragma pack( push, 1 )

#define NAME_YOC     "YOC"

// �Է�
typedef struct _YOC_InBlock
{
    char    optcode             [   8];                                      // [string,    8] �����ڵ�                       StartPos 0, Length 8
} YOC_InBlock, *LPYOC_InBlock;
#define NAME_YOC_InBlock     "InBlock"

// ���
typedef struct _YOC_OutBlock
{
    char    ychetime            [   6];    char    _ychetime            ;    // [string,    6] ����ü��ð�                   StartPos 0, Length 6
    char    yeprice             [   6];    char    _yeprice             ;    // [float ,  6.2] ����ü�ᰡ��                   StartPos 7, Length 6
    char    jnilysign           [   1];    char    _jnilysign           ;    // [string,    1] ����ü�ᰡ����������񱸺�     StartPos 14, Length 1
    char    preychange          [   6];    char    _preychange          ;    // [float ,  6.2] ����ü�ᰡ�����������         StartPos 16, Length 6
    char    jnilydrate          [   6];    char    _jnilydrate          ;    // [float ,  6.2] ����ü�ᰡ�������������       StartPos 23, Length 6
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] �����ڵ�                       StartPos 30, Length 8
} YOC_OutBlock, *LPYOC_OutBlock;
#define NAME_YOC_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _YOC_H_
