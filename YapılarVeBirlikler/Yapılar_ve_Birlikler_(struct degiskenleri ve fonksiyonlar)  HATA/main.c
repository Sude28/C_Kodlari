#include <stdio.h>
#include <stdlib.h>

struct Ogrenci
{
 int No;
 char Ad[50];
 char Soyad[50];
 char Cinsiyet[50];
 char FakulteBolum[50];
 float GenelOrtalama;
};

void OgrenciBilgisiYazdir(struct Ogrenci ogr)
{
    //struct Ogrenci ogr;
    printf("**************\n   VERI GIRISI\n**************\n");
    printf("Ogrenci No:");
    scanf("%d",&ogr.No);
    printf("Ogrenci Ad:");
    scanf("%s",ogr.Ad);
    printf("Ogrenci Soyad:");
    scanf("%s",ogr.Soyad);    //diziler de pointerdir yani adres tutar soyad da bir karakter dizisidir bu nedenle scanf'de &koymadýk.
    printf("Ogrenci Cinsiyet:");
    scanf("%s",ogr.Cinsiyet);
    printf("Fakulte/Bolum:");
    scanf("%s",ogr.FakulteBolum);
    printf("Genel Ortalama:");
    scanf("%f",&ogr.GenelOrtalama);


    printf("No: %d \nAd: %s \nSoyad: %s \nCinsiyet: %s \nFakulte/Bolum: %s \nGenel Ortalama: %0.2f" ,
           ogr.No,
           ogr.Ad,
           ogr.Soyad,
           ogr.Cinsiyet,
           ogr.FakulteBolum,
           ogr.GenelOrtalama
           );
}

int main()
{
    struct Ogrenci ogrenci_test;
    OgrenciBilgisiYazdir(ogrenci_test);
    return 0;
}
