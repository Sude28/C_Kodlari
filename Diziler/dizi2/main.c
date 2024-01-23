#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int i,j;

    for(i=0;i<10;i++){
        printf("%d. sayiyi giriniz:",i);
        scanf("%d",&dizi[i]);
        if(dizi[i]==0)
            break;
        j=i;
    }
    for(i=0;i<=j;i++){
        printf("%d\n",dizi[i]);
    }
    return 0;
}
