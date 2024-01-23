#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5]={45,46,47,48,49};

    /*
    for(int i=0;i<5;i++)
        printf("%d\n",dizi[i]);
    return 0;
    */

    int *p=&dizi[0];
    for(int i=0;i<5;i++,p++){
        printf("deger: %d , adres : %p\n" ,*p,p);  //*p dizinin 0. elemanýnýn degerini yazdýrýr, p++ yapýnca diger elemanlarý da yazdýrýr
    }

    printf("%p\n",p); // p'nin gösterdiði son adres
    printf("%d\n",*p); //p'nin gösterdiði son adresteki deðer

    /*for(int i=0;i<5;i++)
        printf("%d\n",*(p+i)); */


}
