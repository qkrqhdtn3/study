// 문제 해결 방법
// 1. 풍선을 터뜨리고 이동
// 2. 이동하고 풍선을 터뜨리기

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    deque<pair<int,int>> dq;
    int n;
    int moveNum;

    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> moveNum;
        dq.push_back(make_pair(i, moveNum));
    }
    while(true){
        cout << dq.front().first << ' ';
        moveNum = dq.front().second;
        dq.pop_front();
        if(dq.empty()){
            break;
        }
        else if(moveNum > 0){

            for(int i = 0 ; i < moveNum - 1 ; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{
            for(int i = 0 ; i < (-1) * moveNum ; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}

//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    deque<pair<int,int>> dq;
//    int n;
//    int moveNum;
//
//    cin >> n;
//    dq.push_back(make_pair(0, 1));
//    for(int i = 1 ; i <= n ; i++){
//        cin >> moveNum;
//        dq.push_back(make_pair(i, moveNum));
//    }
//    moveNum = dq.front().second;
//    dq.pop_front();
//    while(!dq.empty()){
//        if(moveNum > 0){
//            for(int i = 0 ; i < moveNum - 1 ; i++){
//                dq.push_back(dq.front());
//                dq.pop_front();
//            }
//        }
//        else{
//            for(int i = 0 ; i < (-1) * moveNum ; i++){
//                dq.push_front(dq.back());
//                dq.pop_back();
//            }
//        }
//        cout << dq.front().first << ' ';
//        moveNum = dq.front().second;
//        dq.pop_front();
//    }
//    return 0;
//}
