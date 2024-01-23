#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,ekstra,toplam=0;
    int *dizi;
    printf("Kac adet sayi gireceksiniz? ");
    scanf("%d",&sayi);

    dizi=(int*)malloc(sayi*sizeof(int));
    //dizi=(int*)calloc(sayi,sizeof(int));   //eleman sayýsý sonra her elemanýn boyutu

    printf("Dizinin elemanlarini giriniz: \n");
    for(int i=0;i<sayi;i++){
        printf("Dizi[%d]= ",i);
        scanf("%d",&dizi[i]);  // scanf("%d",(dizi+i)); & kaldýrmamýzýn nedeni zaten (dizi+i)'nin bir adres olmasý (diziler pointerdir yani adres belirtir)
    }

    for(int i=0;i<sayi;i++){
        toplam+=*(dizi+i);
    }

    printf("Toplam= %d\n",toplam);


    printf("Kac eleman eklemek istiyorsunuz? ");
    scanf("%d",&ekstra);

    dizi=(int*)realloc(dizi,(sayi+ekstra)*sizeof(int)); //dizinin yeni boyutu sayý+ekstra olsun diyoruz.

    for(int i=sayi;i<sayi+ekstra;i++){
        printf("Dizi[%d]= ",i);
        scanf("%d",&dizi[i]);
    }

    toplam=0;
    printf("\nYeni toplam hesabi: \n");
    for(int i=0;i<sayi+ekstra;i++){
        toplam+=*(dizi+i);
    }
     printf("Yeni Toplam= %d\n",toplam);

     printf("Dizi pointerinin degeri %p\n",dizi);
     printf("\ndizi[0]= %d\n",dizi[0]);

     free(&dizi[0]);

     printf("Temizlikten sonra dizi pointerinin degeri %p\n",dizi);
     printf("\n%d",dizi[0]); // temizledikten sonra dizi isimli pointer rastgele bir yeri gösteriyor o yerdeki

    return 0;
}
