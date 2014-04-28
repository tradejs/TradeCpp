#ifndef _t1533_H_
#define _t1533_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// Ư���׸�(t1533) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1533     "t1533"

// �⺻�Է�                       
typedef struct _t1533InBlock
{
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] ����                            StartPos 0, Length 1
    char    chgdate             [   2];    char    _chgdate             ;    // [long  ,    2] �������                        StartPos 2, Length 2
} t1533InBlock, *LPt1533InBlock;
#define NAME_t1533InBlock     "t1533InBlock"

// ���                           , occurs
typedef struct _t1533OutBlock
{
    char    tmname              [  36];    char    _tmname              ;    // [string,   36] �׸���                          StartPos 0, Length 36
    char    totcnt              [   4];    char    _totcnt              ;    // [long  ,    4] ��ü                            StartPos 37, Length 4
    char    upcnt               [   4];    char    _upcnt               ;    // [long  ,    4] ���                            StartPos 42, Length 4
    char    dncnt               [   4];    char    _dncnt               ;    // [long  ,    4] �϶�                            StartPos 47, Length 4
    char    uprate              [   6];    char    _uprate              ;    // [float ,  6.2] ��º���                        StartPos 52, Length 6
    char    diff_vol            [  10];    char    _diff_vol            ;    // [float , 10.2] �ŷ�������                      StartPos 59, Length 10
    char    avgdiff             [   6];    char    _avgdiff             ;    // [float ,  6.2] ��յ����                      StartPos 70, Length 6
    char    chgdiff             [   6];    char    _chgdiff             ;    // [float ,  6.2] �������                      StartPos 77, Length 6
    char    tmcode              [   4];    char    _tmcode              ;    // [string,    4] �׸��ڵ�                        StartPos 84, Length 4
} t1533OutBlock, *LPt1533OutBlock;
#define NAME_t1533OutBlock     "t1533OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1533_H_
