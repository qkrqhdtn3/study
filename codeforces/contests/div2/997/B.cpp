#include <bits/stdc++.h>

using namespace std;

bool compare(int x, int y)
{

}
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
        vector<string> g(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> g[i];
        }
        vector<int> p(n, -1);

        int cnt;
        for(int i = 0 ; i < n ; i++){
            cnt = 0;
            for(int j = i + 1 ; j < n ; j++){
                if(g[i][j] == '1'){
                    cnt++;
                }
            }
            for(int j = n - 1 ; j >= 0 ; j--){
                if(p[j] == -1){
                    if(cnt == 0){
                        p[j] = i;
                        break;
                    }
                    cnt--;
                }
            }
//            for(int j = 0 ; j < n ; j++){
//                if(p[j] == -1){
//                    if(cnt == 0){
//                        p[j] = i;
//                        break;
//                    }
//                    cnt--;
//                }
//            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            cout << p[i] + 1 << ' ';
        }
        cout << "\n";
    }
    return 0;
}
