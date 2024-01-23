#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *metin;
    int n=20;

    metin= (char*)malloc(n*sizeof(char));
    metin= (char*)calloc(n,sizeof(char));
    for(int i=0;i<20;i++)
        printf("%d",metin[i]);


    /*metin= (char*)malloc(n*sizeof(char));

    for(int i=0;i<20;i++)
        printf("%c",metin[i]);*/
    return 0;
}
