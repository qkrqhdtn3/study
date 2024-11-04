#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 선언
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
    // 이차원 배열의 행렬 형태로 떠올리며 생각해야 한다.
    // (i-1,j), (i,j-1)의 누적합을 더한 후에 중복된 부분(i-1,j-1)누적합을 다시 뺀다.
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> num;
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + num;
        }
    }
    // 위의 아이디어와 비슷하게 떠올리면 된다.
    for(int i = 0 ; i < m ; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        ans = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
        cout << ans << '\n';
    }
    // 출력
    return 0;
}
