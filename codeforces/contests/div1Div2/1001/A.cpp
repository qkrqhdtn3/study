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
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1') cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
