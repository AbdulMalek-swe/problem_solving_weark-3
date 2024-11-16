#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){ 
        ll n;
        cin>>n;
           ll arr[1000][1000];
         for(ll i = 1; i <= n; i++){
            for (ll j = 1; j < n; j++)
            {
              ll x ;
                cin >> x;
                arr[i][j] = x;
            }
            
         }
         map<ll,ll> m;
         map<ll,ll>mp;
         for(ll i=1;i<=n;i++){
              m[arr[i][n-1]]=i;  
              mp[arr[i][n-1]]++;  
         }
         ll ans = 0;
         ll vl = 0;
         for(auto val:mp){
            if(val.second==1) ans = val.first;
            else{
                vl=val.first;
            }
         }
         for(ll i=1;i<n;i++){
            cout<<arr[m[ans]][i]<<" ";
         }
         cout<<vl<<endl;
         
    }
   
    
    return 0;
}
 