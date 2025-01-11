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
        int sum = 0;
        int cur = 1;
        int happy = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            sum += a[i];
            while(sum > cur * cur){
                cur += 2;
            }
            if(sum == cur * cur){
                happy++;
            }
        }
        cout << happy << "\n";
    }
    return 0;
}
