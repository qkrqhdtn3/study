#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

//  ���� �ذ���
//�Է� ���ڿ� �ΰ��� s, delStr�� �ʱ�ȭ�Ѵ�.
//delStr[delStrLen - 1]~delStr[0] char���� stack���� delStrLen���� pop�� char���� ���Ѵ�.
//���ڰ� �ϳ��� �ٸ��ٸ� flag�� isDiff�� true�� �ǰ� break�Ѵ�.
//���ڰ� ��� ���� �ݺ������� �ѹ��� break���� ������ isDiff�� false��.
//if(isDiff)�� ����� ���ڰ� �ϳ��� �ٸ��ٸ� cStack.push(s[i]) ������ ���·� ����� cTmpStack�� ����.
//else if(!isDiff)�� ����� ���ڰ� ��� ���ٸ� cStack���� ��� ���ܵ� ���·� cTmpStack�� ����.
//survivingString += cStack.top() �ؼ� ���ڿ��� ����� reverse(surStr.begin(), surStr.end())�ؼ� ����ϸ� �ȴ�.
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
    stack<char> cStack;
    stack<char> cTmpStack;
    char stackTopChar;

//    �Է� ���ڿ� �ΰ��� s, delStr�� �ʱ�ȭ�ϰ�,
    cin >> s;
    cin >> delStr;
    sLen = s.length();
    delStrLen = delStr.length();
    survivingString = "";

    for(int i = 0 ; i < sLen ; i++){
        cStack.push(s[i]);
        isDiff = false;
//       ��Ÿ�ӿ��� segfault�� ���� ����ó��
        if(cStack.size() < delStrLen){
            continue;
        }
//        delStr[delStrLen - 1]~delStr[0] char����
//        stack���� delStrLen���� pop�� char���� ���Ѵ�.
//        ���ڰ� �ϳ��� �ٸ��ٸ� flag�� isDiff�� true�� �ǰ� break�Ѵ�.
//        ���ڰ� ��� ���� �ݺ������� �ѹ��� break���� ������ isDiff�� false��.
        for(int j = delStrLen - 1 ; j >= 0 ; j--){
            stackTopChar = cStack.top();
            cTmpStack.push(stackTopChar);
            cStack.pop();
            if(stackTopChar != delStr[j]){
                isDiff = true;
                break;
            }
        }
//        ���ڰ� �ϳ��� �ٸ��ٸ� cStack.push(s[i]) ������ ���·� ����� cTmpStack�� ����.
//        ���ڰ� ��� ���ٸ� cStack���� ��� ���ܵ� ���·� cTmpStack�� ����.
        if(isDiff){
            while(!cTmpStack.empty())
            {
                cStack.push(cTmpStack.top());
                cTmpStack.pop();
            }
        }
        else if(!isDiff){
            while(!cTmpStack.empty())
            {
                cTmpStack.pop();
            }
//            cTmpStack = {};
        }
    }
    if(cStack.size() == 0){
        cout << "FRULA";
        return 0;
    }
//    survivingString += cStack.top() �ؼ� ���ڿ��� ����� reverse(surStr.begin(), surStr.end())�ؼ� ����ϸ� �ȴ�.
    while(!cStack.empty()){
        survivingString += cStack.top();
        cStack.pop();
    }
    reverse(survivingString.begin(), survivingString.end());
    cout << survivingString;
    return 0;
}
