//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void dfs(vector<vector<int>>* graphPtr,vector<bool>* visitedPtr, int* ans[], int r, int cnt){
//    vector<vector<int>> toVisitGraph;
//    int toVisitGraphSize;
//    int linkedNode;
//
//    *ans[r] = cnt++;
////    graphPtr[r]->sort(graphPtr[r]->begin(), graphPtr[r]->end());
//    for(int i = 0 ; i < graphPtr->at(r).size() ; i++){
//        linkedNode = graphPtr->at(r)[i];
//        if(*visitedPtr[linkedNode]){
//            continue;
//        } else{
//            toVisitGraph.push_back(linkedNode);
//        }
//    }
//    toVisitGraphSize = toVisitGraph.size()
//    if(toVisitGraphSize > 1){
//        sort(toVisitGraph.begin(), toVisitGraph.end());
//    }
//    for(int i = 0 ; i < toVisitGraphSize ; i++){
//            *visitedPtr[linkedNode] = true;
//            dfs(graphPtr, visitedPtr, node);
//    }
//
//    return;
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m, r;
//    int u, v;
//    vector<vector<int>> graph;
//    vector<bool> visited;
//    int ans[];
//    int cnt;
//
//    graph.resize(n + 1, 0);
//    visited.resize(n + 1, false);
//    ans = new int[n + 1];
//    cnt = 1;
//    cin >> n >> m >> r;
//    for(int i = 0 ; i < m ; i++){
//        cin >> u >> v;
//        graph[u].push_back(v);
//        graph[v].push_back(u);
//    }
//    dfs(&graph, &visited, &ans, r, cnt);
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//void dfs(vector<int>** graphPtr,bool** visitedArrPtr, int** ansArr, int r, int cnt){
//    vector<int> toVisitGraph;
//    int toVisitGraphSize;
//    int linkedNode;
//
//    *ansArr[r] = cnt++;
////    graphPtr[r]->sort(graphPtr[r]->begin(), graphPtr[r]->end());
//    for(int i = 0 ; i < (*graphPtr)[r].size() ; i++){
//        linkedNode = (*graphPtr)[r][i];
//        if(*visitedArrPtr[linkedNode]){
//            continue;
//        } else{
//            toVisitGraph.push_back(linkedNode);
//        }
//    }
//    toVisitGraphSize = toVisitGraph.size();
//    if(toVisitGraphSize > 1){
//        sort(toVisitGraph.begin(), toVisitGraph.end());
//    }
//    for(int i = 0 ; i < toVisitGraphSize ; i++){
//            linkedNode = toVisitGraph[i];
//            *visitedArrPtr[linkedNode] = true;
//            dfs(graphPtr, visitedArrPtr, ansArr, linkedNode, cnt);
//    }
//
//    return;
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m, r;
//    int u, v;
//    vector<int>* graph;
//    bool* visitedArr;
//    int* ansArr;
//    int cnt;
//
//    visitedArr = new bool[n + 1];
//    ansArr = new int[n + 1];
//    graph = new vector<int>[n + 1];
//    for(int i = 1 ; i <= n ; i++){
//        visitedArr[i] = false;
//        ansArr[i] = 0;
//    }
//    cnt = 1;
//    cin >> n >> m >> r;
//    for(int i = 0 ; i < m ; i++){
//        cin >> u >> v;
//        graph[u].push_back(v);
//        graph[v].push_back(u);
//    }
//    dfs(&graph, &visitedArr, &ansArr, r, cnt);
//    for(int i = 1 ; i <= n ; i++){
//        cout << ansArr[i] << '\n';
//    }
////    delete[] visited;
////    delete[] ans;
//    return 0;
//}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[100001];
int visitedArr[100001];
int ansArr[100001];
int cnt = 1;
void dfs(int r)
{
    if(visitedArr[r]){
        return;
    }
    visitedArr[r] = true;
    ansArr[r] = cnt++;
    for(int i = 0 ; i < graph[r].size() ; i++)
    {
        dfs(graph[r][i]);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, r;
    int u, v;

    cin >> n >> m >> r;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(r);
    for(int i = 1 ; i <= n ; i++)
    {
        cout << ansArr[i] << '\n';
    }
    return 0;
}
