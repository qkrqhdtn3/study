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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
//        vector<pair<int,int>> sortA(n);
//        for(int i = 0 ; i < n ; i++)
//        {
//            sortA[i] = {a[i], i};
//        }
//        sort(sortA.begin(), sortA.end(),
//             [&](pair<int,int> x, pair<int,int> y)
//        {
//            if(x.first == y.first)
//            {
//                return x.second < y.second;
//            }
//            else{
//                return x.first < y.first;
//            }
//        });
//        for(int i = 0 ; i < n ; i++){
//            cout << sortA[i].first << ' ' << sortA[i].second << ' ';
//        }
//        cout << "\n";
//        int ptr1 = 0;
//        int ptr2 = n - 1;

        vector<int> leftSort(l - 1);
        vector<int> midSort(r - l + 1);
        vector<int> rightSort(n - r);
        for(int i = 0 ; i < l - 1 ; i++){
            leftSort[i] = a[i];
        }
        for(int i = l - 1 ; i < r ; i++){
            midSort[i - l + 1] = a[i];
        }
        for(int i = r ; i < n ; i++){
            rightSort[i - r] = a[i];
        }
        sort(leftSort.begin(), leftSort.end());
        sort(midSort.begin(), midSort.end());
        sort(rightSort.begin(), rightSort.end());

//        ¿ÞÂÊ
        int64_t leftMidSum = 0;
        int ptr1 = 0;
        int ptr2 = 0;
        while(ptr1 + ptr2 < r - l + 1){
            if(ptr1 == l - 1){
                while(ptr1 + ptr2 < r - l + 1){
                    leftMidSum += midSort[ptr2];
                    ptr2++;
                }
                break;
            }
            if(leftSort[ptr1] < midSort[ptr2]){
                leftMidSum += leftSort[ptr1];
                ptr1++;
            }
            else{
                leftMidSum += midSort[ptr2];
                ptr2++;
            }
        }
//        ¿À¸¥ÂÊ
        int64_t midRightSum = 0;
        ptr1 = 0;
        ptr2 = 0;
        while(ptr1 + ptr2 < r - l + 1){
            if(ptr1 == n - r){
                while(ptr1 + ptr2 < r - l + 1){
                    midRightSum += midSort[ptr2];
                    ptr2++;
                }
                break;
            }
            if(rightSort[ptr1] < midSort[ptr2]){
                midRightSum += rightSort[ptr1];
                ptr1++;
            }
            else{
                midRightSum += midSort[ptr2];
                ptr2++;
            }
        }

//        for(int i = 0 ; i < l - 1 ; i++){
//            cout << leftSort[i];
//        }
//        cout << ' ';
//        for(int i = l - 1 ; i < r ; i++){
//            cout << midSort[i - l + 1];
//        }
//        cout << ' ';
//        for(int i = r ; i < n ; i++){
//            cout << rightSort[i - r];
//        }
//        cout << "\n";
//        cout << leftMidSum << ' ' << midRightSum << "\n";
        cout << min(leftMidSum, midRightSum) << "\n";
    }
    return 0;
}
