#include <iostream>
#include <map>
#include <cmath>
#include <stack>

using namespace std;

//int div(int a, int b){
//
//}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a, b;
    long long int aCopy, bCopy;
    map<int, int> aMap, bMap;
//    stack<int> st;
    int cur;
    int aCur, bCur;
    int aDivisorCnt, bDivisorCnt;
//    int aDivCur;
    map<int, int>::iterator mapIt;
    map<int, int>::iterator aMapIt;
    map<int, int>::iterator bMapIt;
    long long int gcd;
    long long int lcm;

    cin >> a >> b;
    aCopy = a;
    bCopy = b;
    cur = 2;
    while(cur <= sqrt(aCopy))
    {
        if(aCopy % cur == 0)
        {
            aCopy /= cur;
            mapIt = aMap.find(cur);
            if(mapIt == aMap.end())
            {
                aMap.insert(make_pair(cur, 1));
            }
            else
            {
                mapIt->second++;
            }
        }
        else
        {
            cur++;
        }
    }
    cur = aCopy;
    mapIt = aMap.find(cur);
    if(mapIt == aMap.end())
    {
        aMap.insert(make_pair(cur, 1));
    }
    else
    {
        mapIt->second++;
    }
//    for(mapIt = aMap.begin() ; mapIt != aMap.end() ; mapIt++)
//    {
//        cout << mapIt->first << ' ' << mapIt-> second << '\n';
//    }

    cur = 2;
    while(cur <= sqrt(bCopy))
    {
        if(bCopy % cur == 0)
        {
            bCopy /= cur;
            mapIt = bMap.find(cur);
            if(mapIt == bMap.end())
            {
                bMap.insert(make_pair(cur, 1));
            }
            else
            {
                mapIt->second++;
            }
        }
        else
        {
            cur++;
        }
    }
    cur = bCopy;
    mapIt = bMap.find(cur);
    if(mapIt == bMap.end())
    {
        bMap.insert(make_pair(cur, 1));
    }
    else
    {
        mapIt->second++;
    }

    aMapIt = aMap.begin();
    bMapIt = bMap.begin();
    gcd = 1;
//    map에 저장된 것으로 공약수 구하기
    while(aMapIt != aMap.end() && bMapIt != bMap.end()){
        aCur = aMapIt->first;
        bCur = bMapIt->first;
        if(aCur == bCur){
            aDivisorCnt = aMapIt->second;
            bDivisorCnt = bMapIt->second;
            if(aDivisorCnt >= bDivisorCnt){
                gcd *= pow(aCur, bDivisorCnt);
            }
            else{
                gcd *= pow(aCur, aDivisorCnt);
            }
            aMapIt++;
            bMapIt++;
        }
        else if(aCur > bCur){
            bMapIt++;
        }
        else if(aCur < bCur){
            aMapIt++;
        }
    }

    cout << a * b / gcd;
    return 0;
}
