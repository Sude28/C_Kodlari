#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    float a,b;

    printf("********MENU********\n");
    printf("1.TOPLAMA\n");
    printf("2.CIKARMA\n");
    printf("3.CARPMA\n");
    printf("4.BOLME\n");

    printf("ISLEM NO GIRINIZ--> ");
    scanf("%d",&secim);
    printf("\n");

    printf("1.sayi: ");
    scanf("%f",&a);
    printf("2.sayi: ");
    scanf("%f",&b);

    switch(secim)
    {
        case 1: printf("Sonuc= %5.2f\n",a+b); break;
        case 2: printf("Sonuc= %5.2f\n",a-b); break;
        case 3: printf("Sonuc= %5.2f\n",a*b); break;
        case 4: printf("Sonuc= %5.2f\n",a/b); break;
        default:printf("Ýþlem gecersiz\n");

    }
    return 0;
}
