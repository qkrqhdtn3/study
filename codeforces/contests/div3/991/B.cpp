#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int n;
//    int a[];
    int odNum;
    int evNum;
    int64_t odSum;
    int64_t evSum;
    int odCnt;
    int evCnt;


    cin >> t;
    for(int t1 = 0 ; t1 < t ; t1++){
        cin >> n;
        odSum = 0;
        evSum = 0;
        evCnt = n / 2;
        odCnt = evCnt + n % 2;
        for(int i = 1 ; i <= n / 2 ; i++){
            cin >> odNum >> evNum;
            odSum += odNum;
            evSum += evNum;
        }
        if(odCnt != evCnt){
            cin >> odNum;
            odSum += odNum;
        }
        if(odSum % odCnt == 0 &&
           evSum % evCnt == 0 &&
           odSum / odCnt == evSum / evCnt){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
