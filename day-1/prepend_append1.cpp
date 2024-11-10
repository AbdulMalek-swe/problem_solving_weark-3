#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        string str;
        cin >> str;
        int k = a - 1;
        int l = 0;
        int ans = a;
        while (k>=l)
        {
            if(str[k]!=str[l]){

                break;
            }else{
                ans -=2;
                k--;
                l++;
            }
        }
        cout<<ans<<"\n";
        
        
    }
    return 0;
}