#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<string> g(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> g[i];
        }
        vector<int> p(n);
        for(int i = 0 ; i < n ; i++)
        {
            p[i] = i;
        }
        sort(p.begin(), p.end(),
             [&](int i, int j)
        {
            if(g[i][j] == '1') return i < j;
            else return i > j;
        });


        for(int i = 0 ; i < n ; i++)
        {
            cout << p[i] + 1 << ' ';
        }
        cout << "\n";
    }
    return 0;
}
