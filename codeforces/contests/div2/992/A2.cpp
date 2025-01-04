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
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        vector<vector<int>> mod(k);
        int iInd = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            mod[a[i] % k].push_back(i);
        }
        for(int i = 0 ; i < k ; i++){
            if(mod[i].size() == 1){
                iInd = mod[i][0];
                break;
            }
        }
        if(iInd != 0){
            cout << "YES\n" << iInd << "\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
