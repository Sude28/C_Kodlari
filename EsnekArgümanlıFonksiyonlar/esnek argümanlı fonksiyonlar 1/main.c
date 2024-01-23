#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int topla(int n, ...)
{
    va_list ap; //e.a(esnek arg�manl�) icin tip bel�rleyici
    int i, top =0 ;

    va_start(ap, n); // va list tipindeki ap g�stericisi icin n elemanl� yer ay�r�yor

    for(i=1; i<=n; i++)
        top += va_arg(ap, int); //int veri tipindeki kume elemanlar�na erisimi saglar

    va_end(ap); // va list tipinde bildirilmis ap g�stericisi icin bellekten bolgeyi bosalt�r
    return top;
}

int main(void)
{
   printf ("topla(2, 11,22)          =%d\n", topla(2, 11,22));
   printf ("topla(3, 11,22,33)       =%d\n", topla(3, 11,22,33));
   printf ("topla(4, 11,22,33,44)    =%d\n", topla(4, 11,22,33,44));
   printf ("topla(5, 11,22,33,44,55) =%d\n", topla(5, 11,22,33,44,55));

   return 0;
}
