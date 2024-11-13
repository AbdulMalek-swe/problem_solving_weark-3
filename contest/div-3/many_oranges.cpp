#include <bits/stdc++.h>
using namespace std;

int dp[101][1001];
bool solve(int n,int sum) {
   
  if(n==0){
     if(sum==0) return true;
     else return false;
  }
 // add memorzation code here 
  if(sum<0) return false;
  if(sum==0) return true;
  if(dp[n][sum]!=-1) return dp[n][sum];
 // add memoization code here 
  
  dp[n][sum] = solve(n-1, sum-10) || solve(n-1, sum-12)|| solve(n-1, sum-11);
  return dp[n][sum];

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
       int n,k;
       cin >> n >> k;
       if(solve(n, k)){
         cout << "YES" << endl;
       }else{
         cout << "NO" << endl;
       }
    }
   
}
