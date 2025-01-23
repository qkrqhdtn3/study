#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n + 1);
        vector<pair<int,int>> b(n + 1);
        vector<int> c(n + 1);
        bool visited[n + 1] = {};
        for(int i = 1 ; i <= n ; i++)
        {
            b[i] = {i, 0};
        }
        for(int i = 0 ; i < n - 1 ; i++)
        {
            int input1, input2;
            cin >> input1 >> input2;
            a[input1].push_back(input2);
            a[input2].push_back(input1);
            b[input1].second++;
            b[input2].second++;
        }
//        if(n == 2){
//            cout << 0 << "\n";
//            continue;
//        }
//        else if(n == 3){
//            cout << 1 << "\n";
//            continue;
//        }
//        else if(n == 4){
//            cout << 2 << "\n";
//            continue;
//        }
        for(int i = 1 ; i <= n ; i++)
        {
            for(auto it : a[i])
            {
                c[i] = max(c[i], b[it].second);
            }
        }
        sort(b.begin(), b.end(),
             [&](pair<int,int> p1, pair<int,int> p2)
        {
            if(p1.second == p2.second)
            {
                return c[p1.first] < c[p2.first];
            }
            else
            {
                return p1.second > p2.second;
            }
//            return p1.second > p2.second;
        });
        int ans = 0;
//        ans += b[0].second;
        int cur = b[0].first;
//        visited[cur] = true;
//        int ptr = 0;
//        for(int i = 0 ; i < a[cur].size() ; i++)
//        {
//            int adjInd = a[cur][i];
//            for(int j = 0 ; j < a[adjInd].size() ; j++)
//            {
//                if(cur == a[adjInd][j])
//                {
////                    ptr = j;
////                    a[adjInd][j] = *(a[adjInd].end() - 1);
//                    *(a[adjInd].end() - 1) = a[adjInd][j];
//                    a[adjInd].erase(a[adjInd].end() - 1);
//                    break;
//                }
//            }
////            a[adjInd][ptr] = 0;
////            a[adjInd].size() - 1;
////            a[cur][i];
//        }
        bool flag1 = false;
        bool flag2 = false;
//        0 1 2 이어지지 않은 정점 중 두개
        if(b[0].second == b[1].second && b[0].second == b[2].second)
        {
            cur = b[0].first;
            for(int i = 0 ; i < a[cur].size() ; i++)
            {
                if(b[1].first == a[cur][i])
                {
                    flag1 = true;
//                    break;
                }
                if(b[2].first == a[cur][i])
                {
                    flag2 = true;
//                    break;
                }
            }
            if(flag1 && flag2)
            {
                visited[b[1].first] = true;
                visited[b[2].first] = true;
            }
            else
            {
                flag1 = false;
                flag2 = false;
                cur = b[1].first;
                for(int i = 0 ; i < a[cur].size() ; i++)
                {
                    if(b[0].first == a[cur][i])
                    {
                        flag1 = true;
//                        break;
                    }
                    if(b[2].first == a[cur][i])
                    {
                        flag2 = true;
//                        break;
                    }
                }
                if(flag1 && flag2)
                {
                    visited[b[0].first] = true;
                    visited[b[2].first] = true;
                }
                else
                {
                    flag1 = false;
                    flag2 = false;
                    cur = b[2].first;
                    for(int i = 0 ; i < a[cur].size() ; i++)
                    {
                        if(b[0].first == a[cur][i])
                        {
                            flag1 = true;
//                            break;
                        }
                        if(b[1].first == a[cur][i])
                        {
                            flag2 = true;
//                            break;
                        }
                    }
                    if(flag1 && flag2)
                    {
                        visited[b[0].first] = true;
                        visited[b[1].first] = true;
                    }
                    else
                    {
                        flag1 = false;
                        flag2 = false;
                        cur = b[0].first;
                        for(int i = 0 ; i < a[cur].size() ; i++)
                        {
                            if(b[1].first == a[cur][i])
                            {
                                flag1 = true;
//                    break;
                            }
                            if(b[2].first == a[cur][i])
                            {
                                flag2 = true;
//                    break;
                            }
                        }
                        if(flag1 || flag2)
                        {
                            visited[b[1].first] = true;
                            visited[b[2].first] = true;
                        }
                        else
                        {

                            visited[b[0].first] = true;
                            visited[b[1].first] = true;
                        }
                    }
                }
            }
        }
//        2와 이어지지 않은 0 1 정점 중 하나
        else if(b[0].second == b[1].second && b[0].second == b[2].second + 1)
        {
            visited[b[0].first] = true;
            visited[b[1].first] = true;
//            cur = b[2].first;
//            for(int i = 0 ; i < a[cur].size() ; i++)
//            {
//                if(b[0].first == a[cur][i])
//                {
//                    flag1 = true;
//                    break;
//                }
//                if(b[1].first == a[cur][i])
//                {
//                    flag2 = true;
//                    break;
//                }
//            }
//            if(flag1){
//                visited[b[1].first]] = true;
//                visited
//            }
//            else{
//
//            }
        }
//        0과 이어지지 않은 1 2 정점 중 하나
        else if(b[0].second != b[1].second && b[1].second == b[2].second)
        {
            cur = b[0].first;
            for(int i = 0 ; i < a[cur].size() ; i++)
            {
                if(b[1].first == a[cur][i])
                {
                    flag1 = true;
                    break;
                }
                if(b[2].first == a[cur][i])
                {
                    flag2 = true;
                    break;
                }
            }
            if(flag1)
            {
                visited[b[0].first] = true;
                visited[b[2].first] = true;
            }
            else
            {
                visited[b[0].first] = true;
                visited[b[1].first] = true;
            }
        }
//        0 1 정점 두개
        else
        {
            visited[b[0].first] = true;
            visited[b[1].first] = true;
        }
//        for(int i = 0 ; i < n ; i++){
//            for(int j = 0 ; j < a[b[i].first].size() ; j++){
//
//            }
//        }
//        int ptr = 0;
//        for(int i = 0 ; i <= n ; i++){
//            if(b[0].second != b[i].second) break;
//            ptr++;
//        }
//        for(int i = 0 ; i <= ptr ; i++){
//            if(auto num : a[b1]){
//                if
//            }
//        }
//        if(auto num : a[b1]){
//            b[num] = 0;
//
//        }
//        cout << b[0].first << ' ' << b[1].first << ' ' << b[2].first << "\n";
//        cout << b[0].second << ' ' << b[1].second << ' '<< b[2].second;
//        for(int i = 1 ; i <= n ; i++){
//            cout << visited[i] << ' ';
//        }
//        return 0;
        queue<int> q;
        for(int i = 1 ; i <= n ; i ++)
        {
//            if(!visited[i]){
//                ans++;
//            }
            if(!visited[i])
            {
                q.push(i);
                while(!q.empty())
                {
                    cur = q.front();
                    q.pop();
                    if(!visited[cur])
                    {
                        visited[cur] = true;
                        for(int j = 0 ; j < a[cur].size() ; j++)
                        {
                            q.push(a[cur][j]);
//                            visited[a[cur][j]] = true;
                        }
                    }
                }
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
