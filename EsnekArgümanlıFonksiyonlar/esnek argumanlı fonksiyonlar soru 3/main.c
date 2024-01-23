#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

void mesafeler(int n, ...){  // n kac tane parametre oldugunu g�sterir. Diger parametreleri bilmiyoruz

     int noktalar[100][2]; //matris ile noktalar�n yerini belirtiriz. max 100 nokta vard�r ve her noktan�n x ve y diye 2 koordinat� vard�r

     va_list liste;  // degisken say�l� argumanlar oldugundan bu argumanlar bir listede tutulur. Bu liste yap�s� tan�mlanmal�d�r : liste va_list t�r�nde bir degisken diye tan�mlad�k.
     va_start(liste,n);  // bu listenin n elemanl� bir liste oldugunu ve bundan veri cekicegimizi belirtiyoruz. Yani ba�latma islemidir , kullan�ma haz�r hale getirdik

     for(int i=0;i<n;i++)
     {
         noktalar[i][0]=va_arg(liste,int);  //x koordinat�. // listeden eleman cekmek icin kulland�g�m�z fonksiyon va_arg
         noktalar[i][1]=va_arg(liste,int);  //y koordinat�
     }

     va_end(liste);

     float mes;

     for(int i=0;i<n-1;i++){  // �RNEK: 3nokta var 1 ile 2 aras� 1 ile 3 aras� 2 ile 3 aras� uzakl�k. Bu nedenle ilk nokta d�� d�ng� ikinci nokta ic d�ng�. D�s d�ng�de sadece 1ve 2 oldugundan n-1 dedik

        for(int j=i+1;j<n;j++){
            mes=sqrt( pow((noktalar[i][0]-noktalar[j][0]),2.0)  +   pow((noktalar[i][1]-noktalar[j][1]),2.0));     // k�k((x1-x2)^2+(y1-y2)^2) --> �ki nokta arasi uzaklik formulu
            printf("Nokta%d ile Nokta%d arasindaki mesafe: %f\n",i+1,j+1,mes);   // i'yi 1'den ba�latmak istedigimiz icin i+1

        }

     }
}

int main()
{
    //mesafeler(2,5,8,-4,9);  //2 tane nokta var 1. noktan�n x koordinat�:5, y koordinat�:3 ; 2. noktan�n x koordinat�:-4 , y koordinat�:9
    //mesafeler(3,5,8,-4,9,20,12);
    //mesafeler(4,5,8,-4,9,20,12,10,-7);
    mesafeler(5,5,8,-4,9,20,12,10,-7,6,2);
    return 0;
}
