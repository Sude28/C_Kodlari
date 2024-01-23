#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct kredi{      //structnin icinde olan once tanımlanmalı
    float oran;
    int vadesayisi;
}arackredi;

struct Arac
{
   char markamodel[50];
   int modelyili;
   int km;
   double fiyat;
   arackredi kredibilgi;   //arackredi veri tipinde kredibilgi diye bir uye tanımlıyoruz yani struct icinde struct oldu.
};

typedef struct Arac Araba;


int main()
{
    srand(time(0));
    int aracsayisi;
    printf("Galeride kac arac var?");
    scanf("%d",&aracsayisi);
    getchar(); // bunu yapmamizin nedeni scanfden sonra enterebasınca bir arkasından gelne gets enteri girmissin gibi sanıp bir sonraki yere geciyor bu nedenle.

    //Araba arabalar[aracsayisi]; // statik dizilerin eleman sayýsýný bilmeliyiz boyke bir eleman sayýsý yazmazyýz bu nedenle eleman sayýsýný bikmiyorsak dinamik dizi yaparýz yani malloc

    Araba* arabaptr;  //her biri araba veri tipinde oldugu icin Araba* arabaptr deriz. // int* arabaptr gibi
    arabaptr=(Araba*)malloc(aracsayisi*sizeof(Araba));  //  en bastaki Araba* görevi kasting operatorudur yani bu araba* turunde diyor.

    for (int i=0;i<aracsayisi;i++){
        printf("%d. aracin markamodeli: ",i+1);
        gets(arabaptr[i].markamodel); // arabaptr dizisinin i. elemanı icerisinde markamodel diye bir string alanı var orayı cek.
        printf("%d. aracin model yili: ",i+1);
        scanf("%d",&arabaptr[i].modelyili);
        printf("%d. aracin kilometresi: ",i+1);
        scanf("%d",&arabaptr[i].km);
        printf("%d. aracin fiyati: ",i+1);
        scanf("%lf",&arabaptr[i].fiyat);
        getchar(); // dongu donunce scanfden sonra gets geliyor o yuzden yine aynı sey oluyor
    }
        for (int i=0;i<aracsayisi;i++){
            arabaptr[i].kredibilgi.oran=(rand()%9+7)/100.0;
            arabaptr[i].kredibilgi.vadesayisi=rand()%49+12; //12 ile 60 ay arasi

                                                            }


        for(int i=0;i<aracsayisi;i++)
            printf("\n%s %d %d %.2lf Kredi Orani: %.2lf  Kredi Vadesi: %d\n" , arabaptr[i].markamodel,arabaptr[i].modelyili,arabaptr[i].km,arabaptr[i].fiyat,arabaptr[i].kredibilgi.oran,arabaptr[i].kredibilgi.vadesayisi);














    return 0;
}
