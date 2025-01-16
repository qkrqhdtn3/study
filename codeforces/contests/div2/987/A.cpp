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
        vector<int> freq(n + 1);
        for(int i = 1 ; i <= n ; i++){
            int height;
            cin >> height;
            freq[height]++;
        }
        int freqMaxCnt = INT_MIN;
        for(int i = 1 ; i <= n ; i++){
            freqMaxCnt = max(freqMaxCnt, freq[i]);
        }
        cout << n - freqMaxCnt << "\n";
    }
    return 0;
}
