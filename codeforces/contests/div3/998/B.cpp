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
        vector<vector<int>> cowCard(n, vector<int> (m));
        vector<int> modNCnt(n);
        for(int i = 0 ; i < n ; i++){
            int input;
            cin >> input;
            cowCard[i][0] = input;
            modNCnt[input % n]++;
            for(int j = 1 ; j < m ; j++){
                int input;
                cin >> input;
                cowCard[i][j] = input;
                if(cowCard[i][j - 1] % n == input % n){
                    modNCnt[input % n]++;
                }
            }
        }
        bool flag = false;
        for(int i = 0 ; i < n ; i++){
            if(modNCnt[i] != m){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << -1 << "\n";
            continue;
        }
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            ans[cowCard[i][0] % n] = i + 1;
        }
        for(int i = 0 ; i < n ; i++){
            cout << ans[i] << ' ';
        }
//        for(int i = 0 ; i < n ; i++){
//            for(int j = 0 ; j < m ; j++){
//                cout << cowCard[i][j] << ' ';
//            }
//        }
        cout << "\n";
    }
    return 0;
}
