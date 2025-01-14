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
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0')
            {
                int j = i + 1;
                int zeroCnt = 1;
                if((j - 1) + (m - 1) > n)
                {
                    break;
                }
                while(zeroCnt < m && s[j++] == '0')
                {
                    zeroCnt++;
                }
                j--;
                i = j;
                if(zeroCnt == m)
                {
                    i = j + k - 1;
                    int k1 = k;
                    if(j + (k1 - 1) > n)
                    {
                        operationCnt++;
                        break;
                    }
//                    while(k1--){
//                        s[j + k1] = '1';
//                    }
                    operationCnt++;
                }
            }
        }
        cout << operationCnt << "\n";
    }
    return 0;
}
