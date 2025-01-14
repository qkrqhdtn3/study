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
        int n, m, k;
        string s;
        cin >> n >> m >> k;
        cin >> s;
        int operationCnt = 0;
        int cnt = 0;
//        int ans = 0;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '1'){
                cnt = 0;
            }
            else{
                cnt++;
                if(cnt == m){
                    i += k - 1;
                    operationCnt++;
                    cnt = 0;
                }
            }
        }
        cout << operationCnt << "\n";
    }
    return 0;
}
