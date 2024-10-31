#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// �����ϰ� ���Ʈ�����δ� �ð����⵵ O(nk) ���������δ� O(n)
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
    // �������� K���� �µ��� ���� �ִ��� ���� ���ϹǷ� ������ �˰��� ���
    for(int i = 1 ; i <= dayNum; i++){
        cin >> measuredTemperature;
        dpArr[i] = dpArr[i - 1] + measuredTemperature;
    }
    //algorithm ����� max()�Լ� ���
    for(int i = consecutiveDayNum ; i <= dayNum ; i++){
        maxSum = max(maxSum,dpArr[i] - dpArr[i - consecutiveDayNum]);
    }
    cout << maxSum;
    return 0;
}
