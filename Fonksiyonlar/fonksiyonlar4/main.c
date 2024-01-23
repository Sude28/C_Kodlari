#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi){
    int fact=1;

    for(; sayi>0 ; sayi--){
            fact*=sayi;
    }
    return fact;
}

int main()
{
    int n;
    printf("Faktoriyelini istediginiz sayiyi girin:");
    scanf("%d",&n);
    printf("Faktoriyel :%d",faktoriyel(n)); //ilk basta sayiyi giriyor kullanici sonra, kod printfde faktoriyel(n) fonksiyonuyla karsýlasinca yukarýdaki fonksiyona geciyor yukarida for dongusu ile faktoriyel hesaplaniyor ve return ile sonuc main fonksiyonuna gönderiliyor
    return 0;
}
