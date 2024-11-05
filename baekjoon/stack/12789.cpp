#include <iostream>
#include <stack>

using namespace std;

// 스택
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 선언
    stack<int> s;
    int n;
    int curNum;
    int start;
    string ans;

    // body
    cin >> n;
    start = 1;
    s.push(-1);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> curNum;
        if(start == curNum)
        {
            start++;
        }
        else
        {
            s.push(curNum);
        }
        while(s.top() == start)
        {
            start++;
            s.pop();
        }
    }
    if(s.top() == -1){
        ans = "Nice";
    }
    else {
        ans = "Sad";
    }

    // 출력
    cout << ans;
    return 0;
}
