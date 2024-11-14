// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
   cin>>n;
   
    while(n--){
         int a,b;
         cin>>a;
         map<int,int>mp;
         for(int i=0;i<a;i++){
             int k;
             cin>>k;
             if(k!=0){
                 mp[k]++;
             }
         }
         if(mp.size()<2){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
    }
    return 0;
}