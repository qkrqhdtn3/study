#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n;
    int m;
    int i;
    int j;
    int num;
    int* dpArr;
    //int* dpArr = new int[100001];

    cin >> n >> m;
    dpArr = new int[n + 1];
    dpArr[0] = 0;
    for(int k = 1 ; k <= n ; k++){
        cin >> num;
        dpArr[k] = dpArr[k - 1] + num;
    }
    for(int k = 0 ; k < m ; k++){
        cin >> i >> j;
        cout << dpArr[j] - dpArr[i - 1] << "\n";
    }
    return 0;
}
