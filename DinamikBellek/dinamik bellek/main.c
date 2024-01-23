#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *dizi;  //dinamik dizi bildirimi
   int n ;
   float toplam=0.0;
   printf("Dizinin boyutunu giriniz: ");
   scanf("%d",&n);

   dizi=(int *) malloc( sizeof(int)*n );  //int tipinde n tane bellek gözü ayrýlýyor

   for(int i=0;i<n;i++){
     printf("%d. elemani giriniz: ",i+1);
     scanf("%d",&dizi[i]);   //dizi[0] 1.elemandýr
   }

   for(int i=0;i<n;i++)
      toplam += dizi[i];

   printf("\nToplam: %.1f\n",toplam);
   printf("Ortalama: %.3f\n", (toplam/n));

   free(dizi);  //isi bitince ayirdigi bellek alanini bosaltiyor

    return 0;
}
