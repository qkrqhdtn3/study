#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int b;
    string s;
    char c;

    cin >> n >> b;
    for(int i = 0 ; n != 0 ; i++){
        c = n % b;
//        48 ~ 57
        if(c <= 9){
            s += '0' + c;
        }
//        65 ~ 90
        if(c >= 10){
            s += 'A' + c - 10;
        }
        n = n / b;
    }

    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}
