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
        int a,b;
        cin >> a >> b;
        string str;
        cin >> str;
        int ans =0;
         for (int i = 0; i < a; i++)
         {
            if(str[i] == 'B'){
                ans++;
                i+=b-1;
            }  
         }
         cout << ans << '\n';
         
    }
}
