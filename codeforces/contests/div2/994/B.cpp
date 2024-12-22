#include <bits/stdc++.h>

using namespace std;

int main()
{
//    std::ifstream in("input.txt");
//    std::cin.rdbuf(in.rdbuf());
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
        string s;
        cin >> s;
        if(s.front() == 's') s.front() = '.';
        if(s.back() == 'p') s.back() = '.';
        bool hasP = false;
        bool hasS = false;
        for(auto c : s){
            if(c == 'p'){
                hasP = true;
            }
            else if(c == 's'){
                hasS = true;
            }
        }
        if(hasP && hasS){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}
