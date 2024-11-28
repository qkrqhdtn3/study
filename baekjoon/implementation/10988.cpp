#include <iostream>

using namespace std;

int main()
{
    bool isPalindrome;
    string s;
    int sLength;

    cin >> s;
    sLength = s.length();
    isPalindrome = true;
    for(int i = 0 ; i < sLength / 2 + 1; i++){
        if(s[i] != s[sLength - i - 1]){
            isPalindrome = false;
            break;
        }
    }

    cout << isPalindrome;
    return 0;
}
