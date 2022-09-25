#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,ans;
    cin>>n>>m>>a;

    ans=ceil((double)n/a)*ceil((double)m/a);
    cout<<ans<<endl;
   return 0;
}
