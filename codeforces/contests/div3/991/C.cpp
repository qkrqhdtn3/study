//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
////    freopen("input.txt", "r", stdin);
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tt;
//
//    cin >> tt;
//    while(tt--)
//    {
//        string s;
//        cin >> s;
//        int sum = 0;
//        int twoCnt = 0;
//        int threeCnt = 0;
//        for(int i = 0 ; i < s.length() ; i++)
//        {
//            if(s.at(i) == '2')
//            {
//                twoCnt++;
//            }
//            else if(s.at(i) == '3')
//            {
//                threeCnt++;
//            }
//            sum += s.at(i) - '0';
//        }
//        int sum1 = sum;
//        bool flag = false;
//        if(sum1 % 9 == 0) flag = true;
//        if(twoCnt > 9) twoCnt = 9;
//        if(threeCnt > 3) threeCnt = 3;
//        for(int j = 0 ; j < threeCnt ; j++)
//        {
//            sum1 += 6;
//            if(sum1 % 9 == 0) flag = true;
//        }
//        sum1 -= 6 * threeCnt;
//        for(int i = 0 ; i < twoCnt ; i++)
//        {
//            sum1 += 2;
//            if(sum1 % 9 == 0) flag = true;
//            for(int j = 0 ; j < threeCnt ; j++)
//            {
//                sum1 += 6;
//                if(sum1 % 9 == 0) flag = true;
//            }
//            sum1 -= 6 * threeCnt;
//            if(flag) break;
//        }
//        if(flag)
//        {
//            cout << "YES\n";
//        }
//        else
//        {
//            cout << "NO\n";
//        }
//    }
//
//    return 0;
//}

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
    while(tt--){
        string s;
        cin >> s;
        vector<bool> dp(9);
        dp[0] = true;
        for(char c : s){
            vector<bool> new_dp(9);
            for(int i = 0 ; i < 9 ; i++){
                if(dp[i]){
                    int d = c - '0';
                    while(d <= 9){
                        new_dp[(i + d) % 9] = true;
                        if(d <= 1){
                            break;
                        }
                        d = d * d;
                    }
                }
            }
            swap(dp, new_dp);
        }
        cout << (dp[0] ? "YES\n" : "NO\n");
    }

    return 0;
}
