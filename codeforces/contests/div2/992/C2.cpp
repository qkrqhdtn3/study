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
        int64_t k;
        cin >> n >> k;
        k--;
        if(n <= 40 && k >= (1LL << (n - 1))){
            cout << -1 << "\n";
            continue;
        }
        vector<int> p(n);
        int l = 0;
        int r = n - 1;
        for(int i = 1 ; i < n ; i++){
            if(n - 1 - i > 40 || k < (1LL << (n - 1 - i))){
                p[l++] = i;
            }
            else{
                p[r--] = i;
                k -= (1LL << (n - 1 - i));
            }
        }
        p[l] = n;
        for(int i = 0 ; i < n ; i++){
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
