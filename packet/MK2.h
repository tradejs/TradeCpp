#ifndef _MK2_H_
#define _MK2_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// US����(MK2) ( attr,block )
#pragma pack( push, 1 )

#define NAME_MK2     "MK2"

// �Է�                           
typedef struct _MK2_InBlock
{
    char    symbol              [  16];    //char    _symbol              ;    // [string,   16] �ɺ��ڵ�                        StartPos 0, Length 16
} MK2_InBlock, *LPMK2_InBlock;
#define NAME_MK2_InBlock     "InBlock"

// ���                           
typedef struct _MK2_OutBlock
{
    char    date                [   8];    char    _date                ;    // [string,    8] ����                            StartPos 0, Length 8
    char    time                [   6];    char    _time                ;    // [string,    6] �ð�                            StartPos 9, Length 6
    char    kodate              [   8];    char    _kodate              ;    // [string,    8] �ѱ�����                        StartPos 16, Length 8
    char    kotime              [   6];    char    _kotime              ;    // [string,    6] �ѱ��ð�                        StartPos 25, Length 6
    char    open                [   9];    char    _open                ;    // [float ,  9.2] �ð�                            StartPos 32, Length 9
    char    high                [   9];    char    _high                ;    // [float ,  9.2] ��                            StartPos 42, Length 9
    char    low                 [   9];    char    _low                 ;    // [float ,  9.2] ����                            StartPos 52, Length 9
    char    price               [   9];    char    _price               ;    // [float ,  9.2] ���簡                          StartPos 62, Length 9
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 72, Length 1
    char    change              [   9];    char    _change              ;    // [float ,  9.2] ���ϴ��                        StartPos 74, Length 9
    char    uprate              [   9];    char    _uprate              ;    // [float ,  9.2] �����                          StartPos 84, Length 9
    char    bidho               [   9];    char    _bidho               ;    // [float ,  9.2] �ż�ȣ��                        StartPos 94, Length 9
    char    bidrem              [   9];    char    _bidrem              ;    // [long  ,    9] �ż��ܷ�                        StartPos 104, Length 9
    char    offerho             [   9];    char    _offerho             ;    // [float ,  9.2] �ŵ�ȣ��                        StartPos 114, Length 9
    char    offerrem            [   9];    char    _offerrem            ;    // [long  ,    9] �ŵ��ܷ�                        StartPos 124, Length 9
    char    volume              [  12];    char    _volume              ;    // [float ,   12] �����ŷ���                      StartPos 134, Length 12
    char    xsymbol             [  16];    char    _xsymbol             ;    // [string,   16] �ɹ�                            StartPos 147, Length 16
    char    cvolume             [   8];    char    _cvolume             ;    // [float ,    8] ü��ŷ���                      StartPos 164, Length 8
} MK2_OutBlock, *LPMK2_OutBlock;
#define NAME_MK2_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _MK2_H_
