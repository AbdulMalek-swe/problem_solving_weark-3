#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int q;
     cin>>q;
     while (q--)
     {
         int n,m,z;
         cin >> n >> m >> z;
         int a1 = n * m;
         int a2 = n / 2;
         int a3 = n%2;
         int ans;
         if(a3==1){
             ans =  m+a2*z;
         }
         else{
             ans =  a2*z;

         }
         cout<<max(a1,ans)<<"\n";
     }
     
    return 0;
}