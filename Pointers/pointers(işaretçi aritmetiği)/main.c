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
        printf("deger: %d , adres : %p\n" ,*p,p);  //*p dizinin 0. eleman�n�n degerini yazd�r�r, p++ yap�nca diger elemanlar� da yazd�r�r
    }

    printf("%p\n",p); // p'nin g�sterdi�i son adres
    printf("%d\n",*p); //p'nin g�sterdi�i son adresteki de�er

    /*for(int i=0;i<5;i++)
        printf("%d\n",*(p+i)); */


}
