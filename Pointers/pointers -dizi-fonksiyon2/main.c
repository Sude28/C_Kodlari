#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carp(int y[],int s,int n) //dizi pointerini fonksiyona parametre olarak verdigimizde aslýnda bir pointer göndermis oluyoruz karsidakida onu pointer olarak karsiliyor . *y olarak ya da y[] olarak yazilabilir her sekilde pointerdir.hem dizi hem de y ayný bellek alanýný gösterir.
{
    printf("\n y'nin gosterdigi adres: %p\n",y);
    for(int i=0;i<n;i++)
        y[i]*=s; //y'deki elemanlarý s ile carpýp kendi üzerine yaz
}

int main()
{
    int dizi[50]; //dizi bir pointerdir 0. adresteki int'in adresini  dizi pointeri otomatik olarak tutuyor
    int n=50;

    srand(time(0));  //rastgele bilgisayar vericek elemanlari

    for(int i=0;i<n;i++){
        dizi[i]=(rand()%100)+1;   // 100'e göre modunu alýp 0-99 aralýðýna getirdik ardýndan 1 ekledik 0-100 aralýðý oldu
        printf("%d ",dizi[i]);
    }

    printf("\ndizi[0]'in adresi : %p\n",&dizi[0]);
    printf("dizi pointerinin degeri : %p\n",dizi); //diziler bir pointer olduklari icin direk %p ile dizi yazabilirim

    carp(dizi,5,n); // diziyi,dizinin her elemanýnýn kac ile carpýlcagýný ve eleman sayýsýný yolladýk fonksiyona

    printf("\n\nCarpimdan sonraki durum:\n\n");

    for(int i=0;i<n;i++)
        printf("%d ",dizi[i]);
    return 0;
}
