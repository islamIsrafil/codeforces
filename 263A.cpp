#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,ans;
    for(i=1; i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>x;
            if(x==1)
                ans=abs(i-3)+abs(j-3);
        }
    }
    cout<<ans<<endl;
    return 0;
}
