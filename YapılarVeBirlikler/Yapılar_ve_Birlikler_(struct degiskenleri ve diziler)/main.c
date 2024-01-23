#include <stdio.h>
#include <stdlib.h>

struct OgrenciNot
{
    int No;
    int VizeNotlar[2];
    int QuizNotlar[2];
    int Final;
};



int main()
{
    struct OgrenciNot ogr[100];

    ogr[0].No = 129211;
    ogr[0].VizeNotlar[0] = 78;
    ogr[0].VizeNotlar[1] = 65;
    ogr[0].QuizNotlar[0] = 82;
    ogr[0].QuizNotlar[1] = 66;
    ogr[0].Final = 61;

    printf("1. vize notu= %d\n",ogr[0].VizeNotlar[0]);
    printf("2. quiz notu= %d\n",ogr[0].QuizNotlar[1]);

    return 0;
}
