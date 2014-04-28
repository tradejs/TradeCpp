#ifndef _t8407_H_
#define _t8407_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// API���ֽĸ�Ƽ���簡��ȸ(t8407) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8407     "t8407"

// �⺻�Է�
typedef struct _t8407InBlock
{
    char    nrec                [   3];    char    _nrec                ;    // [long  ,    3] �Ǽ�                           StartPos 0, Length 3
    char    shcode              [ 300];    char    _shcode              ;    // [string,  300] �����ڵ�                       StartPos 4, Length 300
} t8407InBlock, *LPt8407InBlock;
#define NAME_t8407InBlock     "t8407InBlock"

// ���1, occurs
typedef struct _t8407OutBlock1
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                       StartPos 0, Length 6
    char    hname               [  40];    char    _hname               ;    // [string,   40] �����                         StartPos 7, Length 40
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 48, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 57, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 59, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] �����                         StartPos 68, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                     StartPos 75, Length 12
    char    offerho             [   8];    char    _offerho             ;    // [long  ,    8] �ŵ�ȣ��                       StartPos 88, Length 8
    char    bidho               [   8];    char    _bidho               ;    // [long  ,    8] �ż�ȣ��                       StartPos 97, Length 8
    char    cvolume             [   8];    char    _cvolume             ;    // [long  ,    8] ü�����                       StartPos 106, Length 8
    char    chdegree            [   9];    char    _chdegree            ;    // [float ,  9.2] ü�ᰭ��                       StartPos 115, Length 9
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                           StartPos 125, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                           StartPos 134, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                           StartPos 143, Length 8
    char    value               [  12];    char    _value               ;    // [long  ,   12] �ŷ����(�鸸)                 StartPos 152, Length 12
    char    offerrem            [  12];    char    _offerrem            ;    // [long  ,   12] �켱�ŵ��ܷ�                   StartPos 165, Length 12
    char    bidrem              [  12];    char    _bidrem              ;    // [long  ,   12] �켱�ż��ܷ�                   StartPos 178, Length 12
    char    totofferrem         [  12];    char    _totofferrem         ;    // [long  ,   12] �Ѹŵ��ܷ�                     StartPos 191, Length 12
    char    totbidrem           [  12];    char    _totbidrem           ;    // [long  ,   12] �Ѹż��ܷ�                     StartPos 204, Length 12
    char    jnilclose           [   8];    char    _jnilclose           ;    // [long  ,    8] ��������                       StartPos 217, Length 8
    char    uplmtprice          [   8];    char    _uplmtprice          ;    // [long  ,    8] ���Ѱ�                         StartPos 226, Length 8
    char    dnlmtprice          [   8];    char    _dnlmtprice          ;    // [long  ,    8] ���Ѱ�                         StartPos 235, Length 8
} t8407OutBlock1, *LPt8407OutBlock1;
#define NAME_t8407OutBlock1     "t8407OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8407_H_
