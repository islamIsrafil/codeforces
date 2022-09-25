#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,y;
    long long result=1,i;
    while(t--){
        cin>>s>>y;
        sort(y.begin(), y.end());
        if(y[0]=='a' && y.size()>1){
            result = -1;
        }
        else if(y[0]=='a'){
            result = 1;
        }
        else{
                result = (1ll << s.size());
        }
        cout<<result<<endl;
    }
    return 0;
}