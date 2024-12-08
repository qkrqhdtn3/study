#include <iostream>
#include <vector>
#include <queue>
//#include <climits>

using namespace std;

const int N_MAX = 801;
//    pair is weight, node
vector<pair<int, int>> adj[N_MAX];
priority_queue<pair<int, int>> pq;
vector<int> dist(N_MAX, INT_MAX);

void dijkstra(){
    int cur, curDist;
    int next, nextDist;

    dist.assign(N_MAX, INT_MAX);
    while(!pq.empty()){
        curDist = pq.top().first;
        cur = pq.top().second;
        pq.pop();
        if(curDist > dist[cur]){
            continue;
        }
        for(int i = 0 ; i < adj[cur].size(); i++){
            nextDist = adj[cur][i].first + curDist;
            next = adj[cur][i].second;
            if(dist[next] > nextDist){
                dist[next] = nextDist;
                pq.push(make_pair(nextDist, next));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, e;
//    a, b are edge
//    c is distance
    int a, b, c;
//    must pass 2 nodes
    int v1, v2;
    int oneToV1Dis;
    int oneToV2Dis;
    int v1ToV2Dis;
    int v2ToV1Dis;
    int v1ToNDis;
    int v2ToNDis;

    cin >> n >> e;
    for(int i = 1 ; i <= e ; i++){
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(c, b));
        adj[b].push_back(make_pair(c, a));
    }
    cin >> v1 >> v2;
    pq.push(make_pair(0, 1));
    dijkstra();
    oneToV1Dis = dist[v1];
    oneToV2Dis = dist[v2];
    pq.push(make_pair(oneToV1Dis, v1));
    dijkstra();
    v1ToNDis = dist[n];
    pq.push(make_pair(oneToV2Dis, v2));
    dijkstra();
    v2ToNDis = dist[n];
}
