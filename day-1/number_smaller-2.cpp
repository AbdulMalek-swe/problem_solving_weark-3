#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int a,b;
     cin>>a>>b;
     vector<int> arr,arr1;
     for(int i=0;i<a;i++){
         int x;
         cin>>x;
         arr.push_back(x);
     }
     for(int i=0;i<b;i++){
         int x;
         cin>>x;
         arr1.push_back(x);
     }
     int l=0,r=0;
     int cnt=0;
     while (r<=b)
     {
         if( l<a arr[l]<arr[r]){
            cnt++;
            l++;
         }else{
           
            cout<<cnt<<endl;
            r++;
          
         }
     }
     
    return 0;
}