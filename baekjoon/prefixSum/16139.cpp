#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ����
    string s;
    int q;
    char a;
    int l,r;
    // dp�� ���� ������ 1~26�� �κ��� 1�� a�̰�, 26�� z�̴�. 1���� 26���� a���� z�� ����Ѵ�.
    int** dp;
    int columnNum;
    int sLength;

    // body
    // �Է�
    cin >> s >> q;
    // 'z' = 122 , 'a' = 97
    sLength = s.length();
    // dp = new int*['z' - 'a' + 2];
    dp = new int*['z' - 'a' + 1];
    for(int i = 1 ; i <= 26 ; i++){
        dp[i] = new int[sLength + 1];
    }
    // ������ ��ü�� ���ϱ� �� 0�� 0���� ����
    for(int i = 1 ; i <= 26 ; i++){
        dp[i][0] = 0;
    }
    for(int i = 1 ; i <= sLength ; i++){
        for(int j = 1 ; j <= 26 ; j++){
            dp[j][i] = dp[j][i - 1];
        }
        dp[s.at(i - 1) - 'a' + 1][i]++;
    }
    for(int i = 0 ; i < q ; i++){
        cin >> a >> l >> r;
        columnNum = a - 97 + 1;
        // ���
        cout << dp[columnNum][r + 1] - dp[columnNum][l] << '\n';
    }
    return 0;
}
