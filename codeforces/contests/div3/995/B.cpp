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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int cnt = n / (a + b + c);
        int sum = (a + b + c) * cnt;
        cnt *= 3;
        if(n <= sum){
            cout << cnt << "\n";
            continue;
        }
        sum += a;
        cnt++;
        if(n <= sum){
            cout << cnt << "\n";
            continue;
        }
        sum += b;
        cnt++;
        if(n <= sum){
            cout << cnt << "\n";
            continue;
        }
        cout << cnt + 1 << "\n";
        continue;
    }
    return 0;
}
