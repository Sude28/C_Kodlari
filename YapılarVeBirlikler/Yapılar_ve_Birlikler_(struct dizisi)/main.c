#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>  //strcpy icin

struct Arac
{
   char markamodel[50];
   int modelyili;
   int km;
   double fiyat;
};

typedef struct Arac Araba;  //struct arac veri tipinin adı artık araba

int main()
{
    srand(time(0));
    Araba arabalar[10];     //hepsi araba tipinde olan arabalar adında 10 elemanlı dizimiz var yani 10 tene structımız var yani 10 tane arabanın veri girisini yapicaz // int arabalar[10] gibi
    char marmodel[3][50]={"X-Ymodeli","A-Bmodeli","C-Dmodeli"};  // 3 tane metinden olusan dizi her metin de en fazla 50 karakterlik olabilir. String dizisi oldugunu anlamamiz icin.

    for(int i=0;i<10;i++){
        arabalar[i].fiyat=(double)((rand()%200000)+1+50000) +(double)((rand()%100)/(double)100) ;   //200.000'e bolumunden kalan demek yani 1 ile 199.999 arasýndaki sayýlar 1 ekledik 1 ile 200.000 oldu 50.000 daha ekleyince 50.000  ile 250.000 arasinda oldu  // 100'e göre modu 1 ile 99 arasýnda 100'e bolunce de ondalýklý oldu cunku double demistik. // rand fonksiyonu rastgele sayı dondurur ama her zaman int dondurur.
        arabalar[i].km= rand()%1000001;  // 0 ile 1 milyon arasýnda bir km degeri oldu
        arabalar[i].modelyili= rand()%41+1980;  // 1980 ile 2020 arasý model yýlý oldu
        strcpy(arabalar[i].markamodel,marmodel[rand()%3]);  //3 ile bolumunden kalan yani  marmodel[1] marmodel[2] marmodel[3] oldu. arabalar structındaki markamodel uyesine marmodel dizisini atiyoruz ama bunu yaparken strcpy kullanıyoruz çünkü char  dizileri birbirlerine atama yapilmazlar.
    }

    for(int j=0;j<10;j++){
        printf("%s %d %d %.2lf\n",arabalar[j].markamodel,arabalar[j].modelyili,arabalar[j].km,arabalar[j].fiyat);
    }

    return 0;
}
