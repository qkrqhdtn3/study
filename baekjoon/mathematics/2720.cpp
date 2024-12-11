#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, c;
    int changeCnt[4];
    int changeDiv[4];

    cin >> t;
    changeDiv[0] = 25;
    changeDiv[1] = 10;
    changeDiv[2] = 5;
    changeDiv[3] = 1;
    for(int i = 0 ; i < t ; i++){
        cin >> c;
        for(int j = 0 ; j < 4 ; j++){
            changeCnt[j] = c / changeDiv[j];
            c = c % changeDiv[j];
        }
        for(int j = 0 ; j < 4 ; j++){
            cout << changeCnt[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
