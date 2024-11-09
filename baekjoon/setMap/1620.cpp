#include <iostream>
#include <string>
#include <map>
#include <vector>
//#include <utility>

//문제에서 M개의 줄이 요구하는 것을 출력 할때, 문자를 입력받을 시 map에 넣어 해결하고,
//숫자를 입력받을시 vector 또는 배열에 넣어 해결하면 된다.
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    map<string, int> pokemonMap;
    vector<string> pokemonVec;
    string pokemonName;
    string input;
    int inputNum;

    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        cin >> pokemonName;
        pokemonVec.push_back(pokemonName);
        pokemonMap.insert(make_pair(pokemonName, i));
    }
    for(int i = 0 ; i < m ; i++){
        cin >> input;
        if(input[0] >= 65){
            cout << pokemonMap.find(input)->second << '\n';
        } else{
            inputNum = stoi(input) - 1;
            cout << pokemonVec[inputNum] << '\n';
        }
    }
    return 0;
}
