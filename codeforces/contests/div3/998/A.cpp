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
        vector<int> a(5);
        for(int i = 0 ; i < 5 ; i++){
            if(i == 2){
                continue;
            }
            cin >> a[i];
        }
        map<int,int> fibMap;
        fibMap[a[1] + a[0]]++;
        fibMap[a[3] - a[1]]++;
        fibMap[a[4] - a[3]]++;
        int fibMax = INT_MIN;
        for(auto a : fibMap){
            fibMax = max(fibMax, a.second);
        }
        cout << fibMax++ << "\n";
    }
    return 0;
}
