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
        string str1, str2;
        cin >> str1 >> str2;
        char ch1 = str1[str1.size() - 1];
        char ch2 = str2[str2.size() - 1];
        if(ch1=='M' && ch2=='M'){
            cout << "=" << endl;
             
        }
        else if (ch1 == ch2)
        {
            if (str1.size() == str2.size())
            {
                cout << "=" << endl;
            }
          else  if (ch1 == 'S')
            {
                if (str1.size() > str2.size())
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }else{
               if(str1.size() > str2.size()) {
                cout<<">"<<endl;
              }else{
                cout<<"<"<<endl;
              }
            }
        }
        else if(ch1=='L'||ch2=='L'){
            if(ch1=='L'){
                cout<<">"<<endl;
            }else{
                cout<<"<"<<endl;
            }
        }
        else if(ch1=='M' || ch2=='M'){
             if(ch1=='M'){
                cout<<">"<<endl;
             }else{
                cout<<"<"<<endl;
             }
        }
    }
    return 0;
}
