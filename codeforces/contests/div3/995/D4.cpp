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
        int64_t x, y;
        cin >> n >> x >> y;
        int a[n];
        int64_t sum = 0;
        int64_t ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        for(int i = 0 ; i < n ; i++){
            int64_t lef = sum - y - a[i];
            int64_t righ = sum - x - a[i];
            int l = lower_bound(a, a + n, lef) - a;
            int r = upper_bound(a, a + n, righ) - a - 1;
            ans += r - l + 1;
            if(l <= i && i <= r) ans--;
        }
        cout << ans / 2 << "\n";
    }

    return 0;
}
