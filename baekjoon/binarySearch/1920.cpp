#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int a[100001];
    int m;
    int num;
    int left, mid, right;
    bool hasNum;

    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        a[i] = num;
    }
    sort(a, a + n);
    cin >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> num;
        left = 0;
        right = n - 1;
        hasNum = false;
        while(left <= right){
            mid = (left + right) / 2;
            if(num > a[mid]){
                left = mid + 1;
            } else if(num < a[mid]){
                right = mid - 1;
            } else{
                hasNum = true;
                break;
            }
        }
        if(hasNum){
            cout << "1\n";
        } else{
            cout << "0\n";
        }
    }
    return 0;
}
