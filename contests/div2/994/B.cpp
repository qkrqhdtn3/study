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
//        cout << tt << "\n";
//        int n
//        cin >> n;
//        string s;
//        cin >> s;
//        int sLen = s.length();
//        int p[sLen];
//        int ptr1 = 0;
//        int ptr2 = sLen - 1;
//        for(int i = 0 ; i < sLen - 1 ; i++){
//            if(s.at(i) == 's' && s.at(i + 1) == 'p'){
//                ptr1 = i + 1;
//                ptr2 = 0;
//                while(ptr1 < sLen - 1 && s.at(ptr1) == '.'){
//                    ptr1++;
//                }
//                if(s.at(ptr1) == 'p'){
//                    ptr2 = ptr1;
//                    break;
//                }
//            }
//        }
//        while(ptr1 < ptr2){
//            if(s.at(ptr1) == 's'){
//                ptr1++;
//            }
//            if(s.at(ptr2) == 'p'){
//                ptr2--;
//
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sLen = s.length();
        bool flag = false;
        char c = 0;
        int ptr1 = 0;
        int ptr2 = 0;
        for(int i = 0 ; i < sLen ; i++)
        {
            if(s.at(i) != '.')
            {
                c = s.at(i);
                ptr1 = i;
                break;
            }
        }
        if(c == 0){
            cout << "YES\n";
            continue;
        }
        if(c == 'p')
        {
            for(int i = ptr1 + 1 ; i < sLen ; i++)
            {
                if(s.at(i) == 's')
                {
                    flag = true;
                    ptr2 = i;
                    break;
                }
            }
            if(!flag)
            {
                cout << "YES\n";
                continue;
            }
            cout << "NO\n";
//            if(ptr1 == sLen - 1 || ptr2 == 0)
//            {
//
//            }
        }
        else if(c == 's')
        {
            for(int i = ptr1 + 1 ; i < sLen ; i++)
            {
                if(s.at(i) == 'p')
                {
                    flag = true;
                    ptr2 = i;
                    break;
                }
            }
            if(!flag)
            {
                cout << "YES\n";
                continue;
            }
            if(ptr1 == 0 || ptr2 == sLen - 1)
            {
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}
