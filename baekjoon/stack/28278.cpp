#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ���� n, x , stack, commandNum
    int n;
    int x;
    int commandNum;
    stack<int> s;

    // �Է�
    cin >> n;
    // case ���� �ʿ�ÿ� �Է¹ްų� answer ��� ��
    for(int i = 0 ; i < n ; i++){
        // commandNum �Է�
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
                    //stack.pop()�� return�� void���̴�.
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
