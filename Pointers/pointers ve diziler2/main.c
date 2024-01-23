#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b[]={10,20,30,40};
    int *pb=b; //pb i�aretcisine dizinin 1. eleman�n�n adresi atan�yor

    printf("YONTEM 1: DIZI INDISLERI \n");
    for(int i=0;i<4;i++)
        printf("b[%d] : %d\n",i,b[i]);

    printf("YONTEM 2: ISARETCI OFFSET \n");
    for(int i=0;i<4;i++)
        printf("*(pb + %d): %d\n",i,*(pb+i));

    printf("YONTEM 3: DIZI/ISARETCI OFFSET \n");
    for(int i=0;i<4;i++)
        printf("*(b + %d): %d\n",i,*(b+i));




    return 0;
}
