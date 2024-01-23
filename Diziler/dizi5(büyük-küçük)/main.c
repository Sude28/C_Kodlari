#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>//intmax ile intmin'in k�t�phanesi
#define N 20 //define sabiti belirlemek i�in kullan�l�r
int main()
{
    int dizi[N];
    srand(time(0));//sistem saatini tohum olarak al�r buna g�re rastgele say� �retir

    for(int i=0;i<N;i++){
        dizi[i]=rand();//rastgele say� �retmek i�in rand fonksiyonu kullan�l�r
        printf("%d " ,dizi[i]);//dizinin elemanlar�n� yazd�rd�k
    }
    printf("\n\n\n");


    int enkucuk,enbuyuk,kucuk_indis,buyuk_indis;//enkucuk de�i�kenine en b�y�k de�eri veririz di�erleri ile kar��la�t�r�r�z en sonunda yanl�� vermi�iz diyip en k�����n� buluruz ��nk� herhangi birine versek belki en b�y�k o bo�una kar��la�t�rma yapm�� oluruz
    enkucuk=INT_MAX;//bir intagerin alabilece�i en b�y�k de�er
    enbuyuk=INT_MIN;//bir integerin alabilece�i en k���k de�er

    for(int i=0;i<N;i++){
        if(dizi[i]<enkucuk){
             enkucuk=dizi[i];//enkucuk de�erini g�ncelledik ��nk� enkucuk dedi�imizden daha k���k de�er ��kt�
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
