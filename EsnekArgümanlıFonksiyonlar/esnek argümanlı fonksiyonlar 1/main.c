#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int topla(int n, ...)
{
    va_list ap; //e.a(esnek argümanlý) icin tip belþrleyici
    int i, top =0 ;

    va_start(ap, n); // va list tipindeki ap göstericisi icin n elemanlý yer ayýrýyor

    for(i=1; i<=n; i++)
        top += va_arg(ap, int); //int veri tipindeki kume elemanlarýna erisimi saglar

    va_end(ap); // va list tipinde bildirilmis ap göstericisi icin bellekten bolgeyi bosaltýr
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
