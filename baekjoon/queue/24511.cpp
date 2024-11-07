#include <iostream>
#include <queue>
#include <stack>

using namespace std;
//���� �ذ� ���
//1. ť ������ �̿��� ���Ʈ����
//2. ������ ������ ���� �׸����� �����ϰ�, ��������� ���� ������ �Է°� ��¿� ������ ���� �ʰ�,
//��������� ť �ڷᱸ���� �͵鸸 �Է¿� �ǹ̰� �ְ�, �Է¹��� �������� ť�� �־� �Է¹��� ������� ����ϸ� ������ �ذ��� �� �ִ�.
//�Է¹��� ������ ����� ����� ���ÿ� �־��� ���� �ȴ�.
//q s s q
//1 2 3 4
//2 2 3 1 4
//4 2 3 2 1
//7 2 3 4 2
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int m;
    int inputNum;
    bool inputBool;
    bool isStack[100000] = {0, };
    queue<int> q;
    stack<int> s;

//    ù° �� �Է�
    cin >> n;
//    ��° �� �Է�
    for(int i = 0 ; i < n ; i++){
        cin >> inputBool;
        isStack[i] = inputBool;
    }
//    ��° �� �Է�
    for(int i = 0 ; i < n ; i++){
        cin >> inputNum;
//        cout << i << " " << isStack[i] << "\n" ;
        if(!isStack[i]){
            s.push(inputNum);
        }
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
//    ��° �� �Է�
    cin >> m;
//    �ټ�°�� �Է�
    for(int i = 0 ; i < m ; i++){
        cin >> inputNum;
        q.push(inputNum);
        cout << q.front() << ' ';
        q.pop();
    }
    return 0;
}
