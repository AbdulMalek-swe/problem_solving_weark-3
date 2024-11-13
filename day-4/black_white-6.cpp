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
        int counts = 0;
         for(int i=0;i<a;i++){
                if(str[i]=='W'){
                    counts++;
                }
            }
         
         int result = counts;
         for(int i=b;i<a;i++){
            if(str[i]=='W'){
                counts++;
            }
            if(str[i-b]=='W'){
                counts--;
            }
            result = min(result,counts);
         }
        // int count = 0;
        // int l=b-1;
        //   int r = 0;
        //   int result = INT_MAX;
        //   while (a>l )
        //   {
        //     while(r<l){
        //         if(str[r]=='W'){
        //             count++;
        //         }
        //         r++;
                 
        //     }
           
        //     r = l-l+1;
        //     l++;
        //     r=r-(b-1);
        //      result = min(result,count);
        //      count = 0;
             
        //   }
          
 
        cout << result << "\n";

    }
}
