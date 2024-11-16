#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

//  ���� Ǯ�� ���̵��
//height[i]�� height[st.top()]���� ũ�ų� ���� ��� st.push(i)�� �ϰ�,
//height[i]�� height[st.top()]���� ���� ���
//���簢���� ������ ���ϸ� st.pop()�� �ݺ��Ѵ�.
//���簢���� height�� st.top()���� ���� �� �ְ�
//���簢���� widths�� st.pop()�� �ѹ��� �� st.top()���� ���� �� �ִ�.
//���簢���� �ִ밪�� �ݺ����� �ݺ��ϸ� ���ؼ� ���� �� �ִ�.
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
//    ���� Ǯ�̸� ���� �ʿ��� ������ ���̴�. height[0]�� ������ �ּҰ���,
//    st���� �� index�� 0�� push()�Ѵ�.
    st.push(0);
//    i <= n + 1�� ������ n�� ���ÿ� �ְ�, �� st.top()�� n����
//    height[n]�� heightArr[n + 1]�� ����
//    st.pop()�� �ϸ� ���簢���� ���� ���ϱ� ���ؼ��̴�.
//    heightArr[n + 1]�� 0�̴�.
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
