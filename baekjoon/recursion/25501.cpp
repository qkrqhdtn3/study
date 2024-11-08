#include <iostream>
//#include <string>
#include <cstring>
//#include <string.h>

using namespace std;

pair<int,int> recursion(const char *s, int l, int r, int recCnt){
    recCnt++;
    if(l >= r) return make_pair(1, recCnt);
    else if(s[l] != s[r]) return make_pair(0, recCnt);
    else return recursion(s, l+1, r-1, recCnt);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1, 0).first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    pair<int, int> ansPair;
    char s[1001];

    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> s;
        ansPair = recursion(s, 0, strlen(s) - 1, 0);
        cout << ansPair.first << ' ' << ansPair.second << '\n';
    }
    return 0;
}
