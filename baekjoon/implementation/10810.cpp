#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    int p, q, r;
    int arr[101];

    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        arr[i] = 0;
    }
    for(int i = 0 ; i < m ; i++){
        cin >> p >> q >> r;
        for(int j = p ; j <= q ; j++){
            arr[j] = r;
        }
    }
    for(int  i = 1 ; i <= n ; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
