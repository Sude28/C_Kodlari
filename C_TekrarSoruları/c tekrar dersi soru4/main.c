#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int bosluk=n-1;
    // soldaki boþluk
    for(int i=0;i<n;i++){
        for(int j=0;j<bosluk;j++){
            printf("");
        }
        bosluk--;

        for(int j=0;j<bosluk;j++){
            printf("%c",'a'+i);
        }
        printf("\n");
    }
    return 0;
}





int main()
{
    int n;
    scanf("%d", &n);
    int bosluk = n - 1;

    // ana algoritma
    for (int i = 0; i < n; i++) {
        // soldaki bosluklar
        for (int j = 0; j < bosluk; j++) {
            printf(" ");
        }
        bosluk--;

        // harfler
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", 'a' + i);
        }
        printf("\n");
    }
    return 0;
}
