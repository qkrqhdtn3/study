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
        string s;
        cin >> s;
        map<char,int> mapCI;
        for(int i = 0 ; i < n ; i++)
        {
            mapCI[s[i]]++;
        }
        int cntMin = INT_MAX;
        int cntMinChar;
        int cntMax = INT_MIN;
        int cntMaxChar;
        for(auto it = mapCI.begin() ; it != mapCI.end() ; it++)
        {
            if(cntMin > it->second)
            {
                cntMin = it->second;
                cntMinChar = it->first;
            }
            if(cntMax < it->second)
            {
//            if(cntMax <= it->second){
                cntMax = it->second;
                cntMaxChar = it->first;
            }
        }
        if(cntMinChar == cntMaxChar)
        {
            auto it = mapCI.begin();
            it++;
            if(it != mapCI.end())
            {
                cntMaxChar = it->first;
            }
        }
//        while(cntMinChar == cntMaxChar){
//            cntMaxChar = it->first;
//            it++;
//        }
//        mapCI[cntMinChar]--;
//        mapCI[cntMaxChar]++;
//        string ans(n, 0);
//        int ptr = 0;
//        for(auto it = mapCI.begin() ; it != mapCI.end() ; it++)
//        {
//            int loopNum = it->second;
//            while(loopNum--)
//            {
//                ans[ptr++] = it->first;
//            }
//        }
        int i = 0;
        char flag = 0;
        for(i = 0 ; i < n ; i++){
            if((flag & 0b1) == 0 && s[i] == cntMinChar){
                s[i] = cntMaxChar;
                flag += 0b1;
//                cout << "test1 ";
//                break;
            }
//            if((flag & 0b10) == 0 && s[i] == cntMaxChar){
//                s[i] = cntMinChar;
//                flag += 0b10;
////                break;
//                cout << "test2 ";
//            }
//            cout << 0b0 << (flag & 0b1) << " ";
        }
        cout << s << "\n";
    }
    return 0;
}
