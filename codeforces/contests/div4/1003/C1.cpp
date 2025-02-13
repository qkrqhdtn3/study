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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < m ; i++){
            cin >> b[i];
        }
        bool flag = false;
        a[0] = min(b[0] - a[0], a[0]);
        for(int i = 1 ; i < n ; i++){
            int minNum = min(b[0] - a[i], a[i]);
            int maxNum = max(b[0] - a[i], a[i]);
            if(minNum >= a[i - 1]){
                a[i] = minNum;
            }
            else if(maxNum >= a[i - 1]){
                a[i] = maxNum;
            }
            else{
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}
