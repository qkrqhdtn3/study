#include <iostream>
#include <string>
#include <map>
#include <vector>
//#include <utility>

//�������� M���� ���� �䱸�ϴ� ���� ��� �Ҷ�, ���ڸ� �Է¹��� �� map�� �־� �ذ��ϰ�,
//���ڸ� �Է¹����� vector �Ǵ� �迭�� �־� �ذ��ϸ� �ȴ�.
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
