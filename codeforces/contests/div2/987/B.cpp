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
        vector<int> p(n + 1);
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> p[i];
        }
        for(int i = 1 ; i < n ; i++)
        {
            if(i != p[i])
            {
                if(i == p[i + 1] &&
                        (p[i + 1] - p[i] == 1 || p[i + 1] - p[i] == -1))
                {
                    int tmp = p[i];
                    p[i] = p[i + 1];
                    p[i + 1] =tmp;
                }

            }
        }
        bool flag = false;
        for(int i = 1 ; i <= n ; i++)
        {
            if(i != p[i])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
