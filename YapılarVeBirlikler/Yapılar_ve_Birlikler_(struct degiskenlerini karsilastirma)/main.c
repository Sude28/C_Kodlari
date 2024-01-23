#include <stdio.h>
#include <stdlib.h>

struct Ogrenci
{
   int No;
   char Ad[50];
   char Soyad[50];
   int Cinsiyet;
   int FakulteBolum;
   float GenelOrtalama;
} ogr1,ogr2;  //Bunlar global degiskenlerdir main disinda tanimlanir ve butun foksiyonlar erisebilir

int main()
{
    ogr1.No = 139280;
    ogr2.No = 139281;

    if (ogr1.No == ogr2.No)
        printf("ogr 1 ve ogr 2 esit...");
    else
        printf("ogr 1 ve ogr 2 esit degil...");

    return 0;
}
