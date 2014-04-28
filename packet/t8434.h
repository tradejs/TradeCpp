#ifndef _t8434_H_
#define _t8434_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �����ɼǸ�Ƽ���簡(t8434) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8434     "t8434"

// �⺻�Է�                       
typedef struct _t8434InBlock
{
    char    qrycnt              [   3];    char    _qrycnt              ;    // [long  ,    3] �Ǽ�                            StartPos 0, Length 3
} t8434InBlock, *LPt8434InBlock;
#define NAME_t8434InBlock     "t8434InBlock"

// �⺻�Է�1                      , occurs
typedef struct _t8434InBlock1
{
    char    focode              [   8];    char    _focode              ;    // [string,    8] �����ڵ�                        StartPos 0, Length 8
} t8434InBlock1, *LPt8434InBlock1;
#define NAME_t8434InBlock1     "t8434InBlock1"

// ���1                          , occurs
typedef struct _t8434OutBlock1
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] �ѱ۸�                          StartPos 0, Length 20
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                          StartPos 21, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                    StartPos 28, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���ϴ��                        StartPos 30, Length 6
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                          StartPos 37, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                      StartPos 44, Length 12
    char    checnt              [   8];    char    _checnt              ;    // [long  ,    8] ü��Ǽ�                        StartPos 57, Length 8
    char    focode              [   8];    char    _focode              ;    // [string,    8] �����ڵ�                        StartPos 66, Length 8
} t8434OutBlock1, *LPt8434OutBlock1;
#define NAME_t8434OutBlock1     "t8434OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8434_H_
