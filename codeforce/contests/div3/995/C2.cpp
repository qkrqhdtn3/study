#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m, 0);
        for(int i = 0 ; i < m ; i++){
            cin >> a[i];
        }
        vector<int> q(k, 0);
        for(int i = 0 ; i < k ; i++){
            cin >> q[i];
        }
        vector<bool> visited(n + 1, false);
        for(int i = 0 ; i < k ; i++){
            visited[q[i]] = true;
        }
        for(int i = 0 ; i < m ; i++){
            if(k == n || k == n - 1 && !visited[a[i]]){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        cout << "\n";
    }
    return 0;
}
