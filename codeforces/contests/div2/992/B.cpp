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
        int n;
        cin >> n;
        int x = 1;
        int l, r;
        l = 1;
        r = 1;
        int cnt = 1;
        while(r < n){
            x = r;
            r = 2 * (x + 1);
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
