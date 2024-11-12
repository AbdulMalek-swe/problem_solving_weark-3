#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
     int x,y,z;
     cin >> x >> y >> z;
     int d1 = z+(y*.5);
     int k = 4-z;
     if(k>d1){
         cout << "YES"<<endl;
     }else{
         cout << "NO" << endl;
     }
    
   return 0;
}