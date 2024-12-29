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
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<bool> visited(n + 1);
        for(int i = 0 ; i < n ; i++){
            int num;
            cin >> num;
            if(visited[num]){

            }
            else{
                b[i] = num;
                visited[num] = true;
            }
        }
        int ptr = 1;
        for(int i = 0 ; i < n ; i++){
            if(b[i]){
                continue;
            }
//            while(ptr < n && visited[ptr]){
            while(ptr <= n && visited[ptr]){
                ptr++;
            }
            if(ptr > n){
                assert(0);
            }
            b[i] = ptr++;
        }
        for(int i = 0 ; i < n ; i++){
            cout << b[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}
