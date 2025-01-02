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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n + 1);
        for(int i = 1 ; i <= n - 1 ; i += 2){
            a[i] = 1;
            a[i + 1] = 0;
        }
        if(n % 2 == 0){
//            if(x + 1 == y || (x == 1 && y == n)){
            if(x + 1 == y){

            }
            else if(x + 1 != y){
                if(x % 2 == 1){
                    if(y % 2 == 1){
                        a[x] = 2;
//                        a[y] = 1;
                    }
                    else if(y % 2 == 0){
//                        a[x] = 1;
//                        a[y] = 0;
                    }
                }
                else if(x % 2 == 0){
                    if(y % 2 == 1){
//                        a[x] = 0;
//                        a[y] = 1;
                    }
                    else if(y % 2 == 0){
                        a[x] = 2;
//                        a[y] = 0;
                    }
                }
            }
        }
        else if(n % 2 == 1){
            a[n] = 2;
//            if(x + 1 == y || (x == 1 && y == n)){
            if(x + 1 == y){

            }
            else if(x + 1 != y){
                if(x % 2 == 1){
                    if(y % 2 == 1){
                        a[x] = 2;
//                        if(x == 1 && y == 1){
//                            a[x] = 3;
//                            a[y] = 1;
//                        }


//                        if(x == 1){
//                            a[x] = 3;
////                            a[y] = 1;
//                        }
//                        else if(y == 1){
//                            a[x] = 2;
////                            a[y] = 1;
//                        }
                        if(x == 1){
                            a[n] = 1;
                            a[x] = 2;
//                            a[y] = 1;
                        }
                        if(y == n){
                            a[n] = 1;
                            a[1] = 2;
                        }
//                        else if(y == 1){
////                            a[n] = 1;
//                            a[x] = 2;
////                            a[y] = 1;
//                        }
                    }
                    else if(y % 2 == 0){
//                        if(y == n - 1 || y == 1){
//                            a[x] = 1;
//                            a[y] = 0;
//                        }
                    }
                }
                else if(x % 2 == 0){
                    if(y % 2 == 1){

                    }
                    else if(y % 2 == 0){
                        a[x] = 2;
//                        if(x == n - 1 && y == n - 1){
//                            a[y] = 3;
//                        }
//                        if(x == n - 1){
//                            a[x] = 3;
////                            a[y] = 0;
//                        }
                        if(y == n - 1){
//                            a[x] = 0;
                            a[x] = 2;
//                            a[y] = 0;
                        }
                        if(a[2] == 2){
                            a[1] = 0;
                            a[n] = 1;
                        }
                    }
                }
            }
        }
        for(int i = 1 ; i <= n ; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
