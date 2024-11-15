#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//  문제 해결 메인 아이디어
//for(i = 0 ; i < n)반복문에 stack인 st에는 index가 push된다.
//while 반복문의 조건으로 aCntVec 두개를 비교할 때 현재 index보다 stack에 들어있는 index의 값이 작은지 비교한다.
//현재 index를 기준으로 st.top()의 값인 인덱스를 비교하게 되고, ngfVec은 ngf의 의미에 맞는 큰 수를 저장해야한다.
//ngfVec에는 현재 index에 해당하는 aVec 값 넣기를 반복하고, ngfVec은 st.top()를 인덱스로 갖는 부분에 대입하기를 반복하게 된다.
//위를 코드로 풀이하면 ngfVec[st.top()] = aVec[i]이고, st.pop()한다.
//밑의 예시와 위의 설명에 해당하는 메인에 코드를 함께 보면 실행 구조를 이해하기 쉽다.
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int num;
    vector<int> aVec;
    vector<int> aCntVec;
    vector<int> ngfVec;
    stack<int> st;

    cin >> n;
    aVec.resize(n);
    aCntVec.resize(1000001, 0);
    ngfVec.resize(n, -1);
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        aVec[i] = num;
        aCntVec[num]++;
    }
//    core
    for(int i = 0 ; i < n ; i++){
        while(!st.empty() && aCntVec[aVec[st.top()]] < aCntVec[aVec[i]]){
            ngfVec[st.top()] = aVec[i];
            st.pop();
        }
        st.push(i);
    }
//    while(!st.empty()){
//        ngfVec[st.top()] = -1;
//        st.pop();
//    }
    for(int i = 0 ; i < n ; i++){
        cout << ngfVec[i] << ' ';
    }

    return 0;
}
