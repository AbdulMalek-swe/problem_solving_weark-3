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
        cin >> n;
        ll count = 0;
        ll sum = 0;
        ll neg = 0;
        vector<ll> arr;
        for(ll i = 0; i < n; i++){
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        for(ll i = 0; i < n; i++){
             sum+=abs(arr[i]);
             if(arr[i]<0) {
                if(neg==0)
                {
                    neg = 1;
                    count++;
                }
             }
             else if(arr[i]>0) neg = 0;
        }
         cout << sum << " " << count << "\n";
    }
   
    
    return 0;
}
