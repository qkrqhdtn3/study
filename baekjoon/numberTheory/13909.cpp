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

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool windowArr[1000001];
    int curInd;
    int curNum;
    int quotient;
    int n;
    int mil;
    int mil2;
    int cnt;
    int lInit;

    cin >> n;
    mil = 1000000;
    mil2 = 1000000;
    cnt = 0;
    curInd = 0;
    for(int i = 0 ; i <= n - mil ; i += mil)
    {
        curInd = i;
        memset(windowArr, true, sizeof(windowArr));
        for(int j = 1 ; j <= mil ; j++)
        {
            curNum = j + curInd;
            for(int k = 2 ; k <= curNum ; k++)
            {
//                quotient = curInd / k;
//                lInit = quotient * k - curInd;
                lInit = curInd / k * k - curInd;
//                if(lInit != 0)
                if(lInit < 0)
                {
                    lInit += k;
                }
                for(int l = lInit ; l <= mil ; l += k)
                {
                    windowArr[l] = !windowArr[l];
                }
            }
        }
        for(int j = 1 ; j <= mil ; j++)
        {
            if(windowArr[j])
            {
                cnt++;
            }
        }
    }
    mil = n - curInd;
    memset(windowArr, true, sizeof(windowArr));
    for(int j = 1 ; j <= mil ; j++)
    {
        curNum = j + curInd;
        for(int k = 2 ; k <= curNum ; k++)
        {
            lInit = curInd / k * k - curInd;
//                if(lInit != 0)
            if(lInit < 0)
            {
                lInit += k;
            }
//            cout << lInit << ' ';
            for(int l = lInit ; l <= mil ; l += k)
            {
                cout << l << ' ' << windowArr[l] << ' ' << !windowArr[l] << '\n';
                windowArr[l] = !windowArr[l];
                cout << l << ' ' << windowArr[l] << ' ' << !windowArr[l] << '\n';
            }
        }
    }
    for(int j = 1 ; j <= mil ; j++)
    {
        if(windowArr[j])
        {
            cnt++;
        }
    }
    for(int i = 1 ; i <= mil ; i++){
        cout << windowArr[i];
    }
//    for(int i = 1 ; i <= n ; i++){
//        for(int j = i ; j <= n ; j+=i){
//            windowArr[j] = !windowArr[j];
//        }
//    }

    cout << cnt;
    return 0;
}
