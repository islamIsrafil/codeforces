#include<stdio.h>
int main()
{
    unsigned long long n,t;
    scanf("%llu",&t);
    while(t--){
        scanf("%llu",&n);
        if(n==0 || n==1 || n==2)
            printf("0\n");
        else if(n%2==1)
            printf("%llu\n",(n-1)/2);
        else
           printf("%llu\n",(n-2)/2); 
    }
    return 0;
}