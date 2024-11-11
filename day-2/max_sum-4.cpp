#include<bits/stdc++.h>
using namespace std;
   long long maximumSumSubarray(vector<int>& arr, int k) {
        int sum = 0;
        int ans = 0;
        int l = 0;
        int r=0;
        while(r<=arr.size()-1){
            sum =sum+arr[r];
            if(r-l+1==k){
                ans = max(ans,sum);
                sum=sum-arr[l];
                l++;r++;
                
            }else{
                r++;
            }
        }
       
       return ans;
    }
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<< maximumSumSubarray(v,k);
}