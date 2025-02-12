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
        string s;
        cin >> s;
        s.erase(s.size() - 2, 2);
        s.append("i");
        cout << s << "\n";
    }
    return 0;
}
