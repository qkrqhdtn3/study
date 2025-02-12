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
        int n = s.size();
        bool flag = false;
        for(int i = 0 ; i < n - 1 ; i++){
            if(s[i] == s[i + 1]){
                flag = true;
            }
        }
        if(flag){
            cout << "1\n";
        }
        else{
            cout << n << "\n";
        }
    }
    return 0;
}
