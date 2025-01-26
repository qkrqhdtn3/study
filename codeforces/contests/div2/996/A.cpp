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
        int a, b, n;
        cin >> n >> a >> b;
        int tmp;
        if(a < b){
            tmp = a;
            a = b;
            b = tmp;
        }
        if((a - b) % 2 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
