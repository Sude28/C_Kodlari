#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
      for(int i=0;i<=59;i++)/*d�� d�ng� (dakika sayac�)*/
         for(int j=0;j<=59;j++){
             printf("%02d:%02d\r",i,j);/*(\r sat�r ba�� demek �renk olarak; 00:01 den sonra yerini 00:02 al�yor)*/
             Sleep(1000);/*saya� oldu�undan di�er saniyeye ge�mek i�in 1 saniye beklemesi gerekir.Sleep (1000 milisaniye=1 saniye)*/



         }
    return 0;
}
