#include <stdio.h>
#include <stdlib.h>

double* maxAdr(double a[], int boyut) //pointer dondurdugu icin * koyduk.
{
    double ebd = a[0]; // en buyuk deger
    double *eba = &a[0]; // en buyuk adres
    int i;
    for(i=1; i<boyut; i++)
    {
        if(a[i]>ebd)
        {
            ebd = a[i];
            eba = &a[i];
        }
    }
    return eba;
}

int main()
{
    double x[6]={1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
    double *p;
    int k;
    // İndis, dizi ve adresini ekrana bas

    for(k=0; k<6; k++)
    {
        printf("%d %lf %p\n", k, x[k], &x[k]);
    }

    p=maxAdr(x,6);

    printf("\n En buyuk deger: %f\n",*p);
    printf("En buyuk adres: %p \n", p);

    return 0;
}
