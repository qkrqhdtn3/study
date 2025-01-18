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
        int n, m;
        cin >> n >> m;
        vector<int> x(n), y(n);
        for(int i = 0 ; i < n ; i++){
            cin >> x[i] >> y[i];
        }
//        int perimeter = 4 * m * n;
//        for(int i = 0 ; i < n - 1 ; i++){
////            perimeter -= 2 * (x[i + 1] - x[i]) + 2 * (y[i + 1] - y[i]);
//            perimeter -= (2 * (m + x[i] - x[i + 1]) + 2 * (m + y[i] - y[i + 1]));
////                    cout << perimeter << "\n";
//        }
//        cout << perimeter << "\n";

        if(n == 1){
            cout << 4 * m << "\n";
            continue;
        }
        int perimeter = 0;
        for(int i = 2 ; i < n ; i++){
//            int topLen = (x[i + 1] - x[i]);
            int topLen = x[i];
//            int bottomLen = (m + x[i]) - (m + x[i - 1]);
            int bottomLen = x[i - 1];
//            int rightLen = (m + y[i]) - y[i + 1];
            int rightLen = y[i];
//            int leftLen = (m + y[i]) - (m + y[i - 1]);
            int leftLen = y[i - 1];
            perimeter += topLen + bottomLen + rightLen + leftLen;
        }
        int topLen = x[1];
        int bottomLen = m;
        int rightLen = y[1];
        int leftLen = m;
        perimeter += topLen + bottomLen + rightLen + leftLen;
        topLen = m;
        bottomLen = x[n - 1];
        rightLen = m;
        leftLen = y[n - 1];
        perimeter += topLen + bottomLen + rightLen + leftLen;
        cout << perimeter << "\n";
    }
    return 0;
}
