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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        if(n == k){
            int cur = 0;
            bool flag = false;
            for(int i = 1 ; i < n ; i += 2){
                cur++;
                if(a[i] != cur){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                cout << cur + 1 << "\n";
            }
            else{
                cout << cur << "\n";
            }
            continue;
        }
        int ans = 2;
//        bool flag = false;
        for(int i = 1 ; i <= n - k + 1 ; i++){
            if(a[i] != 1){
                ans = 1;
//                flag = true;
                break;
            }
        }
//        if(flag){
//            ans = 1;
//        }
        cout << ans << "\n";
    }
    return 0;
}
