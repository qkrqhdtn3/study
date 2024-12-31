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
        int64_t k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int64_t kn = 1;
        int64_t ans = 0;
        while(r2 / kn >= l1){
            int lef = max(l1, (l2 - 1) / kn + 1);
            int righ = min(r1, r2 / kn);
            if(lef <= righ){
                ans += righ - lef + 1;
            }
            kn *= k;
        }
        cout << ans << "\n";
    }
    return 0;
}
