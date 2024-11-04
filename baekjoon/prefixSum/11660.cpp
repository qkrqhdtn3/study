#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ����
    int n, m;
    int num;
    int x1, y1, x2, y2;
    int** dp;
    int ans;

    // body
    cin >> n >> m;
    dp = new int*[n + 1];
    for(int i = 0 ; i <= n ; i++){
        dp[i] = new int[n + 1];
    }
    for(int i = 0 ; i <= n ; i++){
        dp[i][0] = 0;
        dp[0][i] = 0;
    }
    // ������ �迭�� ��� ���·� ���ø��� �����ؾ� �Ѵ�.
    // (i-1,j), (i,j-1)�� �������� ���� �Ŀ� �ߺ��� �κ�(i-1,j-1)�������� �ٽ� ����.
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> num;
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + num;
        }
    }
    // ���� ���̵��� ����ϰ� ���ø��� �ȴ�.
    for(int i = 0 ; i < m ; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        ans = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
        cout << ans << '\n';
    }
    // ���
    return 0;
}
