#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf='X';

    switch(harf) {
    case 'X' :
        printf("X");
        break;
    case 'Y' :
        printf("Y");
        break;/*break yazmasaydýk ve harfi y tanýmlasaydýk ilk case'yi geçerdi ikinci case'de y'yi bastýrýrdý sonra break olmadýðýndan çýkmazdý ve 3. case'yi de doðru kabul eder x ve y deðil yazdýrýrdý*/
    default:
        printf("X veya Y degil");
    }

    return 0;
}
