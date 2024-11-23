#include <iostream>

using namespace std;

int main()
{
    int n;
    int num;
    int v;
    int vCnt;
    int* arr;

    cin >> n;
    arr = new int[n];
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        arr[i] = num;
    }
    cin >> v;
    vCnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == v){
            vCnt++;
        }
    }
    cout << vCnt;
    return 0;
}
