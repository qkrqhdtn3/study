#include <iostream>

using namespace std;

// 1. ���Ʈ����
// 2. ���� ���
// 2�� Ǯ�̹�
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ����
    int a, b, c, d, e, f;
    int x, y;

    // body
    cin >> a >> b >> c >> d >> e >> f;
    // ù��° �Ŀ� * e, �ι�° �Ŀ� * b�� �� ��,
    // ���� x �� �������� ���� ���� �� �ְ�,
    // aex - dbx = ce - fb
    // ù��° �Ŀ� * d, �ι�° �Ŀ� *a �ϰ� ���� ������ y ���� ���� �� �ִ�.
    // bdy - eay = cd - af
    y = (c * d - f * a) / (b * d - e * a);
    x = (c * e - f * b) / (a * e - d * b);
    // ���
    cout << x << ' ' << y;
    return 0;
}
