#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    int x,y;
    multiset<int> st;
    for (int i = 0; i < a; i++){
        cin >> x;
        st.insert(x);
    }
    for (int i = 0; i < b; i++){
        cin >> y;
       st.insert(y);
    }
    // print it 
    for(auto &it:st){
        cout << it << " ";
    }
}
