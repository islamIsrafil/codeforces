#include<bits/stdc++.h>
using namespace std;
bool go(int *a,int n,int k){
	int m[k];
	int sum=0;

	for(int i=0;i<n;i++){
		sum+=a[i];
		m[(sum%k+k)%k]++;
	}
	for(int i=0;i<k;i++){
		if(m[i]==0 || m[i]>1){
			return true;
		}
	}
	return false;
}
int main() {
	int n,k;
    cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(go(a,n,k)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

	return 0;
}
