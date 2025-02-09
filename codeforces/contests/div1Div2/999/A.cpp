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
        bool hasEven = false;
        int oddCnt = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(a[i] % 2 == 1){
                oddCnt++;
            }
            else{
                hasEven = true;
            }
        }
        int s = 0;
        if(hasEven){
            s++;
        }
        else{
            s--;
        }
        s += oddCnt;
        cout << s << "\n";
    }
    return 0;
}
