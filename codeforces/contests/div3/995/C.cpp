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
        int n, m, k;
        cin >> n >> m >> k;
        bool a[n + 1];
//        int aOrd[n + 1];
        memset(a,0,n + 1);
//        memset(aOrd,0,4 * (n + 1));
        int num;
        for(int i = 0 ; i < m ; i++){
            cin >> num;
            a[num] = true;
//            aOrd[i] = num;
        }
        bool q[n + 1];
        memset(q,0,n + 1);
        for(int i = 0 ; i < k ; i++){
            cin >> num;
            q[num] = true;
        }
        int cnt = 0;
        int ptr = 0;
        for(int i = 1 ; i <= n ; i++){
            if(!q[i]){
                ptr = i;
                cnt++;
            }
        }
        if(cnt >= 2){
            string s = "";
            for(int i = 0 ; i < m ; i++){
                s += "0";
            }
            cout << s << "\n";
            continue;
        }
        if(cnt == 1){
            string s = "";
            for(int i = 1 ; i < ptr ; i++){
                if(a[i]){
                    s += "0";
                }
            }
            if(a[ptr]){
                s += "1";
            }
            for(int i = ptr + 1 ; i <= n ; i++){
                if(a[i]){
                    s += "0";
                }
            }
            cout << s << "\n";
            continue;
        }
        else{
            string s = "";
            for(int i = 0 ; i < m ; i++){
                s += "1";
            }
            cout << s << "\n";
            continue;
        }
    }
    return 0;
}
