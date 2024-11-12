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
         int n;
         cin>>n;
         priority_queue<int>pq;
         int sum=0;
         int ans = 0;
         int min_val = INT_MAX;
         while (n--)
         {
             int x;
             cin>>x;
             if(x<0){
                 pq.push(x);
                 sum =-1*x;
                 min_val = min(min_val, x);
             }else{
                ans += x;
             }
            if(pq.size()%2==1){
                sum = -1*sum;
                sum=sum-min_val;
            }else{
                sum = -1*sum;
                sum=sum+ans;
            }
             
         }
         cout<<sum<<"\n";
          
     }
     
    return 0;
}                     