#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 20
int main()
{
    int dizi1[N],dizi2[N];
    srand(time(0));

    for(int i=0;i<N;i++){
        dizi1[i]=rand();//rastgele sayý ata
        printf("%d ",dizi1[i]);

    }

    printf("\n\n\n");
    for(int j=0;j<N;j++){
        int enkucuk=INT_MAX;
        int enkucuk_indis;

            for(int k=0;k<N;k++){
                if(dizi1[k]<enkucuk){
                    enkucuk=dizi1[k];
                    enkucuk_indis=k;
                }
            }
            dizi2[j]=enkucuk;//dizi1'i tara en küçük elemanýný bul onu dizi2'nin birinci elemaný yap sonra dizi1'in en küçük 2.elemanýný bul onu dizi2'nin 2. elemaný yap...
            dizi1[enkucuk_indis]=INT_MAX; //en küçük olaný bir daha en küçük seçmeyelim diye ona int maxdiye isim verdik

            }
          for(int y=0;y<N;y++)
            printf("%d ",dizi2[y]);
    return 0;
}
