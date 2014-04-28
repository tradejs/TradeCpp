#ifndef _t8406_H_
#define _t8406_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ֽļ���ƽ�к�ü����ȸ(API��)(t8406) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8406     "t8406"

// �⺻�Է�
typedef struct _t8406InBlock
{
    char    focode              [   8];    char    _focode              ;    // [string,    8] �����ڵ�                       StartPos 0, Length 8
    char    cgubun              [   1];    char    _cgubun              ;    // [string,    1] íƮ����                       StartPos 9, Length 1
    char    bgubun              [   3];    char    _bgubun              ;    // [string,    3] �б���                         StartPos 11, Length 3
    char    cnt                 [   3];    char    _cnt                 ;    // [string,    3] ��ȸ�Ǽ�                       StartPos 15, Length 3
} t8406InBlock, *LPt8406InBlock;
#define NAME_t8406InBlock     "t8406InBlock"

// ���1, occurs
typedef struct _t8406OutBlock1
{
    char    chetime             [  10];    char    _chetime             ;    // [string,   10] �ð�                           StartPos 0, Length 10
    char    price               [   8];    char    _price               ;    // [long  ,    8] ���簡                         StartPos 11, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 20, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ���ϴ��                       StartPos 22, Length 8
    char    open                [   8];    char    _open                ;    // [long  ,    8] �ð�                           StartPos 31, Length 8
    char    high                [   8];    char    _high                ;    // [long  ,    8] ��                           StartPos 40, Length 8
    char    low                 [   8];    char    _low                 ;    // [long  ,    8] ����                           StartPos 49, Length 8
    char    volume              [  12];    char    _volume              ;    // [double,   12] �ŷ���                         StartPos 58, Length 12
    char    value               [  12];    char    _value               ;    // [double,   12] �ŷ����                       StartPos 71, Length 12
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰����                       StartPos 84, Length 8
    char    openupdn            [   8];    char    _openupdn            ;    // [long  ,    8] �̰�����                       StartPos 93, Length 8
    char    cvolume             [   8];    char    _cvolume             ;    // [long  ,    8] ü�����                       StartPos 102, Length 8
    char    s_mschecnt          [   8];    char    _s_mschecnt          ;    // [long  ,    8] �ż�����ü��Ǽ�               StartPos 111, Length 8
    char    s_mdchecnt          [   8];    char    _s_mdchecnt          ;    // [long  ,    8] �ŵ�����ü��Ǽ�               StartPos 120, Length 8
    char    ss_mschecnt         [   8];    char    _ss_mschecnt         ;    // [long  ,    8] ���ż�����ü��Ǽ�             StartPos 129, Length 8
    char    s_mschevol          [  12];    char    _s_mschevol          ;    // [double,   12] �ż�����ü�ᷮ                 StartPos 138, Length 12
    char    s_mdchevol          [  12];    char    _s_mdchevol          ;    // [double,   12] �ŵ�����ü�ᷮ                 StartPos 151, Length 12
    char    ss_mschevol         [  12];    char    _ss_mschevol         ;    // [double,   12] ���ż�����ü�ᷮ               StartPos 164, Length 12
    char    chdegvol            [   8];    char    _chdegvol            ;    // [float ,  8.2] ü�ᰭ��(�ŷ���)               StartPos 177, Length 8
    char    chdegcnt            [   8];    char    _chdegcnt            ;    // [float ,  8.2] ü�ᰭ��(�Ǽ�)                 StartPos 186, Length 8
} t8406OutBlock1, *LPt8406OutBlock1;
#define NAME_t8406OutBlock1     "t8406OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8406_H_
