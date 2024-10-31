#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// 간단하게 브루트포스로는 시간복잡도 O(nk) 누적합으로는 O(n)
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int dayNum;
    int consecutiveDayNum;
    int measuredTemperature;
    int* dpArr;
    int maxSum;

    maxSum = INT_MIN;
    cin >> dayNum >> consecutiveDayNum;
    dpArr = new int[dayNum + 1];
    dpArr[0] = 0;
    // 연속적인 K일의 온도의 합이 최대인 값을 구하므로 누적합 알고리즘 사용
    for(int i = 1 ; i <= dayNum; i++){
        cin >> measuredTemperature;
        dpArr[i] = dpArr[i - 1] + measuredTemperature;
    }
    //algorithm 헤더의 max()함수 사용
    for(int i = consecutiveDayNum ; i <= dayNum ; i++){
        maxSum = max(maxSum,dpArr[i] - dpArr[i - consecutiveDayNum]);
    }
    cout << maxSum;
    return 0;
}
