#include<stdio.h>
#include<string.h>
int main()
{
    char s[105],temp;
    int l,i,j;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0; i<l-1; i+=2){
        for(j=0; j<l-i-2; j+=2){
            if(s[j]>s[j+2]){
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    printf("%s\n",s);
}