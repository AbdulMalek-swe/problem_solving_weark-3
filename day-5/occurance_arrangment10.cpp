#include <bits/stdc++.h>
using namespace std;
int solve(const string& str1, const string& str2) {
    int n = str1.length();
    int m = str2.length();
    if (m > n) {
        
        return 0;
    } 
    vector<int> str1_freq(26, 0), str2_freq(26, 0);
     
    for (int i = 0; i < m; ++i) {
        str1_freq[str1[i] - 'a']++;
        str2_freq[str2[i] - 'a']++;
    }

    int count = 0; 
    if (str1_freq == str2_freq) {count++; }
    for (int i = m; i < n; ++i) { 
        str1_freq[str1[i] - 'a']++; 
        str1_freq[str1[i - m] - 'a']--;
        if (str1_freq == str2_freq){ count++;}
    }
     return count;
}
// solve from google meet consultant 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str1, str2;
    cin >> str1 >> str2;
    solve(str1, str2);
}




// #include <bits/stdc++.h>
// using namespace std;
// int  solve(string str1,string str2){
//     int n = str1.length();
//     int m = str2.length();
//     string st = "";
//     sort(str2.begin(),str2.end());
//     int r = 0;
//     int l = m-1;
//     int count = 0;
//     while(l<n){
//        while (r<=l)
//        { 
//           st += str1[r];
//           r++;

//        }
//        --r;
//        ++l;
//        r = l-m+1; 
//        sort(st.begin(),st.end()); 
//        if(st==str2){
//         count++;
//        }
//         st="";

//     }
//     // cout<<count << '\n';
//     return count;

// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string str,str1;
//     cin >> str >> str1;
//    cout<< solve(str,str1);

// }
