#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carp(int y[],int s,int n) //dizi pointerini fonksiyona parametre olarak verdigimizde asl�nda bir pointer g�ndermis oluyoruz karsidakida onu pointer olarak karsiliyor . *y olarak ya da y[] olarak yazilabilir her sekilde pointerdir.hem dizi hem de y ayn� bellek alan�n� g�sterir.
{
    printf("\n y'nin gosterdigi adres: %p\n",y);
    for(int i=0;i<n;i++)
        y[i]*=s; //y'deki elemanlar� s ile carp�p kendi �zerine yaz
}

int main()
{
    int dizi[50]; //dizi bir pointerdir 0. adresteki int'in adresini  dizi pointeri otomatik olarak tutuyor
    int n=50;

    srand(time(0));  //rastgele bilgisayar vericek elemanlari

    for(int i=0;i<n;i++){
        dizi[i]=(rand()%100)+1;   // 100'e g�re modunu al�p 0-99 aral���na getirdik ard�ndan 1 ekledik 0-100 aral��� oldu
        printf("%d ",dizi[i]);
    }

    printf("\ndizi[0]'in adresi : %p\n",&dizi[0]);
    printf("dizi pointerinin degeri : %p\n",dizi); //diziler bir pointer olduklari icin direk %p ile dizi yazabilirim

    carp(dizi,5,n); // diziyi,dizinin her eleman�n�n kac ile carp�lcag�n� ve eleman say�s�n� yollad�k fonksiyona

    printf("\n\nCarpimdan sonraki durum:\n\n");

    for(int i=0;i<n;i++)
        printf("%d ",dizi[i]);
    return 0;
}
