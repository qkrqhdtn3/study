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
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        bool flag = false;
        for(int i = 0 ; i < n ; i++){
            if(a[i] <= max(2 * i, 2 * (n - i - 1))){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
