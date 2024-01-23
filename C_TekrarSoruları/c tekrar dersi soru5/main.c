#include <stdio.h>
#include <stdlib.h>

void cevir(char *dizi, int sayi)
{
    int i=4-1;
    while(sayi != 0){
            dizi[i]=sayi%10; // birler basamagý
            sayi /= 10;
            i--;

    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int cevap=0;
    for(int i=n;i<=k;i++){
        char tmp[5];
        cevir(tmp,i);
        int f=1; //basamaklar farklý mý
        for (int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                if(tmp[j]==tmp[k]){
                    f=0;
                }
            }
        }
        if(f==1){
            cevap++;
        }

    }
    printf("%d\n",cevap);
    return 0;
}
