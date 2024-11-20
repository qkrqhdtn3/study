#include <iostream>

using namespace std;

void mergeSort(int p, int r);
void merge(int p, int q, int r);

int* aArr;
int k, ans;
int saveCnt;

//A[p..r]을 오름차순 정렬
void mergeSort(int p, int r)
{
    if(p < r)
    {
        int q;

        q = (p + r) / 2;
        mergeSort(p, q);
        mergeSort(q + 1, r);
        merge(p, q, r);
    }
}

//A[p..q], A[q+1..r]을 merge해 A[p..r]을 오름차순 정렬된 상태로 만든다.
//A[p..q], A[q+1..r]은 오름차순으로 정렬된 상태이다.
void merge(int p, int q, int r)
{
    int i, j, t;
    int tmpArr[r + 1];

    i = p;
    j = q + 1;
    t = 0;
    while(i <= q && j <= r)
    {
        if(aArr[i] <= aArr[j])
        {
            tmpArr[t++] = aArr[i++];
        }
        else
        {
            tmpArr[t++] = aArr[j++];
        }
    }
    while(i <= q){
        tmpArr[t++] = aArr[i++];
    }
    while(j <= r){
        tmpArr[t++] = aArr[j++];
    }
    i = p;
    t = 0;
    while(i <= r){
        aArr[i++] = tmpArr[t++];
        if(++saveCnt == k){
            ans = aArr[i - 1];
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;

    cin >> n >> k;
    aArr = new int[n];
    saveCnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> aArr[i];
    }
    mergeSort(0, n - 1);
//    for(int i = 0 ; i < n ; i++){
//        cout << aArr[i] << ' ';
//    }
    if(saveCnt < k){
        ans = -1;
    }
    cout << ans;

    return 0;
}
