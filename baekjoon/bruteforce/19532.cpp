#include <iostream>

using namespace std;

// 1. 브루트포스
// 2. 수학 계산
// 2번 풀이법
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 선언
    int a, b, c, d, e, f;
    int x, y;

    // body
    cin >> a >> b >> c >> d >> e >> f;
    // 첫번째 식에 * e, 두번째 식에 * b를 한 후,
    // 빼면 x 를 기준으로 식을 만들 수 있고,
    // aex - dbx = ce - fb
    // 첫번째 식에 * d, 두번째 식에 *a 하고 같은 원리로 y 식을 구할 수 있다.
    // bdy - eay = cd - af
    y = (c * d - f * a) / (b * d - e * a);
    x = (c * e - f * b) / (a * e - d * b);
    // 출력
    cout << x << ' ' << y;
    return 0;
}
