#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>a+1 || (b<a && a!=9))
        cout<<"-1"<<endl;
    else if(a==9 && b==9)
        cout<<"91 92"<<endl;
    else if(a==9 && b!=1)
        cout<<"-1"<<endl;
    else if(a==9 && b==1)
        cout<<"9 10"<<endl;
    else if(a+1==b)
        cout<<a<<" "<<b<<endl;
    else
        cout<<a*10+1<<" "<<b*10+2<<endl;
    return 0;
}