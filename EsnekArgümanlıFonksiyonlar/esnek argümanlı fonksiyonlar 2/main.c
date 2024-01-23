#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int minimum_bul(int arg_sayac, ...) //ka� tane say�y� girdi olarak verecegini bilmiyoruz bu yuzden esnek argumanl� fonksiyondur
{
  int i;
  int minimum_sayi,a;

  va_list ap;
  va_start(ap, arg_sayac);
  minimum_sayi = va_arg(ap, int);

  for(i=2; i<=arg_sayac; i++){
    if((a = va_arg(ap,int)) < minimum_sayi)
        minimum_sayi = a;
  }

  va_end(ap);

  return minimum_sayi;
}


int main()
{
    int sayi_adedi= 5;  // suan biz ayarl�yoruz ne kadar say� hangi degerler diye
    printf("En kucuk sayi: %d",minimum_bul(sayi_adedi, 12,2,6,7,100));
    getchar();
    return 0;
}
