#include <iostream>

using namespace std;

//  ���� �ذ���
//�Է� ���ڿ� �ΰ��� s, delStr�� �ʱ�ȭ�ϰ�,
//isDIff�� flag�� ����� s[i]~s[i+delStrLen] ������ char�� delStr[0]~s[delStrLen] char�� ���ϰ�,
//�� ����� ���� ��� isDelArr�� i~i+delStrLen �ε��� ��ο� true�� �ִ´�.
//if(!isDelArr)�� survivingString ���ڿ��� ����� += s[i] �ؼ� ����ϸ� �ȴ�.
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int sLen;
    string delStr;
    int delStrLen;
    bool isDiff;
    bool isDelArr[1000000] = {};
    string survivingString;

//    �Է� ���ڿ� �ΰ��� s, delStr�� �ʱ�ȭ�ϰ�,
    cin >> s;
    cin >> delStr;
    sLen = s.length();
    delStrLen = delStr.length();
    survivingString = "";
    for(int i = 0 ; i < sLen ; i++){
        isDiff = false;
//        ���� �ϳ��� �ٸ��ٸ� isDiff�� true�� �ǰ�,
//        �ݺ��� Ż�� �� �ݺ��� �ٷ� ������ if(!isDiff)�� ����Ѵ�.
        for(int j = 0 ; j < delStrLen ; j++){
            if(!(s[i + j] == delStr[j])){
                isDiff = true;
                break;
            }
        }
//        s[i]~s[i+delStrLen] ������ char�� delStr[0]~s[delStrLen] char�� ���� ���� ���Ƽ�
//        �ٷ� �� �ݺ������� break���� �ʾҴٸ� flag�� isDiff�� false�� �����̰�,
//        isDiff�� false�̸� isDelArr�� i~i+delStrLen �ε��� ��ο� true�� �ִ´�.
        if(!isDiff){
            for(int j = 0 ; j < delStrLen ; j++){
                isDelArr[i + j] = true;
            }
        }
    }
//    if(!isDelArr)�� survivingString ���ڿ��� ����� += s[i] �ؼ� ����ϸ� �ȴ�.
    for(int i = 0 ; i < sLen ; i++){
        if(!isDelArr[i]){
            survivingString += s[i];
        }
//        cout << isDelArr[i];
    }
//    cout << '\n';
    cout << survivingString;
    return 0;
}
