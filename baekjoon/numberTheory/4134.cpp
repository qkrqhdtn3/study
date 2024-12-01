#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long long n;
    int t;
    long long curNum;
    long long numToDiv;
    bool isDecimal;
    vector<long long> ansVec;

    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> n;
        isDecimal = false;
        curNum = n;
//        divNum = 2;
        if(curNum < 2){
            curNum = 2;
        }
        while(!isDecimal){
            numToDiv = 2;
            while(numToDiv * numToDiv <= curNum){
                if(curNum % numToDiv == 0){
                    break;
                }
                numToDiv++;
            }
            if(numToDiv * numToDiv > curNum){
                isDecimal = true;
                break;
            }
            curNum++;
        }
        ansVec.push_back(curNum);
    }

    for(int i = 0 ; i < ansVec.size() ; i++){
        cout << ansVec[i] << '\n';
    }
    return 0;
}

//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    long long n;
//    int t;
//    long long curNum;
//    bool isDecimal;
//    bool flag;
//    vector<long long> ansVec;
//
//    cin >> t;
//    for(int i = 0 ; i < t ; i++)
//    {
//        cin >> n;
//        isDecimal = false;
//        curNum = n;
//        if(curNum < 2)
//        {
//            curNum = 2;
//            isDecimal = true;
//        }
//        else if(curNum <= 3)
//        {
//            isDecimal = true;
//        }
//        while(!isDecimal)
//        {
//            if(curNum % 2 == 0 || curNum % 3 == 0)
//            {
//                isDecimal = false;
//                curNum++;
//                continue;
//            }
//            flag = true;
//            for(long long j = 5 ; j * j <= curNum ; j+= 6)
//            {
//                if(curNum % j == 0 || curNum % (j + 2) == 0)
//                {
//                    isDecimal = false;
//                    flag = false;
//                    break;
//                }
//            }
//            if(flag)
//            {
//                isDecimal = true;
//                break;
//            }
//            curNum++;
//        }
//        ansVec.push_back(curNum);
//    }
//
//    for(int i = 0 ; i < ansVec.size() ; i++)
//    {
//        cout << ansVec[i] << '\n';
//    }
//    return 0;
//}
