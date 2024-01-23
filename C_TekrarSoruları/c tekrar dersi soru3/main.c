#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("d",&n);
    char o[31];
    scanf("%s",o);
    int o_len=strlen(o); // ogrencinin isminin uzunlugu, u for dongusu ile taramak icin
    for(int i=0;i<o_len;i++){
        o[i]+=3; // her harfin ascýý deki karsýlýgýna 3 ekliyoruz
        if (o[i]>'z'){
            int tmp=o[i]-'z';
            o[i]='a'+tmp-1;
        }
    }
    int var_mi=0;
    for(int i=0;i<n;i++){
        char s[31];
        scanf("%s",s);
        if(strcmp(o,s)==0);{
                var_mi=1;

        }
    }
    printf("%d\n",var_mi);




    return 0;
}
