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
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        bool flag = false;
        int iInd = 0;
        int val = 0;
        for(int i = 0 ; i < n ; i++)
        {
            flag = false;
            for(int j = 0 ; j < n ; j++)
            {
//                if(i != j){
//                    val = a[i] - a[j];
//                    if(val < 0){
//                        val = 0 - val;
//                    }
//                    if(val % k != 0){
//                        flag = true;
//                        iInd = i + 1;
//                    }
//                }
                if(i == j){
                    continue;
                }
                val = a[i] - a[j];
                if(val < 0)
                {
                    val = 0 - val;
                }
                if(val % k == 0)
                {
                    flag = true;
                    j = n;
                }
            }
            if(!flag){
                iInd = i + 1;
                i = n;
            }
        }
        if(iInd)
        {
            cout << "YES\n" << iInd << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
