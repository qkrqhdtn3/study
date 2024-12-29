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
    while(tt--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        int rem = 0;
        ans += min(m, a);
        rem += m - min(m, a);
        ans += min(m, b);
        rem += m - min(m, b);
        ans += min(rem, c);
        cout << ans << "\n";
    }
    return 0;
}
