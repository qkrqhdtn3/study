#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int numerator1, numerator2;
    int denominator1, denominator2;
    int numerator3, denominator3;
    int a, b, c;
    int gcd;

    cin >> numerator1 >> denominator1;
    cin >> numerator2 >> denominator2;
    numerator3 = numerator1 * denominator2 + numerator2 * denominator1;
    denominator3 = denominator1 * denominator2;
    a = numerator3;
    b = denominator3;
//    if(a < b){
//        c = a;
//        a = b;
//        b = c;
//    }
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    gcd = a;
    cout << numerator3 / gcd << ' ' << denominator3 / gcd;
}
