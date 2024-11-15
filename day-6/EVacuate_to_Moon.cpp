#include <bits/stdc++.h>
using namespace std;
 #define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
      
    while (t--)
     {
        ll n,m,h;
        cin >> n >> m >> h;
        vector<ll> arr1,arr2;
        for (ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            arr1.push_back(temp);
        }
        for(ll i = 0; i < m; i++) {
          ll temp;
            cin >> temp;
            arr2.push_back(temp);
        }
        sort(arr1.begin(), arr1.end(), greater<ll>());
        sort(arr2.begin(), arr2.end(), greater<ll>());
      ll ans = 0;
        for(ll i = 0; i <min(n,m); i++) {
             
          ll newValue = arr2[i]*h;
             if(newValue>arr1[i]){
                 ans+=arr1[i];
             }else{
                 ans+=newValue;
             }
             
        }
        cout << ans << "\n";
     }
    return 0;
}
