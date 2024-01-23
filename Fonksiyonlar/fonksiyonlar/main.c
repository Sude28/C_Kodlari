#include <stdio.h>
#include <stdlib.h>

int main()
{
    mesaj(); // bu satirdan sonra 11. satira geçiyor mesaj adli fonksiyonu calistirmaya
    printf(" ve Programlama \n");
    return 0;
}

void mesaj() // void deger dönmeyen demek yani tekrarlanmıyor fonksiyon
{
    printf("Algoritma");
}
