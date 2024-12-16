#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int n;
    int* a;
    int* b;
    int* modeCntArr;
    int n1;
    queue<int> q;
    bool* hasBArr;
    bool* hasNum;
    stack<int> st;

    n = 200001;
    a = new int[n + 1];
    b = new int[n + 1];
    hasNum = new bool[n + 1];
    cin >> t;
    for(int t1 = 0 ; t1 < t ; t1++)
    {
        cin >> n;
        memset(a, 0, 4 * n + 4);
        memset(b, 0, 4 * n + 4);
        memset(hasNum, 0, n + 1);
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> n1;
            a[i] = n1;
            hasNum[n1] = true;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            if(hasNum[i] == 0)
            {
                st.push(i);
            }
        }
        memset(hasNum, 1, n + 1);
        for(int i = 1 ; i <= n ; i++)
        {
            if(hasNum[a[i]] == 0)
            {
                b[i] = st.top();
                st.pop();
            }
            else
            {
                b[i] = a[i];
                hasNum[a[i]] = 0;
            }
        }
        for(int i = 1 ; i <= n ; i++)
        {
            cout << b[i] << " " ;
        }
        cout << "\n";
    }
    delete a;
    delete b;
    delete hasNum;
    return 0;
}