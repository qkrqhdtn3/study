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
//        cout << "chk" << "\n";
        int64_t k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int64_t kn = 1;
        int ii = 0;
        while(kn <= 1000000000)
        {
            kn *= k;
            ii++;
        }
        ii--;
        int ans = 0;
        kn = 1;
//        for(int i = l1 ; i <= r1 ; i++)
//        {
//            int x = i;
//            int y = kn * x;
//            if(l2 <= y && y <= r2)
//            {
//                ans++;
//            }
//        }
        int x = l1;
        int y = l2;
        int cnt = min(r1, r2) - max(l1, l2) + 1;
        if(cnt > 0)
        {
            ans += cnt;
        }
        while(ii--)
        {
            kn *= k;
            int64_t lef = max(l2, l1 * kn);
            int64_t righ = min(r2, r1 * kn);
            int lefCnt = 0;
            int righCnt = 0;
            if(lef % kn == 0)
            {
                lefCnt = lef / kn;
            }
            else
            {
                lefCnt = lef / kn + 1;
            }
            if(righ % kn == 0)
            {
                righCnt = righ / kn;
            }
            else
            {
//                righCnt = righ / kn + 1;
                righCnt = righ / kn;
            }
            if(lefCnt * kn > righ){
                continue;
            }
            cnt = righCnt - lefCnt + 1;
            if(cnt > 0)
            {
                ans += cnt;
            }
        }
//        while(ii--)
//        {
//            kn *= k;
//            for(int i = l1 ; i <= r1 ; i++)
//            {
//                int x = i;
//                int64_t y = kn * x;
//                if(l2 <= y && y <= r2)
//                {
////                cout << " chk ii " << ii << " chk x " << x << " chk y " << y << "\n";
//                    ans++;
//                }
//            }
//        }
        cout << ans << "\n";
    }
    return 0;
}
