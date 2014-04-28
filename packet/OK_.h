#ifndef _OK__H_
#define _OK__H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// KOSDAQ�ǽð��ŷ���(OK) ( attr,block )
#pragma pack( push, 1 )

#define NAME_OK_     "OK_"

// �Է�                           
typedef struct _OK__InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 0, Length 6
} OK__InBlock, *LPOK__InBlock;
#define NAME_OK__InBlock     "InBlock"

// ���                           
typedef struct _OK__OutBlock
{
    char    offerno1            [   3];    char    _offerno1            ;    // [string,    3] �ŵ����ǻ��ڵ�1                 StartPos 0, Length 3
    char    bidno1              [   3];    char    _bidno1              ;    // [string,    3] �ż����ǻ��ڵ�1                 StartPos 4, Length 3
    char    offertrad1          [   6];    char    _offertrad1          ;    // [string,    6] �ŵ�ȸ�����1                   StartPos 8, Length 6
    char    bidtrad1            [   6];    char    _bidtrad1            ;    // [string,    6] �ż�ȸ�����1                   StartPos 15, Length 6
    char    tradmdvol1          [  10];    char    _tradmdvol1          ;    // [long  ,   10] �ŵ��ŷ���1                     StartPos 22, Length 10
    char    tradmsvol1          [  10];    char    _tradmsvol1          ;    // [long  ,   10] �ż��ŷ���1                     StartPos 33, Length 10
    char    tradmdrate1         [   6];    char    _tradmdrate1         ;    // [float ,  6.2] �ŵ��ŷ�������1                 StartPos 44, Length 6
    char    tradmsrate1         [   6];    char    _tradmsrate1         ;    // [float ,  6.2] �ŵ��ŷ�������1                 StartPos 51, Length 6
    char    tradmdcha1          [  10];    char    _tradmdcha1          ;    // [long  ,   10] �ŵ��ŷ����������1             StartPos 58, Length 10
    char    tradmscha1          [  10];    char    _tradmscha1          ;    // [long  ,   10] �ż��ŷ����������1             StartPos 69, Length 10
    char    offerno2            [   3];    char    _offerno2            ;    // [string,    3] �ŵ����ǻ��ڵ�2                 StartPos 80, Length 3
    char    bidno2              [   3];    char    _bidno2              ;    // [string,    3] �ż����ǻ��ڵ�2                 StartPos 84, Length 3
    char    offertrad2          [   6];    char    _offertrad2          ;    // [string,    6] �ŵ�ȸ�����2                   StartPos 88, Length 6
    char    bidtrad2            [   6];    char    _bidtrad2            ;    // [string,    6] �ż�ȸ�����2                   StartPos 95, Length 6
    char    tradmdvol2          [  10];    char    _tradmdvol2          ;    // [long  ,   10] �ŵ��ŷ���2                     StartPos 102, Length 10
    char    tradmsvol2          [  10];    char    _tradmsvol2          ;    // [long  ,   10] �ż��ŷ���2                     StartPos 113, Length 10
    char    tradmdrate2         [   6];    char    _tradmdrate2         ;    // [float ,  6.2] �ŵ��ŷ�������2                 StartPos 124, Length 6
    char    tradmsrate2         [   6];    char    _tradmsrate2         ;    // [float ,  6.2] �ż��ŷ�������2                 StartPos 131, Length 6
    char    tradmdcha2          [  10];    char    _tradmdcha2          ;    // [long  ,   10] �ŵ��ŷ����������2             StartPos 138, Length 10
    char    tradmscha2          [  10];    char    _tradmscha2          ;    // [long  ,   10] �ż��ŷ����������2             StartPos 149, Length 10
    char    offerno3            [   3];    char    _offerno3            ;    // [string,    3] �ŵ����ǻ��ڵ�3                 StartPos 160, Length 3
    char    bidno3              [   3];    char    _bidno3              ;    // [string,    3] �ż����ǻ��ڵ�3                 StartPos 164, Length 3
    char    offertrad3          [   6];    char    _offertrad3          ;    // [string,    6] �ŵ�ȸ�����3                   StartPos 168, Length 6
    char    bidtrad3            [   6];    char    _bidtrad3            ;    // [string,    6] �ż�ȸ�����3                   StartPos 175, Length 6
    char    tradmdvol3          [  10];    char    _tradmdvol3          ;    // [long  ,   10] �ŵ��ŷ���3                     StartPos 182, Length 10
    char    tradmsvol3          [  10];    char    _tradmsvol3          ;    // [long  ,   10] �ż��ŷ���3                     StartPos 193, Length 10
    char    tradmdrate3         [   6];    char    _tradmdrate3         ;    // [float ,  6.2] �ŵ��ŷ�������3                 StartPos 204, Length 6
    char    tradmsrate3         [   6];    char    _tradmsrate3         ;    // [float ,  6.2] �ż��ŷ�������3                 StartPos 211, Length 6
    char    tradmdcha3          [  10];    char    _tradmdcha3          ;    // [long  ,   10] �ŵ��ŷ����������3             StartPos 218, Length 10
    char    tradmscha3          [  10];    char    _tradmscha3          ;    // [long  ,   10] �ż��ŷ����������3             StartPos 229, Length 10
    char    offerno4            [   3];    char    _offerno4            ;    // [string,    3] �ŵ����ǻ��ڵ�4                 StartPos 240, Length 3
    char    bidno4              [   3];    char    _bidno4              ;    // [string,    3] �ż����ǻ��ڵ�4                 StartPos 244, Length 3
    char    offertrad4          [   6];    char    _offertrad4          ;    // [string,    6] �ŵ�ȸ�����4                   StartPos 248, Length 6
    char    bidtrad4            [   6];    char    _bidtrad4            ;    // [string,    6] �ż�ȸ�����4                   StartPos 255, Length 6
    char    tradmdvol4          [  10];    char    _tradmdvol4          ;    // [long  ,   10] �ŵ��ŷ���4                     StartPos 262, Length 10
    char    tradmsvol4          [  10];    char    _tradmsvol4          ;    // [long  ,   10] �ż��ŷ���4                     StartPos 273, Length 10
    char    tradmdrate4         [   6];    char    _tradmdrate4         ;    // [float ,  6.2] �ŵ��ŷ�������4                 StartPos 284, Length 6
    char    tradmsrate4         [   6];    char    _tradmsrate4         ;    // [float ,  6.2] �ż��ŷ�������4                 StartPos 291, Length 6
    char    tradmdcha4          [  10];    char    _tradmdcha4          ;    // [long  ,   10] �ŵ��ŷ����������4             StartPos 298, Length 10
    char    tradmscha4          [  10];    char    _tradmscha4          ;    // [long  ,   10] �ż��ŷ����������4             StartPos 309, Length 10
    char    offerno5            [   3];    char    _offerno5            ;    // [string,    3] �ŵ����ǻ��ڵ�5                 StartPos 320, Length 3
    char    bidno5              [   3];    char    _bidno5              ;    // [string,    3] �ż����ǻ��ڵ�5                 StartPos 324, Length 3
    char    offertrad5          [   6];    char    _offertrad5          ;    // [string,    6] �ŵ�ȸ�����5                   StartPos 328, Length 6
    char    bidtrad5            [   6];    char    _bidtrad5            ;    // [string,    6] �ż�ȸ�����5                   StartPos 335, Length 6
    char    tradmdvol5          [  10];    char    _tradmdvol5          ;    // [long  ,   10] �ŵ��ŷ���5                     StartPos 342, Length 10
    char    tradmsvol5          [  10];    char    _tradmsvol5          ;    // [long  ,   10] �ż��ŷ���5                     StartPos 353, Length 10
    char    tradmdrate5         [   6];    char    _tradmdrate5         ;    // [float ,  6.2] �ŵ��ŷ�������5                 StartPos 364, Length 6
    char    tradmsrate5         [   6];    char    _tradmsrate5         ;    // [float ,  6.2] �ż��ŷ�������5                 StartPos 371, Length 6
    char    tradmdcha5          [  10];    char    _tradmdcha5          ;    // [long  ,   10] �ŵ��ŷ����������5             StartPos 378, Length 10
    char    tradmscha5          [  10];    char    _tradmscha5          ;    // [long  ,   10] �ż��ŷ����������5             StartPos 389, Length 10
    char    ftradmdvol          [  10];    char    _ftradmdvol          ;    // [string,   10] �ܱ������ǻ�ŵ��հ�            StartPos 400, Length 10
    char    ftradmsvol          [  10];    char    _ftradmsvol          ;    // [string,   10] �ܱ������ǻ�ż��հ�            StartPos 411, Length 10
    char    ftradmdrate         [   6];    char    _ftradmdrate         ;    // [float ,  6.2] �ܱ������ǻ�ŵ��ŷ�������      StartPos 422, Length 6
    char    ftradmsrate         [   6];    char    _ftradmsrate         ;    // [float ,  6.2] �ܱ������ǻ�ż��ŷ�������      StartPos 429, Length 6
    char    ftradmdcha          [  10];    char    _ftradmdcha          ;    // [string,   10] �ܱ������ǻ�ŵ��ŷ����������  StartPos 436, Length 10
    char    ftradmscha          [  10];    char    _ftradmscha          ;    // [string,   10] �ܱ������ǻ�ż��ŷ����������  StartPos 447, Length 10
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] �����ڵ�                        StartPos 458, Length 6
    char    tradmdval1          [  15];    char    _tradmdval1          ;    // [long  ,   15] �ŵ��ŷ����1                   StartPos 465, Length 15
    char    tradmsval1          [  15];    char    _tradmsval1          ;    // [long  ,   15] �ż��ŷ����1                   StartPos 481, Length 15
    char    tradmdavg1          [   7];    char    _tradmdavg1          ;    // [long  ,    7] �ŵ���մܰ�1                   StartPos 497, Length 7
    char    tradmsavg1          [   7];    char    _tradmsavg1          ;    // [long  ,    7] �ż���մܰ�1                   StartPos 505, Length 7
    char    tradmdval2          [  15];    char    _tradmdval2          ;    // [long  ,   15] �ŵ��ŷ����2                   StartPos 513, Length 15
    char    tradmsval2          [  15];    char    _tradmsval2          ;    // [long  ,   15] �ż��ŷ����2                   StartPos 529, Length 15
    char    tradmdavg2          [   7];    char    _tradmdavg2          ;    // [long  ,    7] �ŵ���մܰ�2                   StartPos 545, Length 7
    char    tradmsavg2          [   7];    char    _tradmsavg2          ;    // [long  ,    7] �ż���մܰ�2                   StartPos 553, Length 7
    char    tradmdval3          [  15];    char    _tradmdval3          ;    // [long  ,   15] �ŵ��ŷ����3                   StartPos 561, Length 15
    char    tradmsval3          [  15];    char    _tradmsval3          ;    // [long  ,   15] �ż��ŷ����3                   StartPos 577, Length 15
    char    tradmdavg3          [   7];    char    _tradmdavg3          ;    // [long  ,    7] �ŵ���մܰ�3                   StartPos 593, Length 7
    char    tradmsavg3          [   7];    char    _tradmsavg3          ;    // [long  ,    7] �ż���մܰ�3                   StartPos 601, Length 7
    char    tradmdval4          [  15];    char    _tradmdval4          ;    // [long  ,   15] �ŵ��ŷ����4                   StartPos 609, Length 15
    char    tradmsval4          [  15];    char    _tradmsval4          ;    // [long  ,   15] �ż��ŷ����4                   StartPos 625, Length 15
    char    tradmdavg4          [   7];    char    _tradmdavg4          ;    // [long  ,    7] �ŵ���մܰ�4                   StartPos 641, Length 7
    char    tradmsavg4          [   7];    char    _tradmsavg4          ;    // [long  ,    7] �ż���մܰ�4                   StartPos 649, Length 7
    char    tradmdval5          [  15];    char    _tradmdval5          ;    // [long  ,   15] �ŵ��ŷ����5                   StartPos 657, Length 15
    char    tradmsval5          [  15];    char    _tradmsval5          ;    // [long  ,   15] �ż��ŷ����5                   StartPos 673, Length 15
    char    tradmdavg5          [   7];    char    _tradmdavg5          ;    // [long  ,    7] �ŵ���մܰ�5                   StartPos 689, Length 7
    char    tradmsavg5          [   7];    char    _tradmsavg5          ;    // [long  ,    7] �ż���մܰ�5                   StartPos 697, Length 7
    char    ftradmdval          [  15];    char    _ftradmdval          ;    // [long  ,   15] �ܱ������ǻ�ŵ��ŷ����        StartPos 705, Length 15
    char    ftradmsval          [  15];    char    _ftradmsval          ;    // [long  ,   15] �ܱ������ǻ�ż��ŷ����        StartPos 721, Length 15
    char    ftradmdavg          [   7];    char    _ftradmdavg          ;    // [long  ,    7] �ܱ������ǻ�ŵ���մܰ�        StartPos 737, Length 7
    char    ftradmsavg          [   7];    char    _ftradmsavg          ;    // [long  ,    7] �ܱ������ǻ�ż���մܰ�        StartPos 745, Length 7
} OK__OutBlock, *LPOK__OutBlock;
#define NAME_OK__OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _OK__H_
