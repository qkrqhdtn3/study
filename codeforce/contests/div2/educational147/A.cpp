#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    char cArr[6];
    int cArrLen;
    int mul[6];
    int ans;

    cin >> t;
    for(int t1 = 0 ; t1 < t ; t1++)
    {
        cin >> cArr;
        cArrLen = strlen(cArr);
        if(cArr[0] == '0')
        {
            cout << 0 << "\n";
            continue;
        }
        else if(cArr[0] == '?')
        {
            mul[0] = 9;
        }
        else
        {
            mul[0] = 1;
        }
        for(int i = 1 ; i < cArrLen ; i++)
        {
            if(cArr[i] == '?')
            {
                mul[i] = 10;
            }
            else
            {
                mul[i] = 1;
            }
        }
        ans = 1;
        for(int i = 0 ; i < cArrLen ; i++)
        {
            ans *= mul[i];
        }
        cout<< ans << "\n";
    }
    return 0;
}