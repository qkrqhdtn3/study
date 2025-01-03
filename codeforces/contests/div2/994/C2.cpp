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
    while(tt--)
    {
        int n, x, y;
        cin >> n >> x >> y;
//        x--;
//        y--;
        vector<int> a(n + 1);
        for(int i = 1 ; i <= n ; i++){
            a[(x + i) % n] = i % 2;
        }
        a[n] = a[0];
//        for(int i = n - x + 1 ; i <= n - x ; i++){
//        for(int i = x - 1 ; i >= 1 ; i--){
//            a[i + 1] = a[i];
//        }
        if(n % 2 == 1 || (x - y) % 2 == 0){
            a[x] = 2;
        }
        for(int i = 1 ; i <= n ; i++){
            cout << a[i] << ' ' ;
        }
//        vector<int> a(n);
//        for(int i = 0 ; i < n ; i++)
//        {
//            a[(x + i) % n] = i % 2;
//        }
//        if(n % 2 == 1 || (x - y) % 2 == 0)
//        {
//            a[x] = 2;
//        }
//        for(auto x : a)
//        {
//            cout << x << ' ';
//        }
        cout << "\n";
    }
    return 0;
}
