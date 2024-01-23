#include <stdio.h>
#include <stdlib.h>

/*int* fonk()  //fonksiyon geriye int turunden bir verinin pointerini gonderiyor.(pointer adres tutar)
{
    int temp=55;
    return &temp;  //fonksiyon geriye pointer dondurdugu icin temp'in adresini vermeliyiz return'a.  // fonksiyon icinde bir degisken tanýmlanýyor ve bu degiskenin adresi geri donduruluyor.
    /* YANLIS:RETURN FONKSIYONUN BITTIGI ANLAMINA GELIR VE FONKSIYON BITIRILDIGINDA O FONKSIYONUN ICINDE TANIMLADIGIMIZ BUTUN DEGISKENLER VE DIZILER HEPSI YOK EDÝLÝR. YOK EDILDIGI ICIN GERIYE FONKSIYONUN ICINDE TANIMLADIGIMIZ BIR DEGISKENIN VEYA DIZININ ADRESINI DONDUREZ. */
//}

/*int main()
{
    int *ptr;
    ptr=fonk(); //fonk bize 55'in tutuldugu temp'in adresini dondurucek ve bu adres de ptr'ye aktarýlacak.
    printf("%d",*ptr);
    return 0;
}*/





 int* fonk(int *x)
{
     *x=55;
     return x;
}

int main()
{
    int temp;
    int *ptr;
    ptr=fonk(&temp);
    printf("%d",*ptr);
    return 0; /*FONKSIYONDA ISLEYECEGINIZ DEGISKENLERI FONKSIYONA PARAMETRE OLARAK VERMEMIZ GEREKIYOR. BU PARAMETRELER FONKSIYONUN ICINDE DEGÝSTÝRÝLÝP DEGISTIRILMIS HALI GERI DONDURULEBILIR AMA FONKSIYONUN ICINDE TANIMLADIGIMIZ DEGISKENLERI VEYA DIZILERI GERI DONDUREMEYIZ.*/

}




