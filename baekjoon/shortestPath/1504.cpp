#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int N_MAX = 801;
//    pair is weight, node
vector<pair<int, int>> adj[N_MAX];
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;
vector<int> dist(N_MAX, INT_MAX);

void dijkstra()
{
    int cur, curDist;
    int next, nextDist;

    dist.assign(N_MAX, INT_MAX);
    dist[pq.top().second] = 0;
    while(!pq.empty())
    {
        curDist = pq.top().first;
        cur = pq.top().second;
        pq.pop();
        if(curDist > dist[cur])
        {
            continue;
        }
        for(int i = 0 ; i < adj[cur].size(); i++)
        {
            nextDist = adj[cur][i].first + curDist;
            next = adj[cur][i].second;
            if(dist[next] > nextDist)
            {
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
    int oneToV1Dist;
    int oneToV2Dist;
    int v1ToV2Dist;
    int v2ToV1Dist;
    int v1ToNDist;
    int v2ToNDist;
    int oneToV1ToV2ToNDist;
    int oneToV2ToV1ToNDist;
    int ans;
    bool isPossible;

    cin >> n >> e;
    for(int i = 1 ; i <= e ; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(c, b));
        adj[b].push_back(make_pair(c, a));
    }
    cin >> v1 >> v2;

    pq.push(make_pair(0, 1));
    dijkstra();
    oneToV1Dist = dist[v1];
    oneToV2Dist = dist[v2];

    pq.push(make_pair(0, v1));
    dijkstra();
    v1ToV2Dist = dist[v2];
    v1ToNDist = dist[n];

    pq.push(make_pair(0, v2));
    dijkstra();
    v2ToV1Dist = dist[v1];
    v2ToNDist = dist[n];

    isPossible = true;
    if(oneToV1Dist == INT_MAX ||
            v1ToV2Dist == INT_MAX ||
            v2ToNDist == INT_MAX)
    {
        isPossible = false;
    }
    if(isPossible)
    {
        oneToV1ToV2ToNDist = oneToV1Dist + v1ToV2Dist + v2ToNDist;
    }
    else
    {
        oneToV1ToV2ToNDist = INT_MAX;
    }

    isPossible = true;
    if(oneToV2Dist == INT_MAX ||
            v2ToV1Dist == INT_MAX ||
            v1ToNDist == INT_MAX)
    {
        isPossible = false;
    }
    if(isPossible){
        oneToV2ToV1ToNDist = oneToV2Dist + v2ToV1Dist + v1ToNDist;
    }
    else
    {
        oneToV2ToV1ToNDist = INT_MAX;
    }

    ans = min(oneToV1ToV2ToNDist, oneToV2ToV1ToNDist);
    if(ans == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}

//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
//const int N_MAX = 801;
////    pair is weight, node
//vector<pair<int, int>> adj[N_MAX];
//
//pair<int,int> dijkstra(int begin, int end1, int end2)
//{
//    priority_queue<pair<int, int>> pq;
//    vector<int> dist(N_MAX, INT_MAX);
//    int cur, curDist;
//    int next, nextDist;
//
//    pq.push(make_pair(0, begin));
//    dist.assign(N_MAX, INT_MAX);
//    dist[pq.top().second] = 0;
//    while(!pq.empty())
//    {
//        curDist = pq.top().first;
//        cur = pq.top().second;
//        pq.pop();
//        if(curDist > dist[cur])
//        {
//            continue;
//        }
//        for(int i = 0 ; i < adj[cur].size(); i++)
//        {
//            nextDist = adj[cur][i].first + curDist;
//            next = adj[cur][i].second;
//            if(dist[next] > nextDist)
//            {
//                dist[next] = nextDist;
//                pq.push(make_pair(nextDist, next));
//            }
//        }
//    }
//
//    return make_pair(dist[end1], dist[end2]);
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, e;
////    a, b are edge
////    c is distance
//    int a, b, c;
////    must pass 2 nodes
//    int v1, v2;
//    int oneToV1Dist;
//    int oneToV2Dist;
//    int v1ToV2Dist;
//    int v2ToV1Dist;
//    int v1ToNDist;
//    int v2ToNDist;
//    int oneToV1ToV2ToNDist;
//    int oneToV2ToV1ToNDist;
//    int ans;
//    bool isPossible;
//    pair<int,int> pairIntInt;
//
//    cin >> n >> e;
//    for(int i = 1 ; i <= e ; i++)
//    {
//        cin >> a >> b >> c;
//        adj[a].push_back(make_pair(c, b));
//        adj[b].push_back(make_pair(c, a));
//    }
//    cin >> v1 >> v2;
//
//    pairIntInt = dijkstra(1, v1, v2);
//    oneToV1Dist = pairIntInt.first;
//    oneToV2Dist = pairIntInt.second;
//
//    pairIntInt = dijkstra(v1, v2, n);
//    v1ToV2Dist = pairIntInt.first;
//    v1ToNDist = pairIntInt.second;
//
//    pairIntInt = dijkstra(v2, v1, n);
//    v2ToV1Dist = pairIntInt.first;
//    v2ToNDist = pairIntInt.second;
//
//    isPossible = true;
//    if(oneToV1Dist == INT_MAX ||
//            v1ToV2Dist == INT_MAX ||
//            v2ToNDist == INT_MAX)
//    {
//        isPossible = false;
//    }
//    if(isPossible)
//    {
//        oneToV1ToV2ToNDist = oneToV1Dist + v1ToV2Dist + v2ToNDist;
//    }
//    else
//    {
//        oneToV1ToV2ToNDist = INT_MAX;
//    }
//
//    isPossible = true;
//    if(oneToV2Dist == INT_MAX ||
//            v2ToV1Dist == INT_MAX ||
//            v1ToNDist == INT_MAX)
//    {
//        isPossible = false;
//    }
//    if(isPossible)
//    {
//        oneToV2ToV1ToNDist = oneToV2Dist + v2ToV1Dist + v1ToNDist;
//    }
//    else
//    {
//        oneToV2ToV1ToNDist = INT_MAX;
//    }
//
//    ans = min(oneToV1ToV2ToNDist, oneToV2ToV1ToNDist);
//    if(ans == INT_MAX)
//    {
//        cout << -1;
//    }
//    else
//    {
//        cout << ans;
//    }
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
//const int N_MAX = 801;
////    pair is weight, node
//vector<pair<int, int>> adj[N_MAX];
//priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;
//priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq1;
////priority_queue<pair<int, int>, vector<pair<int,int>>> pq;
////priority_queue<pair<int, int>, vector<pair<int,int>>> pq1;
//vector<int> dist(N_MAX, INT_MAX);
//
//void dijkstra()
//{
//    int cur, curDist;
//    int next, nextDist;
//
//    dist.assign(N_MAX, INT_MAX);
//    dist[pq.top().second] = 0;
//    while(!pq.empty())
//    {
//        curDist = pq.top().first;
//        cur = pq.top().second;
//        pq.pop();
//        cout << "custDist " << curDist << " dist[cur] " << dist[cur];
//        if(curDist > dist[cur])
//        {
//            cout << " continue\n";
//            continue;
//        }
//        cout << "\n";
//        cout << "for(adj[" << cur << "])\n";
//        cout << "curDist " << curDist << "\n";
//        cout << "pushed pq = (\n";
//        for(int i = 0 ; i < adj[cur].size(); i++)
//        {
//            nextDist = adj[cur][i].first + curDist;
//            next = adj[cur][i].second;
//            cout << "{" << nextDist << ", " << next << "} ";
//            if(dist[next] > nextDist)
//            {
//                dist[next] = nextDist;
//                pq.push(make_pair(nextDist, next));
//            }
//            else{
//                cout << "x dist[" << next << "] = " << dist[next];
//            }
//            cout << "\n";
//        }
//        cout << ")\n";
//        pq1 = pq;
//        cout << "sorted pq = (\n";
//        while(!pq1.empty()){
//            cout << "{" << pq1.top().first << ", " << pq1.top().second << "}\n";
//            pq1.pop();
//        }
//        cout << ")\n\n";
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, e;
////    a, b are edge
////    c is distance
//    int a, b, c;
////    must pass 2 nodes
//    int v1, v2;
//    int oneToV1Dist;
//    int oneToV2Dist;
//    int v1ToV2Dist;
//    int v2ToV1Dist;
//    int v1ToNDist;
//    int v2ToNDist;
//    int oneToV1ToV2ToNDist;
//    int oneToV2ToV1ToNDist;
//    int ans;
//    bool isPossible;
//
//    cin >> n >> e;
//    for(int i = 1 ; i <= e ; i++)
//    {
//        cin >> a >> b >> c;
//        adj[a].push_back(make_pair(c, b));
//        adj[b].push_back(make_pair(c, a));
//    }
//    cin >> v1 >> v2;
//
//    pq.push(make_pair(0, 1));
//    dijkstra();
//    oneToV1Dist = dist[v1];
//    oneToV2Dist = dist[v2];
//
//    pq.push(make_pair(0, v1));
//    dijkstra();
//    v1ToV2Dist = dist[v2];
//    v1ToNDist = dist[n];
//
//    pq.push(make_pair(0, v2));
//    dijkstra();
//    v2ToV1Dist = dist[v1];
//    v2ToNDist = dist[n];
//
//    isPossible = true;
//    if(oneToV1Dist == INT_MAX ||
//            v1ToV2Dist == INT_MAX ||
//            v2ToNDist == INT_MAX)
//    {
//        isPossible = false;
//    }
//    if(isPossible)
//    {
//        oneToV1ToV2ToNDist = oneToV1Dist + v1ToV2Dist + v2ToNDist;
//    }
//    else
//    {
//        oneToV1ToV2ToNDist = INT_MAX;
//    }
//
//    isPossible = true;
//    if(oneToV2Dist == INT_MAX ||
//            v2ToV1Dist == INT_MAX ||
//            v1ToNDist == INT_MAX)
//    {
//        isPossible = false;
//    }
//    if(isPossible){
//        oneToV2ToV1ToNDist = oneToV2Dist + v2ToV1Dist + v1ToNDist;
//    }
//    else
//    {
//        oneToV2ToV1ToNDist = INT_MAX;
//    }
//
//    ans = min(oneToV1ToV2ToNDist, oneToV2ToV1ToNDist);
//    if(ans == INT_MAX)
//    {
//        cout << -1;
//    }
//    else
//    {
//        cout << ans;
//    }
//}
