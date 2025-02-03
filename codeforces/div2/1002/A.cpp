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
        vector<int> a(n);
        vector<int> b(n);
        set<int> sa;
        set<int> sb;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            sa.insert(a[i]);
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
            sb.insert(b[i]);
        }
        int saSize = sa.size();
        int sbSize = sb.size();
        if(saSize >= 3 && sbSize >= 1){
            cout << "YES";
        }
        else if(saSize == 2 && sbSize >= 2){
            cout << "YES";
        }
        else if(saSize == 1 && sbSize >= 3){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}
