#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ����
    int n, m;
    int dp;
    int a;
    int* modArr;
    int modCnt;
    long long ans;
    // ���Ʈ������ O(N^2) dp�� ��ⷯ ���� �̿��� O(N)

    // body
    cin >> n >> m;
    modArr = new int[m + 1];
    dp = 0;
    ans = 0;
    fill_n(modArr, m + 1, 0);
    modArr[0]++;
    for(int i = 1 ; i <= n ; i++){
        cin >> a;
        dp = (dp + a) % m;
        modArr[dp]++;
    }
    for(int i = 0 ; i <= m - 1 ; i++){
        modCnt = modArr[i];
        // �������� 0�� �ƴ� ��� �ּ� �ΰ��� ���� �ʿ��ϹǷ�
        // �Ѱ� ���� ��츦 ���� 1���� modCnt�� �����������տ��� -modCnt�� �ϸ� �ǰ�,
        // �������� 0�� ��� �Ѱ��� ���̾ �����ϹǷ� 1���� modCnt�� ���������� ���� ���ϸ� �ȴ�.
        ans += (long long) modCnt * (modCnt - 1) / 2;
    }
    // ���
    cout << ans << endl;
    return 0;
}
