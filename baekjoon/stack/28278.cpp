#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 변수 n, x , stack, commandNum
    int n;
    int x;
    int commandNum;
    stack<int> s;

    // 입력
    cin >> n;
    // case 별로 필요시에 입력받거나 answer 출력 등
    for(int i = 0 ; i < n ; i++){
        // commandNum 입력
        cin >> commandNum;
        switch(commandNum){
            // method 1
            case 1:
                cin >> x;
                s.push(x);
                break;
            // method 2
            case 2:
                if(s.empty())
                    cout << -1;
                else{
                    cout << s.top();
                    //stack.pop()의 return은 void형이다.
                    s.pop();
                }
                cout << '\n';
                break;
            // method 3
            case 3:
                cout << s.size() << '\n';
                break;
            // method 4
            case 4:
                if(s.empty())
                    cout << 1;
                else
                    cout << 0;
                cout << '\n';
                break;
            // method 5
            case 5:
                if(s.empty())
                    cout << -1;
                else
                    cout << s.top();
                cout << '\n';
                break;
        }
    }
    return 0;
}
