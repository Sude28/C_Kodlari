#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ortaklaribul(int x[],int y[], int z[], int n){
    int i,j,k,sayac=0;

    for(i=0;i<n;i++){
            for(k=0;k<i;k++)
                if(x[k]==x[i])
                     break;
             if(k!=i) // yani break calistiysa(x[i] daha onceden aranmis bir deger ise)
                continue; // bir sonraki iterasyona gec

        for(j=0;j<n;j++){
            if(x[i]==y[j])
              break;
        }

         if(j<n) // break calisirsa j<n olur. yani eslesme olmussa
            z[sayac++]=x[i];
}
}

int main()
{
    srand(time(0));
    int a[50],b[50],c[51];
    int n=50;

    for(int i=0;i<n;i++){
        a[i]=(rand()%1000)+1;
        b[i]=(rand()%1000)+1;
    }

    printf("Ilk dizi: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);


    printf("\n\nIkinci dizi: ");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);

    for(int i=0;i<n+1;i++)
        c[i]=-1; // kac tane ortak eleman oldugunu bilmiyoruz. butun elemanlar baslangýcta -1 olcak sonra bunun býr kýsmý doldurulcak en yakýn -1'i gorene kadar ortak elemanlar o kadardýr.51 eleman olmasýnýn nedeni 50 eleman da aynýysa sonunda -1 olcak yani dur anlamýnda

     ortaklaribul(a,b,c,n);

     if(c[0]==-1)
        printf("\n\nOrtak eleman bulunamadi!!!");
     else{
        printf("\n\n Bulunan ortak elemanlar:");
        int e=0;
        while(c[e]!=-1){
            printf("%d ",c[e++]);
        }
     }
    return 0;
}
