#ifndef _t1826_H_
#define _t1826_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ����QŬ���˻�����Ʈ��ȸ(��ť����Ʈ)(t1826) ( block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1826     "t1826"

// �⺻�Է�                       
typedef struct _t1826InBlock
{
    char    search_gb           [   1];    // [string,    1] �˻�����(0:�ٽɰ˻�1:��ǥ�˻�2: StartPos 0, Length 1
} t1826InBlock, *LPt1826InBlock;
#define NAME_t1826InBlock     "t1826InBlock"

// ���                           , occurs
typedef struct _t1826OutBlock
{
    char    search_cd           [   4];    // [string,    4] �˻��ڵ�                        StartPos 0, Length 4
    char    search_nm           [  40];    // [string,   40] �˻���                          StartPos 4, Length 40
} t1826OutBlock, *LPt1826OutBlock;
#define NAME_t1826OutBlock     "t1826OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1826_H_
