#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        int t, n, k;
        cin >> t >> n >> k;
        priority_queue<int> pq;
        while (t--)
        {
            int l, m;
            cin >> l >> m;
            if (m == k)
            {
                pq.push(l);
            }
        }
        int ans = 0;
        if (!pq.size() || pq.size()<n)
        {
            cout << "-1" << endl;
        }
        else
        {
            while (pq.size() && n--)
            {
                ans += pq.top();
                pq.pop();
            }
            if (ans == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }

    return 0;
}