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
        cin >> n >> x >> y;
//        y++;
        int a[n];
        int64_t sum = 0;
        int64_t ansX = 0;
        int64_t ansY = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
//        int j = n - 1;
//        for(int i = 0 ; i < n ; i++){
//            while(j > 0 && sum - a[i] - a[j] >= x){
//                j--;
//            }
//            j++;
////            ansX += n - j - 1;
//            ansX += n - j;
////            ansX += j + 1;
//        }
//        j = n - 1;
//        for(int i = 0 ; i < n ; i++){

//            while(j > 0 && sum - a[i] - a[j] >= x){
//                j--;
//            }
//            j++;
////            ansY += n - j - 1;
//            ansY += n - j;
////            ansY += j + 1;
//        }
//        for(int i = 0 ; i < n ; i++){
//            if(sum - a[i] * 2 < x){
//                ansX--;
////                break;
//            }
//        }
//        for(int i = 0 ; i < n ; i++){
//            if(sum - a[i] * 2 < y + 1){
//                ansY--;
////                break;
//            }
//        }
//        int64_t ans = ansX / 2 - ansY / 2;
////        int64_t ans = ansY / 2 - ansX / 2;
//        cout << ans << "\n";

        int j = 0;
        for(int i = n - 1 ; i > -1 ; i--)
        {
            while(j < n && sum - x >= a[i] + a[j])
//            while(j < n && sum - a[i] - a[j] >= x)
            {
                j++;
            }
//            j--;
            ansX += n - j;
        }
        for(int i = 0 ; i < n ; i++){
            if(sum - x < a[i] + a[i]){
                ansX--;
            }
        }
        ansX = ansX / 2;

        y++;
        j = 0;
        for(int i = n - 1 ; i > -1 ; i--)
        {
            while(j < n && sum - y >= a[i] + a[j])
//            while(j < n && sum - a[i] - a[j] >= y)
            {
                j++;
            }
//            j--;
            ansY += n - j;
        }
        for(int i = 0 ; i < n ; i++){
            if(sum - y < a[i] + a[i]){
                ansY--;
            }
        }
        ansY = ansY / 2;

        cout << ansY - ansX << "\n";
    }
    return 0;
}
