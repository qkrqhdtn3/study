#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    set<string> nameSet;
    string name1, name2;
    string chongchong;

    cin >> n;
    chongchong = "ChongChong";
    for(int i = 0 ; i < n ; i++){
        cin >> name1 >> name2;
        if(chongchong.compare(name1) == 0 || chongchong.compare(name2) == 0){
            nameSet.insert(name1);
            nameSet.insert(name2);
        }
        if(!nameSet.empty() && nameSet.find(name1) != nameSet.end()){
            nameSet.insert(name2);
        }
        if(!nameSet.empty() && nameSet.find(name2) != nameSet.end()){
            nameSet.insert(name1);
        }
    }

    cout << nameSet.size();
    return 0;
}
