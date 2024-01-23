#include <stdio.h>
#include <stdlib.h>


int main()

{
    int n;
    scanf("%d",&n);
    char o[31],s[100][31];
    int a[30], not=-1;
    scanf("%s",o); // aranacak ogrenci
    for(int i=0;i<n;i++){
            scanf("%s%d",s[i],&a[i]);
            if(strcmp(o,s[i])== 0){ //kelimeler esitse 0 döndurur
                    not = a[i];

            }
    }
    printf("%d\n",not);
    return 0;
}
