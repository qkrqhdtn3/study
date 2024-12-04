//공간복잡도 O(N)
//시간복잡도 O(NlogN)
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    bool windowArr[2100000001];
//    int n;
//    int cnt;
//
//    cin >> n;
//    for(int i = 1 ; i <= n ; i++){
//        for(int j = i ; j <= n ; j+=i){
//            windowArr[j] = !windowArr[j];
//        }
//    }
//    for(int i = 1 ; i <= n ; i++){
//        if(windowArr[i]){
//            cnt++;
//        }
//    }
//
//    cout << cnt;
//    return 0;
//}

//공간복잡도 O(mil)
//시간복잡도 O(NlogN)
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    bool windowArr[1000001];
////    int curInd;
//    int curNum;
////    int quotient;
//    int n;
//    int mil;
////    int mil2;
//    int cnt;
//    int lInit;
//
//    cin >> n;
//    mil = 1000000;
//    cnt = 0;
//    curNum = 0;
//    for(int i = 0 ; i < n ; i += mil)
//    {
//        curNum = i;
////        1번째 사람이 진행한후 창문이 열려있는 경우 창문의 상태는 모두 1이고 밑의 코드와 같다.
//        memset(windowArr, true, sizeof(windowArr));
//        if(curNum + mil > n)
//        {
//            for(int k = 2 ; k <= n ; k++)
//            {
//                lInit = curNum / k * k - curNum;
//                if(lInit < 0)
//                {
//                    lInit += k;
//                }
//                for(int l = lInit ; l <= n - curNum ; l += k)
//                {
//                    windowArr[l] = !windowArr[l];
//                }
//            }
//            for(int j = 1 ; j <= n - curNum ; j++)
//            {
//                if(windowArr[j])
//                {
//                    cnt++;
//                }
//            }
//        }
//        else
//        {
//            for(int k = 2 ; k <= curNum + mil ; k++)
//            {
//                lInit = curNum / k * k - curNum;
//                if(lInit < 0)
//                {
//                    lInit += k;
//                }
//                for(int l = lInit ; l <= mil ; l += k)
//                {
//                    windowArr[l] = !windowArr[l];
//                }
//            }
//            for(int j = 1 ; j <= mil ; j++)
//            {
//                if(windowArr[j])
//                {
//                    cnt++;
//                }
//            }
//        }
//    }
//
//    cout << cnt;
//    return 0;
//}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    O(10000 * 10000) = O(100mil)
//    sqrt(2bil) == 44721
//    sqrt(2.2bil) == 46904
//    bool windowArr[50001];
//    int curNum;
    int n;
    int sqrtN;
    int cnt;

    cin >> n;
    sqrtN = sqrt(n);
    cnt = 0;
    for(int i = 1 ; i <= sqrtN ; i++){
        cnt++;
    }
    cout << cnt;
    return 0;
}
