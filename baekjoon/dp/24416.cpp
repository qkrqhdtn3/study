#include <iostream>

using namespace std;

int* fibArr;
int fibRecursionCnt;
int fibDpCnt;

int fibRecursion(int n){
    if(n == 1 || n == 2){
        fibRecursionCnt++;
        return 1;
    }
    else{
        return fibRecursion(n - 1) + fibRecursion(n - 2);
    }
}

void fibDp(int* fibArr, int n){
    fibArr[1] = fibArr[2] = 1;
    for(int i = 3 ; i <= n ; i++){
        fibDpCnt++;
        fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
    }
}

int main()
{
    int n;

    cin >> n;
    fibArr = new int[n + 1];
    fibRecursionCnt = 0;
    fibDpCnt = 0;
    fibRecursion(n);
    fibDp(fibArr, n);

    cout << fibRecursionCnt << ' ' << fibDpCnt;

    return 0;
}
