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
        int64_t x, y;
//        long long int x, y;
        cin >> n >> x >> y;
        int a[n + 2];
        int64_t sum = 0;
//        long long sum = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a + 1, a + n + 1);
        a[0] = 0;
        a[n + 1] = 0;
        int64_t ans = 0;
//        int x2 = sum - x;
//        int y2 = sum - y;
        int64_t x2 = sum - y;
        int64_t y2 = sum - x;
//        int x2 = x;
//        int y2 = y;

        int ptr1 = 0;
        int ptr2 = n - 1;
        int cnt1 = 1;
        int cnt2 = 1;
        vector<pair<int,int>> pVec;
        int ptr = 0;
        pVec.push_back({a[1], 1});
        for(int i = 2 ; i <= n ; i++)
        {
            if(pVec[ptr].first == a[i])
            {
                pVec[ptr].second++;
            }
            else
            {
                ptr++;
                pVec.push_back({a[i], 1});
            }
        }
        ptr1 = 0;
        ptr2 = pVec.size() - 1;
//        int pVecSize = pVec.size();
//        pVecSize = 5;
//        cout << pVecSize << "\n";
//        int dp[5];
        int64_t dp[pVec.size()];
        dp[pVec.size() - 1] = pVec[pVec.size() - 1].second;
        for(int i = pVec.size() - 2 ; i >= 0 ; i--)
        {
            dp[i] = dp[i + 1] + pVec[i].second;
        }
//        while(ptr1 < ptr2){
//            if(x2 <= pVec[ptr1].first + pVec[ptr2].first){
//                ans += dp[ptr2];
//                ptr2--;
//            }
//            else{
//                ptr1++;
//            }
//        }
//        while(ptr1 < pVec.size()){
//            ptr1++;
//            if(x2 <= pVec[ptr1].first * 2){
//                ans += (long long int) dp[ptr1] * (dp[ptr1] - 1) / 2;
//                break;
//            }
//        }
//
//        ptr1 = 0;
//        ptr2 = pVec.size() - 1;
//        while(ptr1 < ptr2){
//            if(y2 < pVec[ptr1].first + pVec[ptr2].first){
//                ans -= dp[ptr2];
//                ptr2--;
//            }
//            else{
//                ptr1++;
//            }
//        }
//        while(ptr1 < pVec.size()){
//            ptr1++;
//            if(y2 < pVec[ptr1].first * 2){
//                ans -= (long long int) dp[ptr1] * (dp[ptr1] - 1) / 2;
//                break;
//            }
//        }
        ptr1 = 0;
        ptr2 = pVec.size() - 2;
        while(ptr1 < ptr2)
        {
            while(ptr2 >= 0 && x2 <= pVec[ptr1].first + pVec[ptr2].first)
            {
                ptr2--;
            }
            if(ptr1 >= ptr2)
            {
                ptr2 = ptr1;
            }
            if(x2 <= pVec[ptr1].first * 2){
                ans += pVec[ptr1].second * (pVec[ptr1].second - 1) / 2;
            }
            if(x2 <= pVec[ptr1].first + pVec[ptr2 + 1].first)
            {
                ans += pVec[ptr1].second * dp[ptr2 + 1];
//                cout << ptr1 << ptr2 << ans << "\n";
//                cout << pVec[ptr1].second << "\n";
            }
            ptr1++;
        }
        ptr2 = ptr1 + 1;
        while(ptr2 < pVec.size() && x2 > pVec[ptr1].first + pVec[ptr2].first)
        {
            ptr1++;
            ptr2++;
        }
        if(ptr2 == pVec.size()){
            ptr2--;
        }
        if(x2 <= pVec[ptr1].first * 2)
        {
            if(pVec[ptr1].second == 1)
            {
                ans += (dp[ptr1]) * (dp[ptr1] - 1) / 2;
            }
            else
            {
                ans += (dp[ptr1]) * (dp[ptr1] - 1) / 2;
            }
        }
        else if(x2 <= pVec[ptr1].first + pVec[ptr2].first)
        {
            if(pVec[ptr1].second == 1)
            {
                ans += pVec[ptr1].second * dp[ptr2];
                ans += (dp[ptr2]) * (dp[ptr2] - 1) / 2;
            }
            else
            {
                ans += pVec[ptr1].second * dp[ptr2];
                ans += (dp[ptr2]) * (dp[ptr2] - 1) / 2;
            }
        }
        else
        {
//            cout << "ERROR\n";
//            continue;
        }

        ptr1 = 0;
        ptr2 = pVec.size() - 2;
        while(ptr1 < ptr2)
        {
            while(ptr2 >= 0 && y2 < pVec[ptr1].first + pVec[ptr2].first)
            {
                ptr2--;
            }
            if(ptr1 >= ptr2)
            {
                ptr2 = ptr1;
            }
            if(y2 < pVec[ptr1].first * 2){
                ans -= pVec[ptr1].second * (pVec[ptr1].second - 1) / 2;
            }
            if(y2 < pVec[ptr1].first + pVec[ptr2 + 1].first)
            {
                ans -= pVec[ptr1].second * dp[ptr2 + 1];
            }
            ptr1++;
        }
        ptr2 = ptr1 + 1;
        while(ptr2 < pVec.size() && y2 >= pVec[ptr1].first + pVec[ptr2].first)
        {
            ptr1++;
            ptr2++;
        }
        if(ptr2 == pVec.size()){
            ptr2--;
        }
        if(y2 < pVec[ptr1].first * 2)
        {
            if(pVec[ptr1].second == 1)
            {
                ans -= (dp[ptr1]) * (dp[ptr1] - 1) / 2;
            }
            else
            {
                ans -= (dp[ptr1]) * (dp[ptr1] - 1) / 2;
            }
        }
        else if(y2 < pVec[ptr1].first + pVec[ptr2].first)
        {
            if(pVec[ptr1].second == 1)
            {
                ans -= pVec[ptr1].second * dp[ptr2];
                ans -= (dp[ptr2]) * (dp[ptr2] - 1) / 2;
            }
            else
            {
                ans -= pVec[ptr1].second * dp[ptr2];
                ans -= (dp[ptr2]) * (dp[ptr2] - 1) / 2;
            }
        }
        else
        {
//            cout << "ERROR\n";
//            continue;
        }
        cout << ans << "\n";





//        while(ptr1 < ptr2)
//        {
//            if(x2 <= a[ptr1] + a[ptr2])
//            {
////                while(a[ptr1] == a[ptr1 + 1])
////                {
////                    cnt++;
////                    ptr1++;
////                }
//                while(a[ptr2 - 1] == a[ptr2])
//                {
////                    cnt++;
//                    cnt2++;
//                    ptr2--;
//                }
//                if(a[ptr1] == a[ptr2 + 1]){
//                    ans += cnt2++;
//                    int ptr3 = ptr2;
//                    while(ptr3 )
//                }
////                ans += cnt * (n - ptr2);
//                ans += cnt2;
//            }
//            else
//            {
//                ptr1++;
////                cnt1 = 1;
////                while(a[ptr1] == a[ptr1 + 1])
////                {
////                    cnt1++;
////                    ptr1++;
////                }
//            }
//        }
//        int y2 = sum - y;
//        ptr1 = 0;
//        ptr2 = n - 1;
//        while(ptr1 < ptr2)
//        {
//            if(y2 >= a[ptr1] + a[ptr2])
//            {
//                while(a[ptr2 - 1] == a[ptr2])
//                {
////                    cnt++;
//                    cnt2++;
//                    ptr2--;
//                }
//                ans -= cnt1 * cnt2;
//            }
//            else
//            {
//                cnt1= 1;
//                while(a[ptr1] == a[ptr1 + 1])
//                {
//                    cnt1++;
//                    ptr1++;
//                }
//            }
//        }
//
//        cout << ans << "\n";

//        vector<int> aVec;
//        aVec.push_back({a[0], 1});
//        for(int i = 1 ; i < n ; i++){
//            if(aVec[i - 1] == a[i]){
//
//            }
//        }
//
//
//        int ptr1 = 0;
//        int ptr2 = 1;
//        while(ptr1 < ptr2){
//            if(a[ptr1] + a[ptr2])
//        }
//        int ptr1 = 0;
//        int ptr2 = n - 1;
////        x = sum - x;
////        vector<pair<int,int>> pairVec;
//        map<int,int> m;
//        for(int i = 0 ; i < n ; i++){
//            auto iter = m.find(a[i]);
//            if(iter == m.end()){
//                m.insert({a[i], 1});
//            }
//            else{
//                iter->second++;
//            }
//        }
//        auto iter1 = m.begin();
//        auto iter2 = m.begin()++;
//        int ans = 0;
//        while(iter1 != iter2){
//        while(iter2 != m.end() && iter1 != iter2){
//            if(x2 <= iter1.first + iter2.first){
//                auto iter3 = iter1;
//                auto iter4 = iter2;
//                while(iter3 != m.end()){
//                    while(iter4 != m.end()){
//                        ans += iter3.second * iter4.second;
//                        iter4++;
//                    }
//                    iter3++;
//                }
//                iter1++;
//            }
//            else{
//                iter2++;
//            }
//        }

//        while(ptr1 < ptr2){
//            if(x2 <= a[ptr1] + a[ptr2]){
//
//            }
//            else{
//
//            }
//        }
    }
    return 0;
}
