#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    map<string, bool> personMap;
    string name;
    vector<string> ans;

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        cin >> name;
        personMap.insert(make_pair(name, true));
    }

    for(int i = 0 ; i < m ; i++){
        cin >> name;
        if(personMap[name]){
            ans.push_back(name);
        }
    }
    cout << ans.size() << '\n';
    sort(ans.begin(),ans.end());
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << '\n';
    }


    return 0;
}
