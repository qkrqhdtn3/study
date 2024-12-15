#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int i, j;

    cin >> n;
    for(i = 1 ; i <= n ; i++){
        for(j = n - i ; j >= 1 ; j--){
            cout << " ";
        }
        for(j = 1 ; j <= 2 * i - 1 ; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(i = 1 ; i <= n - 1 ; i++){
        for(j = 1 ; j <= i ; j++){
            cout << " ";
        }
        for(j = 2 * n - 1 - 2 * i ; j >= 1 ; j--){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
