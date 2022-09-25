#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    int a[2005];
    set<int> st;
    cin >> n;
    for(int i = 0;i < 2*n;i++)
        cin >> a[i],st.insert(a[i]);
     if(st.size() == 1)
        cout << "-1" << endl;
     else
     {
         sort(a,a+2*n);
         for(int i = 0;i < 2 * n;i++)
            cout << a[i]<< " ";
     }
     return 0;
 }