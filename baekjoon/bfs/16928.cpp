#include <iostream>
#include <queue>

using namespace std;

//bfs/16928.cpp
//https://www.acmicpc.net/problem/16928
//  문제 해결 방법
//1. 1번 칸에서 시작해 100번 칸에도착하기 위해 1~6의 주사위를 굴려야 하는 횟수의 최솟값을 구하기
//2. 뱀이나 사다리라는 것은 a번 칸에 도착하면 b번 칸으로 이동해야 하는 것
//3. 주사위는 원하는 수가 나올 수 있음
//1번을 이해한 내용으로 bfs를 사용하고, 1~6을 모두 queue에 넣어야한다.
//2번을 이해한 내용으로 단순 bfs에 내용을 추가해야 함을 알 수 있다.
//사다리 탄 경우 a대신 b를 queue에 push하고, visitedArr을 할 때 a와 b를 check해야 한다.
//100에 도착한 경우 출력하면 된다.

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    int x, y;
    int u, v;
    int curLoc;
    int nextLoc;
    queue<int> q;
    bool visitedArr[101] = {};
    int ladderArr[101] = {};
    int cntArr[101] = {};

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        ladderArr[x] = y;
    }
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        ladderArr[u] = v;
    }
    curLoc = 1;
    q.push(curLoc);
    visitedArr[curLoc] = true;
    cntArr[curLoc] = 0;
    while(!q.empty())
    {
        curLoc = q.front();
        q.pop();
        for(int i = 1 ; i <= 6 ; i++)
        {
            nextLoc = curLoc + i;
//            if(visitedArr[nextLoc])
//            {
//                continue;
//            }
            if(nextLoc >= 100){
                if(nextLoc == 100){
                    cntArr[nextLoc] = cntArr[curLoc] + 1;
                    break;
                }
                continue;
            }
            if(ladderArr[nextLoc] != 0)
            {
                visitedArr[nextLoc] = true;
                nextLoc = ladderArr[nextLoc];
            }
            if(visitedArr[nextLoc])
            {
                continue;
            }
            q.push(nextLoc);
            visitedArr[nextLoc] = true;
            cntArr[nextLoc] = cntArr[curLoc] + 1;
        }
        if(nextLoc == 100){
            break;
        }
    }
    cout << cntArr[100];
    return 0;
}
