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
        int ptr = 0;
        if(n <= 4){
            cout << "-1\n";
            continue;
        }
        for(int i = 1 ; i <= n ; i += 2){
            if(i == 5){
                continue;
            }
            a[ptr++] = i;
        }
        a[ptr++] = 5;
        a[ptr++] = 4;
        for(int i = 2 ; i <= n ; i += 2){
            if(i == 4){
                continue;
            }
            a[ptr++] = i;
        }
        for(int i = 0 ; i < n ; i++){
            cout << a[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}
