#include <iostream>
#include <map>
//#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // �����
    int n;
    // map �ڷ����� ����° ���ںκ��� Compare �ʱⰪ�� less<>�̰� ���������̴�.
    // greater<>����ü�� ������ ������������ ���ĵȴ�.
    map<string, string> m;
    //map<string, string,greater<>> m;
    map<string, string>::iterator mIt;
    string name;
    string state;
    // body
    // �Է�
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> name >> state;
        m[name] = state;
    }
    // �ʱ�Ŀ� mIt = m.end() - 1�� �Ұ��� mIt�� LegacyBidirectionalIterator�̰�
    // mIt�� ǥ���Ŀ��� ��������� - �� ���� ���������� -- �� �����Ѵ�.
    // ���� mIt - 1�� �Ұ����ϰ� --mIt�� ����ؾ� �Ѵ�.
    for(mIt = --m.end(); mIt != m.end(); mIt--){
    // for(mIt = m.begin(); mIt != m.end(); mIt++){
        if(mIt->second == "enter"){
            cout << mIt->first << '\n';
        }
    }
    return 0;
}
