#include <stdio.h>
#include <stdlib.h>

long int fibonacci(int x){
     if(x==0)
        return 0;
     else if(x==1)
        return 1;
     else
        return fibonacci(x-1)+fibonacci(x-2);  //istenen her sayiyi bir ve sıfıra indirgemeye calisiyoruz.
       //0. veya 1. elemaný istiyorsak ilk ikisi çalýþýr daha büyükler için else çalýþýr 4 için 3 ve 2 nin toplamý sonra 3 için 2 ve 1 2 için 1 ve 0 diye devam ediyor
}

int main()
{
    int n;
    long int sonuc;
    printf("Fibonacci dizisinin kacinci elemanini istiyorsunuz? ");
    scanf("%d",&n);

    sonuc=fibonacci(n);

    printf("Sonuc: %ld",sonuc);
    return 0;
}
