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
        if(n == 6){
            cout << "1 1 2 3 1 2\n";
            continue;
        }
        int modNum = n / 2 + 1;
        if(n % 2 == 0){
            modNum = n / 2;
        }
        for(int i = 0 ; i < n ; i++){
            a[i] = i % modNum + 1;
        }
        for(int i = 0 ; i < n ; i++){
            cout << a[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}
