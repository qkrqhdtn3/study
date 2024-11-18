#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> graph[100001];
bool visitedArr[100001];
//bool visitedArr[100001] = {};
int ansArr[100001];
queue<int> q;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, r;
    int u, v;
    int curNode;
    int childNode;
    int cnt;

    cin >> n >> m >> r;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    cnt = 1;
    curNode = r;
    q.push(curNode);
    visitedArr[curNode] = true;
    ansArr[curNode] = cnt++;
    while(!q.empty()){
        curNode = q.front();
        q.pop();
        for(int i = 0 ; i < graph[curNode].size() ; i++){
            childNode = graph[curNode].at(i);
            if(visitedArr[childNode]){
                continue;
            }
            q.push(childNode);
            visitedArr[childNode] = true;
            ansArr[childNode] = cnt++;
        }
    }
    for(int i = 1 ; i <= n ; i++){
        cout << ansArr[i] << '\n';
    }
    return 0;
}
