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
        string x;
        cin >> x;
        int sum11[2] = {};
        int cnt[2] = {};
        int sum3 = 0;
        for(int i = 0 ; i < x.length() ; i++)
        {
            sum11[i%2] += x.at(i) - '0';
            sum3 += x.at(i) - '0';
        }
        if((sum11[0] - sum11[1]) % 11 == 0 &&
           sum3 % 3 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
