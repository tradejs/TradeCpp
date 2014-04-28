#ifndef _t2541_H_
#define _t2541_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ��ǰ���������ڸŸŵ���(�ǽð�)(t2541) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t2541     "t2541"

// �⺻�Է�                       
typedef struct _t2541InBlock
{
    char    eitem               [   2];    char    _eitem               ;    // [string,    2] ��ǰID                          StartPos 0, Length 2
    char    market              [   1];    char    _market              ;    // [string,    1] ���屸��                        StartPos 3, Length 1
    char    upcode              [   3];    char    _upcode              ;    // [string,    3] �����ڵ�                        StartPos 5, Length 3
    char    gubun1              [   1];    char    _gubun1              ;    // [string,    1] ��������                        StartPos 9, Length 1
    char    gubun2              [   1];    char    _gubun2              ;    // [string,    1] ���Ϻб���                      StartPos 11, Length 1
    char    cts_time            [   8];    char    _cts_time            ;    // [string,    8] CTSTIME                         StartPos 13, Length 8
    char    cts_idx             [   4];    char    _cts_idx             ;    // [long  ,    4] CTSIDX                          StartPos 22, Length 4
    char    cnt                 [   4];    char    _cnt                 ;    // [string,    4] ��ȸ�Ǽ�                        StartPos 27, Length 4
} t2541InBlock, *LPt2541InBlock;
#define NAME_t2541InBlock     "t2541InBlock"

// �⺻���                       
typedef struct _t2541OutBlock
{
    char    eitem               [   2];    char    _eitem               ;    // [string,    2] ��ǰID                          StartPos 0, Length 2
    char    sgubun              [   1];    char    _sgubun              ;    // [string,    1] ���屸��                        StartPos 3, Length 1
    char    cts_time            [   8];    char    _cts_time            ;    // [string,    8] CTSTIME                         StartPos 5, Length 8
    char    tjjcode_08          [   4];    char    _tjjcode_08          ;    // [string,    4] �����������ڵ�                  StartPos 14, Length 4
    char    ms_08               [  12];    char    _ms_08               ;    // [long  ,   12] ���θż�                        StartPos 19, Length 12
    char    md_08               [  12];    char    _md_08               ;    // [long  ,   12] ���θŵ�                        StartPos 32, Length 12
    char    rate_08             [  12];    char    _rate_08             ;    // [long  ,   12] ��������                        StartPos 45, Length 12
    char    svolume_08          [  12];    char    _svolume_08          ;    // [long  ,   12] ���μ��ż�                      StartPos 58, Length 12
    char    tjjcode_17          [   4];    char    _tjjcode_17          ;    // [string,    4] �ܱ����������ڵ�                StartPos 71, Length 4
    char    ms_17               [  12];    char    _ms_17               ;    // [long  ,   12] �ܱ��θż�                      StartPos 76, Length 12
    char    md_17               [  12];    char    _md_17               ;    // [long  ,   12] �ܱ��θŵ�                      StartPos 89, Length 12
    char    rate_17             [  12];    char    _rate_17             ;    // [long  ,   12] �ܱ�������                      StartPos 102, Length 12
    char    svolume_17          [  12];    char    _svolume_17          ;    // [long  ,   12] �ܱ��μ��ż�                    StartPos 115, Length 12
    char    tjjcode_18          [   4];    char    _tjjcode_18          ;    // [string,    4] ������������ڵ�                StartPos 128, Length 4
    char    ms_18               [  12];    char    _ms_18               ;    // [long  ,   12] �����ż�                      StartPos 133, Length 12
    char    md_18               [  12];    char    _md_18               ;    // [long  ,   12] �����ŵ�                      StartPos 146, Length 12
    char    rate_18             [  12];    char    _rate_18             ;    // [long  ,   12] ���������                      StartPos 159, Length 12
    char    svolume_18          [  12];    char    _svolume_18          ;    // [long  ,   12] �������ż�                    StartPos 172, Length 12
    char    tjjcode_01          [   4];    char    _tjjcode_01          ;    // [string,    4] �����������ڵ�                  StartPos 185, Length 4
    char    ms_01               [  12];    char    _ms_01               ;    // [long  ,   12] ���Ǹż�                        StartPos 190, Length 12
    char    md_01               [  12];    char    _md_01               ;    // [long  ,   12] ���Ǹŵ�                        StartPos 203, Length 12
    char    rate_01             [  12];    char    _rate_01             ;    // [long  ,   12] ��������                        StartPos 216, Length 12
    char    svolume_01          [  12];    char    _svolume_01          ;    // [long  ,   12] ���Ǽ��ż�                      StartPos 229, Length 12
    char    tjjcode_03          [   4];    char    _tjjcode_03          ;    // [string,    4] �����������ڵ�                  StartPos 242, Length 4
    char    ms_03               [  12];    char    _ms_03               ;    // [long  ,   12] ���Ÿż�                        StartPos 247, Length 12
    char    md_03               [  12];    char    _md_03               ;    // [long  ,   12] ���Ÿŵ�                        StartPos 260, Length 12
    char    rate_03             [  12];    char    _rate_03             ;    // [long  ,   12] ��������                        StartPos 273, Length 12
    char    svolume_03          [  12];    char    _svolume_03          ;    // [long  ,   12] ���ż��ż�                      StartPos 286, Length 12
    char    tjjcode_04          [   4];    char    _tjjcode_04          ;    // [string,    4] �����������ڵ�                  StartPos 299, Length 4
    char    ms_04               [  12];    char    _ms_04               ;    // [long  ,   12] ����ż�                        StartPos 304, Length 12
    char    md_04               [  12];    char    _md_04               ;    // [long  ,   12] ����ŵ�                        StartPos 317, Length 12
    char    rate_04             [  12];    char    _rate_04             ;    // [long  ,   12] ��������                        StartPos 330, Length 12
    char    svolume_04          [  12];    char    _svolume_04          ;    // [long  ,   12] ������ż�                      StartPos 343, Length 12
    char    tjjcode_02          [   4];    char    _tjjcode_02          ;    // [string,    4] �����������ڵ�                  StartPos 356, Length 4
    char    ms_02               [  12];    char    _ms_02               ;    // [long  ,   12] ����ż�                        StartPos 361, Length 12
    char    md_02               [  12];    char    _md_02               ;    // [long  ,   12] ����ŵ�                        StartPos 374, Length 12
    char    rate_02             [  12];    char    _rate_02             ;    // [long  ,   12] ��������                        StartPos 387, Length 12
    char    svolume_02          [  12];    char    _svolume_02          ;    // [long  ,   12] ������ż�                      StartPos 400, Length 12
    char    tjjcode_05          [   4];    char    _tjjcode_05          ;    // [string,    4] �����������ڵ�                  StartPos 413, Length 4
    char    ms_05               [  12];    char    _ms_05               ;    // [long  ,   12] ���ݸż�                        StartPos 418, Length 12
    char    md_05               [  12];    char    _md_05               ;    // [long  ,   12] ���ݸŵ�                        StartPos 431, Length 12
    char    rate_05             [  12];    char    _rate_05             ;    // [long  ,   12] ��������                        StartPos 444, Length 12
    char    svolume_05          [  12];    char    _svolume_05          ;    // [long  ,   12] ���ݼ��ż�                      StartPos 457, Length 12
    char    tjjcode_06          [   4];    char    _tjjcode_06          ;    // [string,    4] ����������ڵ�                  StartPos 470, Length 4
    char    ms_06               [  12];    char    _ms_06               ;    // [long  ,   12] ��ݸż�                        StartPos 475, Length 12
    char    md_06               [  12];    char    _md_06               ;    // [long  ,   12] ��ݸŵ�                        StartPos 488, Length 12
    char    rate_06             [  12];    char    _rate_06             ;    // [long  ,   12] �������                        StartPos 501, Length 12
    char    svolume_06          [  12];    char    _svolume_06          ;    // [long  ,   12] ��ݼ��ż�                      StartPos 514, Length 12
    char    tjjcode_07          [   4];    char    _tjjcode_07          ;    // [string,    4] ��Ÿ�������ڵ�                  StartPos 527, Length 4
    char    ms_07               [  12];    char    _ms_07               ;    // [long  ,   12] ��Ÿ�ż�                        StartPos 532, Length 12
    char    md_07               [  12];    char    _md_07               ;    // [long  ,   12] ��Ÿ�ŵ�                        StartPos 545, Length 12
    char    rate_07             [  12];    char    _rate_07             ;    // [long  ,   12] ��Ÿ����                        StartPos 558, Length 12
    char    svolume_07          [  12];    char    _svolume_07          ;    // [long  ,   12] ��Ÿ���ż�                      StartPos 571, Length 12
    char    tjjcode_11          [   4];    char    _tjjcode_11          ;    // [string,    4] �����������ڵ�                  StartPos 584, Length 4
    char    ms_11               [  12];    char    _ms_11               ;    // [long  ,   12] �����ż�                        StartPos 589, Length 12
    char    md_11               [  12];    char    _md_11               ;    // [long  ,   12] �����ŵ�                        StartPos 602, Length 12
    char    rate_11             [  12];    char    _rate_11             ;    // [long  ,   12] ��������                        StartPos 615, Length 12
    char    svolume_11          [  12];    char    _svolume_11          ;    // [long  ,   12] �������ż�                      StartPos 628, Length 12
    char    tjjcode_00          [   4];    char    _tjjcode_00          ;    // [string,    4] ����ݵ��ڵ�                    StartPos 641, Length 4
    char    ms_00               [  12];    char    _ms_00               ;    // [long  ,   12] ����ݵ�ż�                    StartPos 646, Length 12
    char    md_00               [  12];    char    _md_00               ;    // [long  ,   12] ����ݵ�ŵ�                    StartPos 659, Length 12
    char    rate_00             [  12];    char    _rate_00             ;    // [long  ,   12] ����ݵ�����                    StartPos 672, Length 12
    char    svolume_00          [  12];    char    _svolume_00          ;    // [long  ,   12] ����ݵ���ż�                  StartPos 685, Length 12
} t2541OutBlock, *LPt2541OutBlock;
#define NAME_t2541OutBlock     "t2541OutBlock"

// ���1                          , occurs
typedef struct _t2541OutBlock1
{
    char    time                [   8];    char    _time                ;    // [string,    8] �ð�                            StartPos 0, Length 8
    char    sv_08               [  12];    char    _sv_08               ;    // [long  ,   12] ���μ��ż�                      StartPos 9, Length 12
    char    sv_17               [  12];    char    _sv_17               ;    // [long  ,   12] �ܱ��μ��ż�                    StartPos 22, Length 12
    char    sv_18               [  12];    char    _sv_18               ;    // [long  ,   12] �������ż�                    StartPos 35, Length 12
    char    sv_01               [  12];    char    _sv_01               ;    // [long  ,   12] ���Ǽ��ż�                      StartPos 48, Length 12
    char    sv_03               [  12];    char    _sv_03               ;    // [long  ,   12] ���ż��ż�                      StartPos 61, Length 12
    char    sv_04               [  12];    char    _sv_04               ;    // [long  ,   12] ������ż�                      StartPos 74, Length 12
    char    sv_02               [  12];    char    _sv_02               ;    // [long  ,   12] ������ż�                      StartPos 87, Length 12
    char    sv_05               [  12];    char    _sv_05               ;    // [long  ,   12] ���ݼ��ż�                      StartPos 100, Length 12
    char    sv_06               [  12];    char    _sv_06               ;    // [long  ,   12] ��ݼ��ż�                      StartPos 113, Length 12
    char    sv_07               [  12];    char    _sv_07               ;    // [long  ,   12] ��Ÿ���ż�                      StartPos 126, Length 12
    char    sv_11               [  12];    char    _sv_11               ;    // [long  ,   12] �������ż�                      StartPos 139, Length 12
    char    sv_00               [  12];    char    _sv_00               ;    // [long  ,   12] ����ݵ���ż�                  StartPos 152, Length 12
} t2541OutBlock1, *LPt2541OutBlock1;
#define NAME_t2541OutBlock1     "t2541OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t2541_H_
