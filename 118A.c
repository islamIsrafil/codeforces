#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i,l;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0; i<l; i++){
      if(a[i]!='a' && a[i]!='A' && a[i]!='e' && a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U' && a[i]!='y' && a[i]!='Y')
    {
    if(a[i]<='Z')a[i]+=32;
    printf(".%c",a[i]);
    }
    }
    printf("\n");
    return 0;
}