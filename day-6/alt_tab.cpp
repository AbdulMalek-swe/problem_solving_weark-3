#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
     map<string,int>mp;
        string s;
        stack<string>st;
    while (t--)
    {
       
        cin>>s;
        // if(mp[s]==0){
        st.push(s);
        // }
        // mp[s]++;  /  

    }
    string ans;
    while(!st.empty()){
        // cout<<st.top() <<endl;
        if(mp[st.top()]==0){
          ans =   st.top().substr(st.top().length() - 2);
      cout<<ans;
        }
        mp[st.top()]++;
      
        st.pop();
    }
    return 0;
}
