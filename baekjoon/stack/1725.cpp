#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

//  문제 풀이 아이디어
//height[i]가 height[st.top()]보다 크거나 같은 경우 st.push(i)만 하고,
//height[i]가 height[st.top()]보다 작은 경우
//직사각형의 면적을 구하며 st.pop()을 반복한다.
//직사각형의 height는 st.top()으로 구할 수 있고
//직사각형의 widths는 st.pop()를 한번한 후 st.top()으로 구할 수 있다.
//직사각형의 최대값은 반복문을 반복하며 비교해서 구할 수 있다.
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    stack<int> st;
    vector<int> heightArr;
    int curHeightIndex;
    int curWidthIndex;
    int curMaxHeight;
    long long curArea;
    long long maxArea;

    cin >> n;
    heightArr.resize(n + 2, 0);
    maxArea = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> heightArr[i];
    }
//    밑의 풀이를 위해 필요한 가정된 값이다. height[0]은 높이의 최소값을,
//    st에는 그 index인 0을 push()한다.
    st.push(0);
//    i <= n + 1인 이유는 n을 스택에 넣고, 그 st.top()인 n으로
//    height[n]과 heightArr[n + 1]을 비교해
//    st.pop()을 하며 직사각형의 값을 구하기 위해서이다.
//    heightArr[n + 1]은 0이다.
    for(int i = 1 ; i <= n + 1 ; i++){
        while(!st.empty() && heightArr[st.top()] > heightArr[i]){
            curHeightIndex = st.top();
            st.pop();
            curWidthIndex = st.top();
            curArea = heightArr[curHeightIndex] * ((i - 1) - curWidthIndex);
            maxArea = max(maxArea, curArea);
        }
        st.push(i);
    }
    cout << maxArea;
    return 0;
}
