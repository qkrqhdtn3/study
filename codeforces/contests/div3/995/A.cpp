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
        int a[n + 1];
        int b[n + 1];
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
        }
        b[n] = 0;
        int sum = 0;
        for(int i = 1 ; i <= n ; i++){
            if(a[i] > b[i]) sum += a[i] - b[i];
        }
        cout << sum << "\n";
    }
    return 0;
}
