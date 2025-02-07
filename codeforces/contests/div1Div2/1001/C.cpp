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
        vector<int64_t> a(n);
//        int maxSum = INT_MIN;
        int64_t maxSum = 0;
        int64_t curSum = 0;
//        int sumSum = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int aLen = a.size();
        for(int i = 0 ; i < n ; i++){
            maxSum += a[i];
        }
        while(aLen != 1){
            if(a[aLen - 1] < a[0]){
                reverse(a.begin(), a.end());
            }
            for(int i = aLen - 2 ; i >= 0 ; i--){
                a[i + 1] -= a[i];
            }
            a.erase(a.begin());
            aLen--;
//            test
//            for(int i = 0 ; i < aLen ; i++){
//                cout << a[i] << ' ';
//            }
//            cout << "\n";
            curSum = 0;
            for(int i = 0 ; i < aLen ; i++){
                curSum += a[i];
            }
//            curSum += a[aLen - 1] - a[0];
//            sumSum += curSum;
            maxSum = max(maxSum, curSum);
//            cout << maxSum << "\n";
        }
        cout << maxSum << "\n";
//        cout << sumSum << "\n";

    }
    return 0;
}
