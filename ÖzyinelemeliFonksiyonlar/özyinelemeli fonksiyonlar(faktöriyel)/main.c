#include <stdio.h>
#include <stdlib.h>

int faktoriyel_hesapla(int sayi)
{
   if(sayi<=1)
        return 1;
   else
    return(sayi*faktoriyel_hesapla(sayi-1)); // sayi olarak 5 girilirse --> 5*4!
}

int main()
{
    int sayi;
    printf("Faktoriyel hesabi icin sayi giriniz: ");
    scanf("%d", &sayi);

    printf("Faktoriyel sonucu: %d\n", faktoriyel_hesapla(sayi));
    return 0;
}
