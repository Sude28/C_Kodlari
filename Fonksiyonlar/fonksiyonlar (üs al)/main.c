#include <stdio.h>
#include <stdlib.h>

double usbul(double x,double y){
    double sonuc=1.0;

    for(int i=0;i<y;i++) // x taban y us yani x'i y kere carpmam�z laz�m y kere olmasini for dongusu ile sagladik kisaca y kere x'i carpip sonuc degiskenine atiycaz
        sonuc*=x;

    return sonuc;
}

int main()
{
    double taban,us,sonuc;
    printf("Tabani giriniz:");
    scanf("%lf",&taban);
    printf("Ussu giriniz:");
    scanf("%lf",&us);

    sonuc=usbul(taban,us);//sonucu usbul fonksiyonundan alicaz

    printf("%lf uzeri %lf = %lf",taban,us,sonuc);
    return 0;
}
    // iki fonksiyonda da sonuc adl� degisken var ikisi de kendi fonksiyonlar� i�inde tan�mlandigindan yapilabilir yani ayni degildirler

