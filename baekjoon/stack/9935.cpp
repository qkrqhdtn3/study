#include <iostream>

using namespace std;

//  문제 해결방법
//입력 문자열 두개를 s, delStr에 초기화하고,
//isDIff로 flag를 사용해 s[i]~s[i+delStrLen] 까지의 char과 delStr[0]~s[delStrLen] char을 비교하고,
//비교 결과가 같을 경우 isDelArr의 i~i+delStrLen 인덱스 모두에 true를 넣는다.
//if(!isDelArr)로 survivingString 문자열을 만들어 += s[i] 해서 출력하면 된다.
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

//    입력 문자열 두개를 s, delStr에 초기화하고,
    cin >> s;
    cin >> delStr;
    sLen = s.length();
    delStrLen = delStr.length();
    survivingString = "";
    for(int i = 0 ; i < sLen ; i++){
        isDiff = false;
//        문자 하나라도 다르다면 isDiff는 true가 되고,
//        반복문 탈출 후 반복문 바로 다음의 if(!isDiff)를 통과한다.
        for(int j = 0 ; j < delStrLen ; j++){
            if(!(s[i + j] == delStr[j])){
                isDiff = true;
                break;
            }
        }
//        s[i]~s[i+delStrLen] 까지의 char과 delStr[0]~s[delStrLen] char을 비교한 값이 같아서
//        바로 위 반복문에서 break하지 않았다면 flag인 isDiff는 false인 상태이고,
//        isDiff가 false이면 isDelArr의 i~i+delStrLen 인덱스 모두에 true를 넣는다.
        if(!isDiff){
            for(int j = 0 ; j < delStrLen ; j++){
                isDelArr[i + j] = true;
            }
        }
    }
//    if(!isDelArr)로 survivingString 문자열을 만들어 += s[i] 해서 출력하면 된다.
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
