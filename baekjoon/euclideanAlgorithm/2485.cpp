#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int* colonnadeDisArr;
    int loc1, loc2;
    int loc;
    int gcd;
    int a, b, c;
    int cntSum;

    cin >> n;
    colonnadeDisArr = new int [n + 1];
    loc2 = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> loc;
        loc1 = loc;
        colonnadeDisArr[i] = loc1 - loc2;
        loc2 = loc;
    }

    gcd = colonnadeDisArr[2];
//    colonnadeDisArr[1] == 0;
//    colonnadeDisArr[2] == ;
    for(int i = 2 ; i <= n ; i++){
//        ------test
//        cout << "i " << i << " gcd " << gcd << "\n";
        b = colonnadeDisArr[i];
        c = gcd;
        while(c != 0){
            a = b;
            b = c;
            c = a % b;
        }
        gcd = b;
        if(gcd == 1){
            break;
        }
    }

    cntSum = 0;
//    colonnadeDisArr[1] == 0;
    for(int i = 2 ; i <= n ; i++){
        cntSum += colonnadeDisArr[i] / gcd;
        cntSum--;
    }

    cout << cntSum;

    delete colonnadeDisArr;
    return 0;
}
