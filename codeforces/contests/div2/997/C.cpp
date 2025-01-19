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
        int n;
        cin >> n;
        vector<int> ans(n + 1, 0);
        if(n % 2 == 0)
        {
            int ptr = 1;
            for(int i = 1 ; i <= n ; i += 2){
                ans[i] = ptr;
                ans[i + 1] = ptr;
                ptr++;
            }
        }
        else
        {
            if(n <= 25)
            {
                cout << -1 << "\n";
                continue;
            }
            else{
                int ptr = 1;
                ans[1] = ptr;
                ans[1 + 9] = ptr;
                ans[1 + 9 + 16] = ptr;
                ptr++;
                ans[2 + 9] = ptr;
                ans[2 + 9 + 16] = ptr;
                ptr++;
                for(int i = 2 ; i <= 9 ; i += 2){
                    ans[i] = ptr;
                    ans[i + 1] = ptr;
                    ptr++;
                }
                for(int i = 12 ; i <= 25 ; i += 2){
                    ans[i] = ptr;
                    ans[i + 1] = ptr;
                    ptr++;
                }
                for(int i = 28 ; i <= n ; i += 2){
                    ans[i] = ptr;
                    ans[i + 1] = ptr;
                    ptr++;
                }
            }
        }
        for(int i = 1 ; i <= n ; i++){
            cout << ans[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}
