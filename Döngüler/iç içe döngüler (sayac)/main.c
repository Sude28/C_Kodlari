#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
      for(int i=0;i<=59;i++)/*dýþ döngü (dakika sayacý)*/
         for(int j=0;j<=59;j++){
             printf("%02d:%02d\r",i,j);/*(\r satýr baþý demek örenk olarak; 00:01 den sonra yerini 00:02 alýyor)*/
             Sleep(1000);/*sayaç olduðundan diðer saniyeye geçmek için 1 saniye beklemesi gerekir.Sleep (1000 milisaniye=1 saniye)*/



         }
    return 0;
}
