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
        int n;
        cin >> n;
             set<int>s;
             vector<int>a;
        for(int i = 0; i < n; i++) {
         int x;
         cin >> x;
         a.push_back(x);
        }
        int count = 0;
          for(int i = n-1; i >=0; i--) {
               if(s.count(a[i]))  break;  
                s.insert(a[i]);
                count++;
         } 
         cout << n-count << "\n";
     }
    return 0;
}
