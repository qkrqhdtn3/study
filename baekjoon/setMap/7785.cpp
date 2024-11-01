#include <iostream>
#include <map>
//#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 선언부
    int n;
    // map 자료형의 세번째 인자부분의 Compare 초기값은 less<>이고 내림차순이다.
    // greater<>구조체를 넣으면 오름차순으로 정렬된다.
    map<string, string> m;
    //map<string, string,greater<>> m;
    map<string, string>::iterator mIt;
    string name;
    string state;
    // body
    // 입력
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> name >> state;
        m[name] = state;
    }
    // 초기식에 mIt = m.end() - 1는 불가능 mIt는 LegacyBidirectionalIterator이고
    // mIt의 표현식에는 산술연산자 - 가 없고 증감연산자 -- 는 존재한다.
    // 따라서 mIt - 1은 불가능하고 --mIt를 사용해야 한다.
    for(mIt = --m.end(); mIt != m.end(); mIt--){
    // for(mIt = m.begin(); mIt != m.end(); mIt++){
        if(mIt->second == "enter"){
            cout << mIt->first << '\n';
        }
    }
    return 0;
}
