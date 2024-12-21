#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "0\n";
            continue;
        }
        flag = true;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "1\n";
            continue;
        }
        int ind1, ind2;
        for(int i = 0 ; i < n ; i++)
        {
            ind1 = i;
            if(a[i] != 0)
            {
                break;
            }
        }
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            ind2 = i;
            if(a[i] != 0)
            {
                break;
            }
        }
        flag = true;
//        cout << "ind1 " << ind1 << " ind2 " << ind2 << "\n";
//        if(ind1 == n - 1 && ind2 == 0){
//            cout << "1\n";
//        }
        if(ind1 == 0 && ind2 != n - 1)
        {
            for(int i = ind1 ; i < ind2 ; i++)
            {
                if(a[i] == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
        else if(ind1 != 0 && ind2 == n - 1)
        {
            for(int i = ind1 ; i < ind2 ; i++)
            {
                if(a[i] == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
        else
        {
            for(int i = ind1 ; i < ind2 ; i++)
            {
                if(a[i] == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "1\n";
            }
            else{
                cout << "2\n";
            }
        }
    }
    return 0;
}
