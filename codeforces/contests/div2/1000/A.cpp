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
        int l, r;
        cin >> l >> r;
        if(l == 1 && r == 1){
            cout << 1 << "\n";
            continue;
        }
        cout << r - l << "\n";
    }
    return 0;
}
