#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ornek_dizi[5];//D�Z� TANIMLAMA
   int i;

   for(i=0;i<5;i++){
        ornek_dizi[i]=i*3;//DE�ER ATAMA
   }
   for(i=0;i<5;i++){
        printf("%d.dizi eleman degeri:%d\n",i,ornek_dizi[i]);//DE�ER OKUMA
   }
    return 0;
}
