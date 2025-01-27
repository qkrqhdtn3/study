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
        bool flag = false;
        int cur;
        int prev;
        int diff;
        cin >> prev;
        for(int i = 1 ; i < n ; i++){
            cin >> cur;
            diff = cur - prev;
            if(diff < 0){
                diff = -1 * diff;
            }
            if(!(diff == 5) && !(diff == 7)){
                flag = true;
            }
            prev = cur;
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
