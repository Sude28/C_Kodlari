#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

void mesafeler(int n, ...){  // n kac tane parametre oldugunu gösterir. Diger parametreleri bilmiyoruz

     int noktalar[100][2]; //matris ile noktalarýn yerini belirtiriz. max 100 nokta vardýr ve her noktanýn x ve y diye 2 koordinatý vardýr

     va_list liste;  // degisken sayýlý argumanlar oldugundan bu argumanlar bir listede tutulur. Bu liste yapýsý tanýmlanmalýdýr : liste va_list türünde bir degisken diye tanýmladýk.
     va_start(liste,n);  // bu listenin n elemanlý bir liste oldugunu ve bundan veri cekicegimizi belirtiyoruz. Yani baþlatma islemidir , kullanýma hazýr hale getirdik

     for(int i=0;i<n;i++)
     {
         noktalar[i][0]=va_arg(liste,int);  //x koordinatý. // listeden eleman cekmek icin kullandýgýmýz fonksiyon va_arg
         noktalar[i][1]=va_arg(liste,int);  //y koordinatý
     }

     va_end(liste);

     float mes;

     for(int i=0;i<n-1;i++){  // ÖRNEK: 3nokta var 1 ile 2 arasý 1 ile 3 arasý 2 ile 3 arasý uzaklýk. Bu nedenle ilk nokta dýþ döngü ikinci nokta ic döngü. Dýs döngüde sadece 1ve 2 oldugundan n-1 dedik

        for(int j=i+1;j<n;j++){
            mes=sqrt( pow((noktalar[i][0]-noktalar[j][0]),2.0)  +   pow((noktalar[i][1]-noktalar[j][1]),2.0));     // kök((x1-x2)^2+(y1-y2)^2) --> Ýki nokta arasi uzaklik formulu
            printf("Nokta%d ile Nokta%d arasindaki mesafe: %f\n",i+1,j+1,mes);   // i'yi 1'den baþlatmak istedigimiz icin i+1

        }

     }
}

int main()
{
    //mesafeler(2,5,8,-4,9);  //2 tane nokta var 1. noktanýn x koordinatý:5, y koordinatý:3 ; 2. noktanýn x koordinatý:-4 , y koordinatý:9
    //mesafeler(3,5,8,-4,9,20,12);
    //mesafeler(4,5,8,-4,9,20,12,10,-7);
    mesafeler(5,5,8,-4,9,20,12,10,-7,6,2);
    return 0;
}
