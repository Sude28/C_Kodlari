#include <stdio.h>
#include <stdlib.h>

int main()
{
    const BOYUT=10;//Bir de�i�kenin de�erinin program boyunca sabit olarak tutulmas� istendi�inde const (sabit) ifadesinden yararlan�l�r.
    int grafik[10]={19,3,15,7,11,9,13,5,17,1};
    int i,j;

    for(i=0;i<=BOYUT-1;i++){
        printf("%4d.eleman degeri:%5d -->",i,grafik[i]);

        for(j=1;j<=grafik[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
