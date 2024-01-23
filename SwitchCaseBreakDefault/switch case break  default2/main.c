#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("Bir harf giriniz: ");
    scanf("%c", &harf);
    switch (harf) {
        case 'a':
        case 'A':
            printf("A harfi girdiniz\n");
            break;
        default:
            printf("A harfi girmediniz\n");
    }

    return 0;
}
