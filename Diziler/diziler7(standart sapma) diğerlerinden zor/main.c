#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  int N;
   int dizi[1000];
   float ort=0.0;
   float toplam=0.0;
   float standart=0.0;
   printf("N sayisini giriniz");
   scanf("%d",&N);

   if(N>1000 && N<=0)
        printf("N sayisi 1-1000 arali�inda olmal�!");
   else{
        for(int i=0;i<N;i++){
            printf("dizi[%d]= ",i);
            scanf("%d",&dizi[i]);
            ort+=dizi[i];//dizideki say�lar� girdirttik �imde de ort isimli de�i�kene ekletiyoruz
            }

         ort/=N; //say�lar� toplayarak ort'a eklemi�tik �imdi de N'e b�ld�k ortalamay� bulduk
         printf("Dizinin ortalamasi %f\n",ort);

         for(int i=0;i<N;i++){
             toplam+=pow(dizi[i]-ort,2.0);//pow fonksiyonu �s alma demek sonuna ,2 yazd�k ��nk� karesi
             }
          standart=sqrt(toplam/(N-1));//sqrt fonksiyonu k�k alma demek
          printf("Girilen %d adet sayinin standart sapmasi %f'dir",N,standart);


   }
    return 0;
}
