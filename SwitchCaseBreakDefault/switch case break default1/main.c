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
        break;/*break yazmasayd�k ve harfi y tan�mlasayd�k ilk case'yi ge�erdi ikinci case'de y'yi bast�r�rd� sonra break olmad���ndan ��kmazd� ve 3. case'yi de do�ru kabul eder x ve y de�il yazd�r�rd�*/
    default:
        printf("X veya Y degil");
    }

    return 0;
}
