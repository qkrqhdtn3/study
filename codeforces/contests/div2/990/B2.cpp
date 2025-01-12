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
        vector<int> alp(26);
        for(int i = 0 ; i < n ; i++){
            alp[s[i] - 'a']++;
        }
        int lowCnt = INT_MAX;
        int highCnt = INT_MIN;
        char lowChar, highChar;
        int lowInd, highInd;
        for(int i = 0 ; i < n ; i++){
            if(lowCnt > alp[s[i] - 'a']){
                lowCnt = alp[s[i] - 'a'];
                lowChar = s[i];
                lowInd = i;
            }
            else if(lowCnt == alp[s[i] - 'a'] && s[i] < lowChar){
                lowCnt = alp[s[i] - 'a'];
                lowChar = s[i];
                lowInd = i;
            }
            if(highCnt < alp[s[i] - 'a']){
                highCnt = alp[s[i] - 'a'];
                highChar = s[i];
                highInd = i;
            }
            else if(highCnt == alp[s[i] -'a'] && s[i] > highChar){
                highCnt = alp[s[i] - 'a'];
                highChar = s[i];
                highInd = i;
            }
        }
        s[lowInd] = s[highInd];
        cout << s << "\n";
//        while(s[lowInd] != s[highInd]){
//            highInd--;
//        }

//        pair<pair<int,char>,int> low, high;
//        low = high = {{alp[s[0] - 'a'], s[0]}, 0};
//        for(int i = 1 ; i < n ; i++){
//            low = min(low, {{alp[s[i] - 'a'], s[i]}, i});
//            high = max(high, {{alp[s[i] - 'a'], s[i]}, i});
//        }
//        cout << low.second << " " << high.second << "\n";
////        cout << low << "\n" << high << "\n";

//        pair<int,int> low, high;
//        low = high = {alp[s[0] - 'a'], 0};
//        for(int i = 1 ; i < n ; i++){
//            low = min(low, {alp[s[i] - 'a'], i});
//            high = max(high, {alp[s[i] - 'a'], i});
//        }
//        cout << low.second << " " << high.second << "\n";
////        cout << low << "\n" << high << "\n";
    }
    return 0;
}
