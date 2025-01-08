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
        vector<bool> visited(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(visited[i]){
                continue;
            }
            for(int j = i + 1 ; j < n ; j++){
                if(visited[i] || visited[j]){
                    continue;
                }
//                if(a[i] == a[j] && !visited[i] && !visited[j]){
                if(a[i] == a[j]){
                    visited[i] = true;
                    visited[j] = true;
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
