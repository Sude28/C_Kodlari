#include <stdio.h>
#include <stdlib.h>

/* Deger ge�erek aktar�m*/
void f1(int n)
{
    n=66;  //fonksiyonun i�inde de�erini de�i�tirmi�tir.fonksiyonun d���na ��k�nca dee�r kaybolur eski de�erini al�r.
    printf("f1 fonksiyonu icinde      :%d\n",n);
}
/* Adres gecerek aktar�m*/
void f2(int *n)
{
    *n=77; //f2'ye aktar�lan deger degil adres oldugu icin art�k x'in adresi degismistir ve fonksiyonun d�s�nda da o degeri g�sterir.
    printf("f2 fonksiyonu icinde       :%d\n",*n);
}
int main()
{
    int x=55;
    printf("x'in degeri;\n");
    printf("Fonksiyonlar cagirilmadan once:%d\n",x);

    /* f1 fonksiyonu �a��r�l�yor...*/
    f1(x);
    printf("f1 cagirildiktan sonra     :%d\n",x);

    /*f2 fonksiyonu �a��r�l�yor...*/
    f2(&x);
    printf("f2 cagirildiktan sonra     :%d\n",x);
    return 0;
}
