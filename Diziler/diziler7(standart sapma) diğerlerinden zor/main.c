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
        printf("N sayisi 1-1000 araliðinda olmalý!");
   else{
        for(int i=0;i<N;i++){
            printf("dizi[%d]= ",i);
            scanf("%d",&dizi[i]);
            ort+=dizi[i];//dizideki sayýlarý girdirttik þimde de ort isimli deðiþkene ekletiyoruz
            }

         ort/=N; //sayýlarý toplayarak ort'a eklemiþtik þimdi de N'e böldük ortalamayý bulduk
         printf("Dizinin ortalamasi %f\n",ort);

         for(int i=0;i<N;i++){
             toplam+=pow(dizi[i]-ort,2.0);//pow fonksiyonu üs alma demek sonuna ,2 yazdýk çünkü karesi
             }
          standart=sqrt(toplam/(N-1));//sqrt fonksiyonu kök alma demek
          printf("Girilen %d adet sayinin standart sapmasi %f'dir",N,standart);


   }
    return 0;
}
