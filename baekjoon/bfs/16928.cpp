#include <iostream>
#include <queue>

using namespace std;

//bfs/16928.cpp
//https://www.acmicpc.net/problem/16928
//  ���� �ذ� ���
//1. 1�� ĭ���� ������ 100�� ĭ�������ϱ� ���� 1~6�� �ֻ����� ������ �ϴ� Ƚ���� �ּڰ��� ���ϱ�
//2. ���̳� ��ٸ���� ���� a�� ĭ�� �����ϸ� b�� ĭ���� �̵��ؾ� �ϴ� ��
//3. �ֻ����� ���ϴ� ���� ���� �� ����
//1���� ������ �������� bfs�� ����ϰ�, 1~6�� ��� queue�� �־���Ѵ�.
//2���� ������ �������� �ܼ� bfs�� ������ �߰��ؾ� ���� �� �� �ִ�.
//��ٸ� ź ��� a��� b�� queue�� push�ϰ�, visitedArr�� �� �� a�� b�� check�ؾ� �Ѵ�.
//100�� ������ ��� ����ϸ� �ȴ�.

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
