#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

//  문제 해결방법
//입력 문자열 두개를 s, delStr에 초기화한다.
//delStr[delStrLen - 1]~delStr[0] char값과 stack에서 delStrLen개의 pop한 char값을 비교한다.
//문자가 하나라도 다르다면 flag인 isDiff는 true가 되고 break한다.
//문자가 모두 같아 반복문에서 한번도 break하지 않으면 isDiff는 false다.
//if(isDiff)를 사용해 문자가 하나라도 다르다면 cStack.push(s[i]) 직후의 상태로 만들고 cTmpStack을 비운다.
//else if(!isDiff)를 사용해 문자가 모두 같다면 cStack에서 모두 제외된 상태로 cTmpStack을 비운다.
//survivingString += cStack.top() 해서 문자열을 만들고 reverse(surStr.begin(), surStr.end())해서 출력하면 된다.
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

//    입력 문자열 두개를 s, delStr에 초기화하고,
    cin >> s;
    cin >> delStr;
    sLen = s.length();
    delStrLen = delStr.length();
    survivingString = "";

    for(int i = 0 ; i < sLen ; i++){
        cStack.push(s[i]);
        isDiff = false;
//       런타임에러 segfault를 위한 예외처리
        if(cStack.size() < delStrLen){
            continue;
        }
//        delStr[delStrLen - 1]~delStr[0] char값과
//        stack에서 delStrLen개의 pop한 char값을 비교한다.
//        문자가 하나라도 다르다면 flag인 isDiff는 true가 되고 break한다.
//        문자가 모두 같아 반복문에서 한번도 break하지 않으면 isDiff는 false다.
        for(int j = delStrLen - 1 ; j >= 0 ; j--){
            stackTopChar = cStack.top();
            cTmpStack.push(stackTopChar);
            cStack.pop();
            if(stackTopChar != delStr[j]){
                isDiff = true;
                break;
            }
        }
//        문자가 하나라도 다르다면 cStack.push(s[i]) 직후의 상태로 만들고 cTmpStack을 비운다.
//        문자가 모두 같다면 cStack에서 모두 제외된 상태로 cTmpStack을 비운다.
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
//    survivingString += cStack.top() 해서 문자열을 만들고 reverse(surStr.begin(), surStr.end())해서 출력하면 된다.
    while(!cStack.empty()){
        survivingString += cStack.top();
        cStack.pop();
    }
    reverse(survivingString.begin(), survivingString.end());
    cout << survivingString;
    return 0;
}
