#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>//intmax ile intmin'in kütüphanesi
#define N 20 //define sabiti belirlemek için kullanýlýr
int main()
{
    int dizi[N];
    srand(time(0));//sistem saatini tohum olarak alýr buna göre rastgele sayý üretir

    for(int i=0;i<N;i++){
        dizi[i]=rand();//rastgele sayý üretmek için rand fonksiyonu kullanýlýr
        printf("%d " ,dizi[i]);//dizinin elemanlarýný yazdýrdýk
    }
    printf("\n\n\n");


    int enkucuk,enbuyuk,kucuk_indis,buyuk_indis;//enkucuk deðiþkenine en büyük deðeri veririz diðerleri ile karþýlaþtýrýrýz en sonunda yanlýþ vermiþiz diyip en küçüðünü buluruz çünkü herhangi birine versek belki en büyük o boþuna karþýlaþtýrma yapmýþ oluruz
    enkucuk=INT_MAX;//bir intagerin alabileceði en büyük deðer
    enbuyuk=INT_MIN;//bir integerin alabileceði en küçük deðer

    for(int i=0;i<N;i++){
        if(dizi[i]<enkucuk){
             enkucuk=dizi[i];//enkucuk deðerini güncelledik çünkü enkucuk dediðimizden daha küçük deðer çýktý
             kucuk_indis=i;
    }
        if(dizi[i]>enbuyuk){
             enbuyuk=dizi[i];
             buyuk_indis=i;
    }
}
     printf("En kucuk: %d, En buyuk: %d\n",enkucuk,enbuyuk);
     printf("Kucuk indis: %d, Buyuk indis: %d\n",kucuk_indis,buyuk_indis);


    return 0;
}
