//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    int heightArr[500001];
//    stack<pair<int,int>> st;
//    int height;
//    int cnt;
//    int cntSum;
//
//    cin >> n;
//    cntSum = 0;
//    for(int i = 1 ; i <= n ; i++){
//        cin >> height;
//        cnt = 0;
//        while(!st.empty() && st.top().first < height){
//            cnt++;
//            cnt+= heightArr[st.top().second];
//            st.pop();
//        }
//        heightArr[i] = cnt;
//        cntSum += cnt;
//        st.push({height, i});
//    }
////    커지거나 같아지는 순서대로 pop
//    while(!st.empty() && st.size() != 1){
//        cout << "st.size() = " << st.size() << "\n";
//        cnt = 0;
//        cnt++;
//        cnt += heightArr[st.top().second];
//        st.pop();
//        heightArr[st.top().second] += cnt;
//        cntSum += cnt;
//    }
////    cout << "heightArr[st.top().second] : " << heightArr[st.top().second] << "\n";
//    for(int i = 1 ; i <= n ; i++){
//        cout << "i : " << i << "\nheightArr[i] : " << heightArr[i] << "\n";
//    }
//    cntSum += heightArr[st.top().second];
//    cout << cntSum;
//    return 0;
//}

//#include <iostream>
//#include <stack>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
////    int heightArr[500001];
////    int equalArr[500001];
//    long long int* heightArr;
//    int* equalArr;
//    stack<pair<int,int>> st;
//    int height;
//    long long int cnt;
//    long long int cntSum;
//    int index;
//    int sameNumCnt;
//
////    cout << "asd";
//
//    cin >> n;
//    heightArr = new long long int[n + 1];
//    equalArr = new int[n + 1];
//    memset(heightArr, 0, sizeof(heightArr[0]) * (n + 1));
//    memset(equalArr, 0, sizeof(equalArr[0]) * (n + 1));
////    memset(heightArr, 0, sizeof(long long int) * (n + 1));
////    memset(equalArr, 0, sizeof(int) * (n + 1));
//
////    ---------------------------test
////    cout << "sizeof(heightArr) " << sizeof(heightArr) << " sizeof(equalArr) " <<sizeof(equalArr) << "\n";
////    for(int i = 0 ; i <= n ; i++){
////        heightArr[i] = 0;
////        equalArr[i] = 0;
////    }
////    ---------------------------test
//
////    for(int i = 0 ; i <= n ; i++){
////        cout << i << " i " << heightArr[i] << " heightArr[i]\n";
////        cout << i << " i " << equalArr[i] << " equalArr[i]\n";
////    }
//
//    cntSum = 0;
////    cout << n;
//    for(int i = 1 ; i <= n ; i++){
//        cin >> height;
//        cnt = 0;
//        while(!st.empty() && st.top().first < height){
//            cnt++;
//            cnt += heightArr[st.top().second];
//            st.pop();
//        }
//        while(!st.empty() && st.top().first == height){
////            cout << st.top().second;
//            cnt++;
//            cnt += heightArr[st.top().second];
//            equalArr[i] = st.top().second;
//            st.pop();
//        }
//        heightArr[i] = cnt;
//        cntSum += cnt;
//        st.push({height, i});
//    }
//
////    equalArr[0] = 0;
////    커지거나 같아지는 순서대로 pop
//
//    while(!st.empty() && st.size() != 1){
//
////    ---------------------------test
////        cout << "st.size() = " << st.size() << "\n";
////    ---------------------------test
//        sameNumCnt = 1;
//        index = st.top().second;
////        cout << "index : " << index << ", equalArr[index] : " << equalArr[index] << "\n";
//        while(equalArr[index] != 0){
//                //    ---------------------------test
////            cout << "index : " << index << ", equalArr[index] : " << equalArr[index] << "\n";
////    ---------------------------test
//            index = equalArr[index];
//            sameNumCnt++;
//        }
//
//        cnt = 0;
//        cnt++;
//        cnt += heightArr[st.top().second];
//        st.pop();
//        heightArr[st.top().second] += cnt;
////        cntSum += cnt;
//        cntSum += sameNumCnt * cnt;
//        //    ---------------------------test
////        cout << "sameNumCnt " << sameNumCnt << " sameNumCnt * cnt " << sameNumCnt * cnt << " st.top().second " << st.top().second << "\n";
//        //    ---------------------------test
//    }
//
////    cout << "heightArr[st.top().second] : " << heightArr[st.top().second] << "\n";
//
////    ---------------------------test
//    for(int i = 1 ; i <= n ; i++){
//        cout << "i : " << i << "\nheightArr[i] : " << heightArr[i] << "\n";
//    }
////    ---------------------------test
//
////    cntSum += heightArr[st.top().second];
//    cout << cntSum;
//
//    delete heightArr;
//    delete equalArr;
//    return 0;
//}

//#include <iostream>
//#include <stack>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
////    int heightArr[500001];
////    int equalArr[500001];
//    long long int* heightArr;
//    pair<int, int>* equalArr;
//    stack<pair<int,int>> st;
//    int height;
//    long long int cnt;
//    long long int cntSum;
//    int index;
//    int sameNumCnt;
//
////    cout << "asd";
//
//    cin >> n;
//    heightArr = new long long int[n + 1];
//    equalArr = new pair<int, int>[n + 1];
//    memset(heightArr, 0, sizeof(heightArr[0]) * (n + 1));
//    memset(equalArr, 0, sizeof(equalArr[0]) * (n + 1));
////    memset(heightArr, 0, sizeof(long long int) * (n + 1));
////    memset(equalArr, 0, sizeof(int) * (n + 1));
//
////    ---------------------------test
////    cout << "sizeof(heightArr) " << sizeof(heightArr) << " sizeof(equalArr) " <<sizeof(equalArr) << "\n";
////    for(int i = 0 ; i <= n ; i++){
////        heightArr[i] = 0;
////        equalArr[i] = 0;
////    }
////    ---------------------------test
//
////    for(int i = 0 ; i <= n ; i++){
////        cout << i << " i " << heightArr[i] << " heightArr[i]\n";
////        cout << i << " i " << equalArr[i] << " equalArr[i]\n";
////    }
//
//    cntSum = 0;
////    cout << n;
//    for(int i = 1 ; i <= n ; i++)
//    {
//        cin >> height;
//        cnt = 0;
//        while(!st.empty() && st.top().first < height)
//        {
//            cnt++;
////            cnt += heightArr[index];
//
//            index = st.top().second;
//            sameNumCnt = equalArr[index].second;
////            if(equalArr[index].first != 0)
////            {
////                index = equalArr[index].second + 1;
////                sameNumCnt++;
////            }
////            sameNumCnt > 0
//            cnt += sameNumCnt * ( sameNumCnt + 1 ) / 2;
//            st.pop();
//        }
//        while(!st.empty() && st.top().first == height)
//        {
//            cnt++;
//            equalArr[i].second = equalArr[index].second + 1;
//            st.pop();
//        }
//        if(!st.empty() && st.top().first > height){
//            cnt++;
//        }
//        heightArr[i] += cnt;
//        cntSum += cnt;
//        st.push({height, i});
//    }
//
////    equalArr[0] = 0;
////    커지거나 같아지는 순서대로 pop
//
////    for(int i = 1 ; i <= n ; i++)
////    {
////        cout << "i : " << i << "\nheightArr[i] : " << heightArr[i] << "\n";
////    }
//    while(!st.empty() && st.size() != 1)
//    {
//        index = st.top().second;
//        sameNumCnt = 0;
////        while(equalArr[index] != 0)
////        {
////            index = equalArr[index];
////            sameNumCnt++;
////        }
//        sameNumCnt = equalArr[index].second;
//        cnt = 0;
//        cnt++;
//        cnt += sameNumCnt * ( sameNumCnt + 1 ) / 2;
////        cnt += heightArr[index];
//        st.pop();
//        if(!st.empty() && st.top().first > height){
//            cnt++;
//        }
//        heightArr[index] += cnt;
//        cntSum += cnt;
//    }
//
////    ---------------------------test
//    for(int i = 1 ; i <= n ; i++)
//    {
//        cout << "i : " << i << "\nheightArr[i] : " << heightArr[i] << "\n";
//    }
////    ---------------------------test
//
////    cntSum += heightArr[st.top().second];
//    cout << cntSum;
//
//    delete heightArr;
//    delete equalArr;
//    return 0;
//}

#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
//    int heightArr[500001];
//    int equalArr[500001];
    long long int* heightArr;
    pair<int, int>* equalArr;
    stack<pair<int,int>> st;
    int height;
    long long int cnt;
    long long int cntSum;
    int index;
    int sameNumCnt;

//    cout << "asd";

    cin >> n;
    heightArr = new long long int[n + 1];
    equalArr = new pair<int, int>[n + 1];
    memset(heightArr, 0, sizeof(heightArr[0]) * (n + 1));
    memset(equalArr, 0, sizeof(equalArr[0]) * (n + 1));
//    memset(heightArr, 0, sizeof(long long int) * (n + 1));
//    memset(equalArr, 0, sizeof(int) * (n + 1));

//    ---------------------------test
//    cout << "sizeof(heightArr) " << sizeof(heightArr) << " sizeof(equalArr) " <<sizeof(equalArr) << "\n";
//    for(int i = 0 ; i <= n ; i++){
//        heightArr[i] = 0;
//        equalArr[i] = 0;
//    }
//    ---------------------------test

//    for(int i = 0 ; i <= n ; i++){
//        cout << i << " i " << heightArr[i] << " heightArr[i]\n";
//        cout << i << " i " << equalArr[i] << " equalArr[i]\n";
//    }

    cntSum = 0;
//    cout << n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> height;
        cnt = 0;
        sameNumCnt = 0;
        if(!st.empty()){
            index = st.top().second;
        }
//        index = st.top().second;
        while(!st.empty() && st.top().first < height)
        {
            cnt++;
//            cnt += heightArr[index];

            index = st.top().second;
            sameNumCnt = equalArr[index].second;
//            if(equalArr[index].first != 0)
//            {
//                index = equalArr[index].second + 1;
//                sameNumCnt++;
//            }
//            sameNumCnt > 0
//            cnt += sameNumCnt * ( sameNumCnt + 1 ) / 2;
            cnt += sameNumCnt;
            st.pop();
        }
        while(!st.empty() && st.top().first == height)
        {
//            cnt++;
            index = st.top().second;
            equalArr[i].second = equalArr[index].second + 1;
            sameNumCnt = equalArr[i].second;
//            cnt += sameNumCnt * ( sameNumCnt + 1 ) / 2;
            cnt += sameNumCnt;
            st.pop();
        }
        if(!st.empty() && st.top().first > height){
            cnt++;
        }
        heightArr[i] += cnt;
        cntSum += cnt;
        st.push({height, i});
    }


//    for(int i = 1 ; i <= n ; i++)
//    {
//        cout << "i : " << i << "\nheightArr[i] : " << heightArr[i] << "\n";
//    }
    while(!st.empty() && st.size() != 1)
    {
        height = st.top().first;
        index = st.top().second;
        st.pop();
        sameNumCnt = 0;
//        while(equalArr[index] != 0)
//        {
//            index = equalArr[index];
//            sameNumCnt++;
//        }
        sameNumCnt = equalArr[index].second;
        cnt = 0;
//        while(!st.empty() && st.top().first < height)
//        {
//            cnt++;
//            index = st.top().second;
//            sameNumCnt = equalArr[index].second;
//            cnt += sameNumCnt * ( sameNumCnt + 1 ) / 2;
//        }
//        while(!st.empty() && st.top().first == height)
//        {
//            cnt++;
//            equalArr[index].second = equalArr[st.top().second].second + 1;
//        }
//        while(!st.empty() && st.top().first > height){
//            cnt++;
//        }
        heightArr[index] += cnt;
        cntSum += cnt;
    }

//    ---------------------------test
//    for(int i = 1 ; i <= n ; i++)
//    {
//        cout << "i : " << i << "\nheightArr[i] : " << heightArr[i] << "\n";
//    }
//    ---------------------------test

//    cntSum += heightArr[st.top().second];
    cout << cntSum;

    delete heightArr;
    delete equalArr;
    return 0;
}
