#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aranacak_dizi[100];
    int aranan_bilgi,i;
    int bulunan_indis= -1;

    //Dizi elemanlarý otomatik olarak çift sayýlarla dolduruluyor.
    for (i=0; i<100; i++) {
         aranacak_dizi[i]=i*2;
    }
    //Aranacak bilgi okunuyor
    printf("Aranacak bilgiyi giriniz:");
    scanf("%d",&aranan_bilgi);
    //Doðrusal arama
    for (i=0; i<100; i++){
         if(aranan_bilgi==aranacak_dizi[i]) {
         bulunan_indis=i;
         printf("Aranan bilgi %d --> %d. indiste bulundu..\n",aranan_bilgi,bulunan_indis);

         break;
         }
    }
    if(bulunan_indis ==-1)
       printf("Aranan bilgi %d bulunamadi\n",aranan_bilgi);
    return 0;
}
