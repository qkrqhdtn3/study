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
        int a, b;
        cin >> a >> b;
        int p, q, r;
        q = a;
        r = b;
        while(r > 0){
            p = q;
            q = r;
            r = p % q;
        }
        cout << (a / q) * (b / q) * q << "\n";
    }
    return 0;
}
