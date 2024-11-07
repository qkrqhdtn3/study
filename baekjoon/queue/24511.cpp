#include <iostream>
#include <queue>
#include <stack>

using namespace std;
//문제 해결 방법
//1. 큐 스택을 이용한 브루트포스
//2. 문제의 내용대로 밑의 그림으로 이해하고, 결과적으로 보면 스택은 입력과 출력에 영향을 주지 않고,
//결과적으로 큐 자료구조인 것들만 입력에 의미가 있고, 입력받은 역순으로 큐에 넣어 입력받은 순서대로 출력하면 문제를 해결할 수 있다.
//입력받은 역순을 만드는 방법은 스택에 넣었다 빼면 된다.
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

//    첫째 줄 입력
    cin >> n;
//    둘째 줄 입력
    for(int i = 0 ; i < n ; i++){
        cin >> inputBool;
        isStack[i] = inputBool;
    }
//    셋째 줄 입력
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
//    넷째 줄 입력
    cin >> m;
//    다섯째줄 입력
    for(int i = 0 ; i < m ; i++){
        cin >> inputNum;
        q.push(inputNum);
        cout << q.front() << ' ';
        q.pop();
    }
    return 0;
}
