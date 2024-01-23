#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
   printf("1-10 araliginda bir sayi giriniz: ");
   scanf("%d",&sayi);

   if(sayi>=1 && sayi<=10)
   {
      switch(sayi)
      {
         case 1:
             printf("Sayi asal degil!");
             break;

         case 2:
             printf("Sayi asal !");
             break;

         case 3:
             printf("Sayi asal !");
             break;

         case 4:
             printf("Sayi asal degil!");
             break;

         case 5:
             printf("Sayi asal !");
             break;

         case 6:
             printf("Sayi asal degil!");
             break;

         case 7:
             printf("Sayi asal!");
             break;

         case 8:
             printf("Sayi asal degil!");
             break;

         case 9:
             printf("Sayi asal degil!");
             break;
         default:
             printf("Sayi asal degil!");
         }
      }
   else
       printf("Girdiginiz sayi istenen aralikta degil");




    return 0;
}
/*  int sayi;
    printf(1-10 araliginda bir saayi giriniz);
    scanf("%d",&sayi);

   if(sayi>=1 && sayi<=10)
   {
      switch(sayi)
      {
          case2:
          case3:
          case5:                 (mesela case2de break olmadýðýndan break çýkana kadarki bütün caseleri doðru kabul eder en sonunda case7 nin printfini yazdýrýr)
          case7:
              printf("sayi asal!");
              break;
           default:
              printf("sayi asal degil!");
      }
   }

