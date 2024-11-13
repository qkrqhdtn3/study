#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    map<string, bool> sMap;
    string subStr;

    cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        for(int j = i ; j < s.length() ; j++){
            subStr = s.substr(i, j - i + 1);
            sMap.insert(make_pair(subStr, true));
        }
    }
    cout << sMap.size();
    return 0;
}
