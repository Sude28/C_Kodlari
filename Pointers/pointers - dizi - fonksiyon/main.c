#include <stdio.h>
#include <stdlib.h>
float Ortalamabul(float dizi[],int n)
{
    int i;
    float *pdizi, toplam=0;
    pdizi=dizi;
    for(i=0;i<=n;i++)
    {
        toplam += *(pdizi + i);
    }
    return (toplam / n);
}


/*float Ortalamabul(float dizi[],int n){
    int i;
    float toplam=0.0;
    for(i=0;i<=n;i++){
        toplam+=dizi[i];
    }
    return(toplam/n);
}*/

int main()
{
    float b[]={10,20,30,40,50};
    float ortalama = 0;

    ortalama= Ortalamabul(b,5);
    printf("Ortalama: %f",ortalama);

    return 0;
}
