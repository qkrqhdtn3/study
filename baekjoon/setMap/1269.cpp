#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int aCnt, bCnt;
    map<int, bool> aMap;
    int unionCnt;
    int num;

    unionCnt = 0;
    cin >> aCnt >> bCnt;
    for(int i = 0 ; i < aCnt ; i++){
        cin >> num;
        aMap.insert(make_pair(num, true));
    }
    for(int i = 0 ; i < bCnt ; i++){
        cin >> num;
        if(aMap[num]){
            unionCnt++;
        }
    }

    cout << aCnt + bCnt - 2 * unionCnt;
    return 0;
}
