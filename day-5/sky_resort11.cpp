#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long int ans = 0;
     long long int sum = 0;  
        for(int i = 0; i < n; i++){
               if(arr[i]<=d){
                ans++;
                 if(i==n-1 || arr[i+1]>d){
                       if(ans>=m){
                         long long  int val = ans-m+1;
                       long long    int sum1 = (val*(val+1))/2;
                          // cout<<ans<<endl;
                           sum+=sum1;
                       }
                        ans = 0;
                 }
               }
        }
          
        cout <<sum<< "\n";
    }
    return 0;
}
