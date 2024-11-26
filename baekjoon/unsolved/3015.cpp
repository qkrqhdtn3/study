#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int height;
    int heightArr[500001];
    stack<int>* stAsc;
    int stAscCur;
    stack<int>* stDesc;
    int stDescCur;
    int stInd[500001];
    int stIndCnt;
    int numMax;
    int numMaxInd;

    cin >> n;
    stAsc = new stack<int>[n];
    stDesc = new stack<int>[n];
    stAscCur = 0;
    stDescCur = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> height;
        heightArr[i] = height;
    }
    for(int i = 0 ; i < n ; i++){
        if(!stAsc[stAscCur].empty() && stAsc[stAscCur].top() > height){
            stAscCur++;
        }
        stAsc[stAscCur].push(height);
        if(!stDesc[stDescCur].empty() && stDesc[stDescCur].top() < height){
            stDescCur++;
        }
        stDesc[stDescCur].push(height);
    }
//    stAsc.size() < stDesc.size()
    if(stAscCur > stDescCur){
        stAsc = stDesc;
        stAscCur = stDescCur;
    }
    for(int i = 0 ; i < stAscCur ; i++)
    {
        stInd[i] = i;
    }
    stIndCnt = stAscCur + 1;
    while(stIndCnt != 0)
    {
        for(int i = 0 ; i < stIndCnt ; i++){
            if(stAsc[i].empty()){
                stInd[i] = stInd[stIndCnt - 1];
                stIndCnt--;
            }
        }
//        if(stAsc[stIndCnt - 1].empty()){
//            stIndCnt--;
//        }
        numMax = 0;
        for(int i = 0 ; i < stIndCnt ; i++){
            if(numMax < stAsc[stInd[i]].top()){
                numMax = stAsc[stInd[i]].top();
                numMaxInd = i;
            }
        }
        for(int i = 0 ; i < stIndCnt ; i++){
            stAsc[stInd[i]].top();
        }
    }
    return 0;
}
