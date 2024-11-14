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
         vector<int> a;
         int n;
         cin >> n;
         for (int i = 0; i < n; i++){
             int x;
             cin >> x;
             a.push_back(x);
         }
         int min1 =  a[n-2]-a[1];
         int min2 =  a[n-1]-a[2];
         int min3 = a[n-2]-a[0];
         cout<<min(min1,min(min2,min3))<<"\n";
    }
    return 0;
}
