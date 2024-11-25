#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int k;
    bool board[2001][2001];
    char colorInput;
    int dp[2001][2001];
    int kkDp[2001][2001];
    int repaintMax;
    int repaintMin;

    cin >> n >> m >> k;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> colorInput;
            if(colorInput == 'B'){
                board[i][j] = 0;
            }
            else{
                board[i][j] = 1;
            }
        }
    }
//    j + i 가 짝수면 Black 0, 홀수면 White 1
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1];
//            현재 위치 좌표의 합이 짝수일 때,
//            Black이면 누적합은 누적합 + 0을 한 것과 같다.
//            White이면 누적합은 누적합 + 1을 한 것과 같다
//            현재 위치 좌표의 합이 홀수일 때는 반대이다.
            if((j + i) % 2 == 0){
                if(!board[i][j]){
                    dp[i][j]++;
                }
            }
            else{
                if(board[i][j]){
                    dp[i][j]++;
                }
            }
        }
    }
    repaintMax = 0;
    repaintMin = k * k;
    for(int i = 0 ; i <= n - k ; i++){
        for(int j = 0 ; j <= m - k ; j++){
            kkDp[i][j] = dp[i + k][j + k] - dp[i + k][j] - dp[i][j + k] + dp[i][j];
            if(repaintMax < kkDp[i][j]){
                repaintMax = kkDp[i][j];
            }
            if(repaintMin > kkDp[i][j]){
                repaintMin = kkDp[i][j];
            }
        }
    }
    if(repaintMin > k * k - repaintMax){
        repaintMin = k * k - repaintMax;
    }

    cout << repaintMin;


    return 0;
}
