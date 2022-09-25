#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string S;
    cin>>n;
    for(int i=0; i<n; i++){
        int cnt=0;
        cin>>S;
        for(int j=1; j<S.size()-1;j++){
            cnt++;

        }
        if(S.size()<=10)
        {
            cout<<S<<endl;
        }
        else
            cout<<S[0]<<cnt<<S[S.size()-1]<<endl;
    }

}
