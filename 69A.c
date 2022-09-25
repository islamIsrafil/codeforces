#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    int x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d%d%d",&j,&k,&l);
        x += j;
        y += k;
        z += l;
    }
    if(x==0 && y==0 && z==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}