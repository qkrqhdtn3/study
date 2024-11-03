#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 선언
    int n, m;
    int dp;
    int a;
    int* modArr;
    int modCnt;
    long long ans;
    // 브루트포스는 O(N^2) dp와 모듈러 연산 이용은 O(N)

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
        // 나머지가 0이 아닐 경우 최소 두개의 쌍이 필요하므로
        // 한개 쌍인 경우를 빼면 1부터 modCnt의 등차수열의합에서 -modCnt를 하면 되고,
        // 나머지가 0인 경우 한개의 쌍이어도 만족하므로 1부터 modCnt의 등차수열의 합을 구하면 된다.
        ans += (long long) modCnt * (modCnt - 1) / 2;
    }
    // 출력
    cout << ans << endl;
    return 0;
}
