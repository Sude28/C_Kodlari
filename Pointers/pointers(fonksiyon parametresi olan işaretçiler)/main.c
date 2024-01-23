#include <stdio.h>
#include <stdlib.h>

/* Deger geçerek aktarým*/
void f1(int n)
{
    n=66;  //fonksiyonun içinde deðerini deðiþtirmiþtir.fonksiyonun dýþýna çýkýnca deeðr kaybolur eski deðerini alýr.
    printf("f1 fonksiyonu icinde      :%d\n",n);
}
/* Adres gecerek aktarým*/
void f2(int *n)
{
    *n=77; //f2'ye aktarýlan deger degil adres oldugu icin artýk x'in adresi degismistir ve fonksiyonun dýsýnda da o degeri gösterir.
    printf("f2 fonksiyonu icinde       :%d\n",*n);
}
int main()
{
    int x=55;
    printf("x'in degeri;\n");
    printf("Fonksiyonlar cagirilmadan once:%d\n",x);

    /* f1 fonksiyonu çaðýrýlýyor...*/
    f1(x);
    printf("f1 cagirildiktan sonra     :%d\n",x);

    /*f2 fonksiyonu çaðýrýlýyor...*/
    f2(&x);
    printf("f2 cagirildiktan sonra     :%d\n",x);
    return 0;
}
