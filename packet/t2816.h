#ifndef _t2816_H_
#define _t2816_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// CME�߰����������ں�����(t2816) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t2816     "t2816"

// �⺻�Է�                       
typedef struct _t2816InBlock
{
    char    dummy               [   1];    char    _dummy               ;    // [string,    1] Dummy                           StartPos 0, Length 1
} t2816InBlock, *LPt2816InBlock;
#define NAME_t2816InBlock     "t2816InBlock"

// �⺻���1                      
typedef struct _t2816OutBlock1
{
    char    tjjcode_08          [   4];    char    _tjjcode_08          ;    // [string,    4] �����������ڵ�                  StartPos 0, Length 4
    char    ms_08               [  12];    char    _ms_08               ;    // [long  ,   12] ���θż�                        StartPos 5, Length 12
    char    md_08               [  12];    char    _md_08               ;    // [long  ,   12] ���θŵ�                        StartPos 18, Length 12
    char    rate_08             [  12];    char    _rate_08             ;    // [long  ,   12] ��������                        StartPos 31, Length 12
    char    svolume_08          [  12];    char    _svolume_08          ;    // [long  ,   12] ���μ��ż�                      StartPos 44, Length 12
    char    tjjcode_17          [   4];    char    _tjjcode_17          ;    // [string,    4] �ܱ����������ڵ�                StartPos 57, Length 4
    char    ms_17               [  12];    char    _ms_17               ;    // [long  ,   12] �ܱ��θż�                      StartPos 62, Length 12
    char    md_17               [  12];    char    _md_17               ;    // [long  ,   12] �ܱ��θŵ�                      StartPos 75, Length 12
    char    rate_17             [  12];    char    _rate_17             ;    // [long  ,   12] �ܱ�������                      StartPos 88, Length 12
    char    svolume_17          [  12];    char    _svolume_17          ;    // [long  ,   12] �ܱ��μ��ż�                    StartPos 101, Length 12
    char    tjjcode_18          [   4];    char    _tjjcode_18          ;    // [string,    4] ������������ڵ�                StartPos 114, Length 4
    char    ms_18               [  12];    char    _ms_18               ;    // [long  ,   12] �����ż�                      StartPos 119, Length 12
    char    md_18               [  12];    char    _md_18               ;    // [long  ,   12] �����ŵ�                      StartPos 132, Length 12
    char    rate_18             [  12];    char    _rate_18             ;    // [long  ,   12] ���������                      StartPos 145, Length 12
    char    svolume_18          [  12];    char    _svolume_18          ;    // [long  ,   12] �������ż�                    StartPos 158, Length 12
    char    tjjcode_01          [   4];    char    _tjjcode_01          ;    // [string,    4] �����������ڵ�                  StartPos 171, Length 4
    char    ms_01               [  12];    char    _ms_01               ;    // [long  ,   12] ���Ǹż�                        StartPos 176, Length 12
    char    md_01               [  12];    char    _md_01               ;    // [long  ,   12] ���Ǹŵ�                        StartPos 189, Length 12
    char    rate_01             [  12];    char    _rate_01             ;    // [long  ,   12] ��������                        StartPos 202, Length 12
    char    svolume_01          [  12];    char    _svolume_01          ;    // [long  ,   12] ���Ǽ��ż�                      StartPos 215, Length 12
    char    tjjcode_03          [   4];    char    _tjjcode_03          ;    // [string,    4] �����������ڵ�                  StartPos 228, Length 4
    char    ms_03               [  12];    char    _ms_03               ;    // [long  ,   12] ���Ÿż�                        StartPos 233, Length 12
    char    md_03               [  12];    char    _md_03               ;    // [long  ,   12] ���Ÿŵ�                        StartPos 246, Length 12
    char    rate_03             [  12];    char    _rate_03             ;    // [long  ,   12] ��������                        StartPos 259, Length 12
    char    svolume_03          [  12];    char    _svolume_03          ;    // [long  ,   12] ���ż��ż�                      StartPos 272, Length 12
    char    tjjcode_04          [   4];    char    _tjjcode_04          ;    // [string,    4] �����������ڵ�                  StartPos 285, Length 4
    char    ms_04               [  12];    char    _ms_04               ;    // [long  ,   12] ����ż�                        StartPos 290, Length 12
    char    md_04               [  12];    char    _md_04               ;    // [long  ,   12] ����ŵ�                        StartPos 303, Length 12
    char    rate_04             [  12];    char    _rate_04             ;    // [long  ,   12] ��������                        StartPos 316, Length 12
    char    svolume_04          [  12];    char    _svolume_04          ;    // [long  ,   12] ������ż�                      StartPos 329, Length 12
    char    tjjcode_02          [   4];    char    _tjjcode_02          ;    // [string,    4] �����������ڵ�                  StartPos 342, Length 4
    char    ms_02               [  12];    char    _ms_02               ;    // [long  ,   12] ����ż�                        StartPos 347, Length 12
    char    md_02               [  12];    char    _md_02               ;    // [long  ,   12] ����ŵ�                        StartPos 360, Length 12
    char    rate_02             [  12];    char    _rate_02             ;    // [long  ,   12] ��������                        StartPos 373, Length 12
    char    svolume_02          [  12];    char    _svolume_02          ;    // [long  ,   12] ������ż�                      StartPos 386, Length 12
    char    tjjcode_05          [   4];    char    _tjjcode_05          ;    // [string,    4] �����������ڵ�                  StartPos 399, Length 4
    char    ms_05               [  12];    char    _ms_05               ;    // [long  ,   12] ���ݸż�                        StartPos 404, Length 12
    char    md_05               [  12];    char    _md_05               ;    // [long  ,   12] ���ݸŵ�                        StartPos 417, Length 12
    char    rate_05             [  12];    char    _rate_05             ;    // [long  ,   12] ��������                        StartPos 430, Length 12
    char    svolume_05          [  12];    char    _svolume_05          ;    // [long  ,   12] ���ݼ��ż�                      StartPos 443, Length 12
    char    tjjcode_06          [   4];    char    _tjjcode_06          ;    // [string,    4] ����������ڵ�                  StartPos 456, Length 4
    char    ms_06               [  12];    char    _ms_06               ;    // [long  ,   12] ��ݸż�                        StartPos 461, Length 12
    char    md_06               [  12];    char    _md_06               ;    // [long  ,   12] ��ݸŵ�                        StartPos 474, Length 12
    char    rate_06             [  12];    char    _rate_06             ;    // [long  ,   12] �������                        StartPos 487, Length 12
    char    svolume_06          [  12];    char    _svolume_06          ;    // [long  ,   12] ��ݼ��ż�                      StartPos 500, Length 12
    char    tjjcode_11          [   4];    char    _tjjcode_11          ;    // [string,    4] ���������ڵ�                    StartPos 513, Length 4
    char    ms_11               [  12];    char    _ms_11               ;    // [long  ,   12] �����ż�                        StartPos 518, Length 12
    char    md_11               [  12];    char    _md_11               ;    // [long  ,   12] �����ŵ�                        StartPos 531, Length 12
    char    rate_11             [  12];    char    _rate_11             ;    // [long  ,   12] ��������                        StartPos 544, Length 12
    char    svolume_11          [  12];    char    _svolume_11          ;    // [long  ,   12] �������ż�                      StartPos 557, Length 12
    char    tjjcode_07          [   4];    char    _tjjcode_07          ;    // [string,    4] ��Ÿ�������ڵ�                  StartPos 570, Length 4
    char    ms_07               [  12];    char    _ms_07               ;    // [long  ,   12] ��Ÿ�ż�                        StartPos 575, Length 12
    char    md_07               [  12];    char    _md_07               ;    // [long  ,   12] ��Ÿ�ŵ�                        StartPos 588, Length 12
    char    rate_07             [  12];    char    _rate_07             ;    // [long  ,   12] ��Ÿ����                        StartPos 601, Length 12
    char    svolume_07          [  12];    char    _svolume_07          ;    // [long  ,   12] ��Ÿ���ż�                      StartPos 614, Length 12
    char    tjjcode_00          [   4];    char    _tjjcode_00          ;    // [string,    4] ����ݵ��������ڵ�              StartPos 627, Length 4
    char    ms_00               [  12];    char    _ms_00               ;    // [long  ,   12] ����ݵ�ż�                    StartPos 632, Length 12
    char    md_00               [  12];    char    _md_00               ;    // [long  ,   12] ����ݵ�ŵ�                    StartPos 645, Length 12
    char    rate_00             [  12];    char    _rate_00             ;    // [long  ,   12] ����ݵ�����                    StartPos 658, Length 12
    char    svolume_00          [  12];    char    _svolume_00          ;    // [long  ,   12] ����ݵ���ż�                  StartPos 671, Length 12
} t2816OutBlock1, *LPt2816OutBlock1;
#define NAME_t2816OutBlock1     "t2816OutBlock1"

// �⺻���2                      
typedef struct _t2816OutBlock2
{
    char    tjjcode_08          [   4];    char    _tjjcode_08          ;    // [string,    4] �����������ڵ�                  StartPos 0, Length 4
    char    ms_08               [  12];    char    _ms_08               ;    // [long  ,   12] ���θż�                        StartPos 5, Length 12
    char    md_08               [  12];    char    _md_08               ;    // [long  ,   12] ���θŵ�                        StartPos 18, Length 12
    char    rate_08             [  12];    char    _rate_08             ;    // [long  ,   12] ��������                        StartPos 31, Length 12
    char    svolume_08          [  12];    char    _svolume_08          ;    // [long  ,   12] ���μ��ż�                      StartPos 44, Length 12
    char    tjjcode_17          [   4];    char    _tjjcode_17          ;    // [string,    4] �ܱ����������ڵ�                StartPos 57, Length 4
    char    ms_17               [  12];    char    _ms_17               ;    // [long  ,   12] �ܱ��θż�                      StartPos 62, Length 12
    char    md_17               [  12];    char    _md_17               ;    // [long  ,   12] �ܱ��θŵ�                      StartPos 75, Length 12
    char    rate_17             [  12];    char    _rate_17             ;    // [long  ,   12] �ܱ�������                      StartPos 88, Length 12
    char    svolume_17          [  12];    char    _svolume_17          ;    // [long  ,   12] �ܱ��μ��ż�                    StartPos 101, Length 12
    char    tjjcode_18          [   4];    char    _tjjcode_18          ;    // [string,    4] ������������ڵ�                StartPos 114, Length 4
    char    ms_18               [  12];    char    _ms_18               ;    // [long  ,   12] �����ż�                      StartPos 119, Length 12
    char    md_18               [  12];    char    _md_18               ;    // [long  ,   12] �����ŵ�                      StartPos 132, Length 12
    char    rate_18             [  12];    char    _rate_18             ;    // [long  ,   12] ���������                      StartPos 145, Length 12
    char    svolume_18          [  12];    char    _svolume_18          ;    // [long  ,   12] �������ż�                    StartPos 158, Length 12
    char    tjjcode_01          [   4];    char    _tjjcode_01          ;    // [string,    4] �����������ڵ�                  StartPos 171, Length 4
    char    ms_01               [  12];    char    _ms_01               ;    // [long  ,   12] ���Ǹż�                        StartPos 176, Length 12
    char    md_01               [  12];    char    _md_01               ;    // [long  ,   12] ���Ǹŵ�                        StartPos 189, Length 12
    char    rate_01             [  12];    char    _rate_01             ;    // [long  ,   12] ��������                        StartPos 202, Length 12
    char    svolume_01          [  12];    char    _svolume_01          ;    // [long  ,   12] ���Ǽ��ż�                      StartPos 215, Length 12
    char    tjjcode_03          [   4];    char    _tjjcode_03          ;    // [string,    4] �����������ڵ�                  StartPos 228, Length 4
    char    ms_03               [  12];    char    _ms_03               ;    // [long  ,   12] ���Ÿż�                        StartPos 233, Length 12
    char    md_03               [  12];    char    _md_03               ;    // [long  ,   12] ���Ÿŵ�                        StartPos 246, Length 12
    char    rate_03             [  12];    char    _rate_03             ;    // [long  ,   12] ��������                        StartPos 259, Length 12
    char    svolume_03          [  12];    char    _svolume_03          ;    // [long  ,   12] ���ż��ż�                      StartPos 272, Length 12
    char    tjjcode_04          [   4];    char    _tjjcode_04          ;    // [string,    4] �����������ڵ�                  StartPos 285, Length 4
    char    ms_04               [  12];    char    _ms_04               ;    // [long  ,   12] ����ż�                        StartPos 290, Length 12
    char    md_04               [  12];    char    _md_04               ;    // [long  ,   12] ����ŵ�                        StartPos 303, Length 12
    char    rate_04             [  12];    char    _rate_04             ;    // [long  ,   12] ��������                        StartPos 316, Length 12
    char    svolume_04          [  12];    char    _svolume_04          ;    // [long  ,   12] ������ż�                      StartPos 329, Length 12
    char    tjjcode_02          [   4];    char    _tjjcode_02          ;    // [string,    4] �����������ڵ�                  StartPos 342, Length 4
    char    ms_02               [  12];    char    _ms_02               ;    // [long  ,   12] ����ż�                        StartPos 347, Length 12
    char    md_02               [  12];    char    _md_02               ;    // [long  ,   12] ����ŵ�                        StartPos 360, Length 12
    char    rate_02             [  12];    char    _rate_02             ;    // [long  ,   12] ��������                        StartPos 373, Length 12
    char    svolume_02          [  12];    char    _svolume_02          ;    // [long  ,   12] ������ż�                      StartPos 386, Length 12
    char    tjjcode_05          [   4];    char    _tjjcode_05          ;    // [string,    4] �����������ڵ�                  StartPos 399, Length 4
    char    ms_05               [  12];    char    _ms_05               ;    // [long  ,   12] ���ݸż�                        StartPos 404, Length 12
    char    md_05               [  12];    char    _md_05               ;    // [long  ,   12] ���ݸŵ�                        StartPos 417, Length 12
    char    rate_05             [  12];    char    _rate_05             ;    // [long  ,   12] ��������                        StartPos 430, Length 12
    char    svolume_05          [  12];    char    _svolume_05          ;    // [long  ,   12] ���ݼ��ż�                      StartPos 443, Length 12
    char    tjjcode_06          [   4];    char    _tjjcode_06          ;    // [string,    4] ����������ڵ�                  StartPos 456, Length 4
    char    ms_06               [  12];    char    _ms_06               ;    // [long  ,   12] ��ݸż�                        StartPos 461, Length 12
    char    md_06               [  12];    char    _md_06               ;    // [long  ,   12] ��ݸŵ�                        StartPos 474, Length 12
    char    rate_06             [  12];    char    _rate_06             ;    // [long  ,   12] �������                        StartPos 487, Length 12
    char    svolume_06          [  12];    char    _svolume_06          ;    // [long  ,   12] ��ݼ��ż�                      StartPos 500, Length 12
    char    tjjcode_11          [   4];    char    _tjjcode_11          ;    // [string,    4] ���������ڵ�                    StartPos 513, Length 4
    char    ms_11               [  12];    char    _ms_11               ;    // [long  ,   12] �����ż�                        StartPos 518, Length 12
    char    md_11               [  12];    char    _md_11               ;    // [long  ,   12] �����ŵ�                        StartPos 531, Length 12
    char    rate_11             [  12];    char    _rate_11             ;    // [long  ,   12] ��������                        StartPos 544, Length 12
    char    svolume_11          [  12];    char    _svolume_11          ;    // [long  ,   12] �������ż�                      StartPos 557, Length 12
    char    tjjcode_07          [   4];    char    _tjjcode_07          ;    // [string,    4] ��Ÿ�������ڵ�                  StartPos 570, Length 4
    char    ms_07               [  12];    char    _ms_07               ;    // [long  ,   12] ��Ÿ�ż�                        StartPos 575, Length 12
    char    md_07               [  12];    char    _md_07               ;    // [long  ,   12] ��Ÿ�ŵ�                        StartPos 588, Length 12
    char    rate_07             [  12];    char    _rate_07             ;    // [long  ,   12] ��Ÿ����                        StartPos 601, Length 12
    char    svolume_07          [  12];    char    _svolume_07          ;    // [long  ,   12] ��Ÿ���ż�                      StartPos 614, Length 12
    char    tjjcode_00          [   4];    char    _tjjcode_00          ;    // [string,    4] ����ݵ��������ڵ�              StartPos 627, Length 4
    char    ms_00               [  12];    char    _ms_00               ;    // [long  ,   12] ����ݵ�ż�                    StartPos 632, Length 12
    char    md_00               [  12];    char    _md_00               ;    // [long  ,   12] ����ݵ�ŵ�                    StartPos 645, Length 12
    char    rate_00             [  12];    char    _rate_00             ;    // [long  ,   12] ����ݵ�����                    StartPos 658, Length 12
    char    svolume_00          [  12];    char    _svolume_00          ;    // [long  ,   12] ����ݵ���ż�                  StartPos 671, Length 12
} t2816OutBlock2, *LPt2816OutBlock2;
#define NAME_t2816OutBlock2     "t2816OutBlock2"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t2816_H_
