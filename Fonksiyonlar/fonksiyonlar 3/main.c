#include <stdio.h>
#include <stdlib.h>

int topla(int sayi1,int sayi2){

    return(sayi1+sayi2); //main fonksiyonuna bu degeri döndürüyor
}


int main(){
    int sayi1;
    int sayi2;

    scanf("%d %d",&sayi1,&sayi2);

    printf("%d",topla(sayi1,sayi2));  //topla fonksiyonunu calýstýrýr ve sonucunda degeri yazdýrýr



    return 0;
}

// ********BASKA BIR GOSTERIM********//
// ilk fonksiyon ayni, ikinici foksiyon;

//   int sayi1;
//   int sayi2;
//   int toplam;

//    scanf("%d %d,&sayi1,&sayi2);
//    toplam = topla(sayi1,sayi2);

//    printf("%d",toplam);


