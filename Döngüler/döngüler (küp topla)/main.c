#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam=0,i;
/*
   for(i=1;i<=10;i+=1);
       toplam+=i*i*i;
       */
      /* i=1;
       while(i<=10){
             toplam+=i*i*i;
             i++;  */

         i=1;
       do{
           toplam+=i*i*i;
            i++;
        }while(i<=10);

       printf("Toplam=%d",toplam);
       printf("\n\ni=%d",i);


       return 0;
}
