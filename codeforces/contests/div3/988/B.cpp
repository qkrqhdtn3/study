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
        int k;
        cin >> k;
        int nm = k - 2;
        vector<int> a(k);
        for(int i = 0 ; i < k ; i++){
            cin >> a[i];
        }
//        for(auto& x : a){
//            cin >> x;
//        }
        map<int,int> aMap;
        for(int i = 0 ; i < k ; i++){
            if(nm % a[i] == 0 && aMap[nm / a[i]]){
                cout << a[i] << " " << nm / a[i] << "\n";
                break;
            }
            aMap[a[i]]++;
        }
    }
    return 0;
}
