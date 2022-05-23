#include <bits/stdc++.h>
using namespace std;

// 기수정렬
void RadixSort(int arr[], int arrLength)
{
    // GetMax()
    int max = INT_MIN;
    for(int i = 0 ; i < arrLength ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // GetMaxSize()
    int maxSize = 1;
    while(1){
        if(maxSize > max)  break;
        maxSize *= 10;
    }

    //RadixSort()
    queue<int> q[10];
    int search = 0;
    int idx = 0;
    for(int i = 1 ; i < maxSize ; i*=10){
        for(int j = 0 ; j < arrLength ; j++){
            if(arr[j] < i) search = 0;
            else search = (arr[j] / i) % 10;
            q[search].push(arr[j]);
        }

        idx = 0;
        for(int j = 0 ; j < 10 ; j++){
            while(q[j].empty() == 0){
                arr[idx++] = q[j].front();
                q[j].pop();
            }
        }
    }

    //Print()
    for(int i = 0 ; i < arrLength ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
//    입력
//    20
//    30 295 2983 1842 100000 2 23 100 25151 599 1822 2039 5827 337 29199 205 495 338 484 1
//    출력
//    1 2 23 30 100 205 295 337 338 484 495 599 1822 1842 2039 2983 5827 25151 29199 100000
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    RadixSort(arr, n);
    return 0;
}
