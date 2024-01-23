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

int main()
{
    struct Ogrenci ogrenci_bilgisi;
    printf("**************\n   VERI GIRISI\n**************\n");
    printf("Ogrenci No:");
    scanf("%d",&ogrenci_bilgisi.No);
    printf("Ogrenci Ad:");
    scanf("%s",ogrenci_bilgisi.Ad);
    printf("Ogrenci Soyad:");
    scanf("%s",ogrenci_bilgisi.Soyad);    //diziler de pointerdir yani adres tutar soyad da bir karakter dizisidir bu nedenle scanf'de &koymadýk.
    printf("Ogrenci Cinsiyet:");
    scanf("%s",ogrenci_bilgisi.Cinsiyet);
    printf("Fakulte/Bolum:");
    scanf("%s",ogrenci_bilgisi.FakulteBolum);
    printf("Genel Ortalama:");
    scanf("%f",&ogrenci_bilgisi.GenelOrtalama);

    printf("\n**************\n   VERI OKUMA\n**************\n");
    printf("No: %d \nAd: %s \nSoyad: %s \nCinsiyet: %s \nFakulte/Bolum: %s \nGenel Ortalama: %0.2f" ,
           ogrenci_bilgisi.No,
           ogrenci_bilgisi.Ad,
           ogrenci_bilgisi.Soyad,
           ogrenci_bilgisi.Cinsiyet,
           ogrenci_bilgisi.FakulteBolum,
           ogrenci_bilgisi.GenelOrtalama
           );

    return 0;
}
