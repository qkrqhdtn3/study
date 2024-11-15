#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//  ���� �ذ� ���� ���̵��
//for(i = 0 ; i < n)�ݺ����� stack�� st���� index�� push�ȴ�.
//while �ݺ����� �������� aCntVec �ΰ��� ���� �� ���� index���� stack�� ����ִ� index�� ���� ������ ���Ѵ�.
//���� index�� �������� st.top()�� ���� �ε����� ���ϰ� �ǰ�, ngfVec�� ngf�� �ǹ̿� �´� ū ���� �����ؾ��Ѵ�.
//ngfVec���� ���� index�� �ش��ϴ� aVec �� �ֱ⸦ �ݺ��ϰ�, ngfVec�� st.top()�� �ε����� ���� �κп� �����ϱ⸦ �ݺ��ϰ� �ȴ�.
//���� �ڵ�� Ǯ���ϸ� ngfVec[st.top()] = aVec[i]�̰�, st.pop()�Ѵ�.
//���� ���ÿ� ���� ���� �ش��ϴ� ���ο� �ڵ带 �Բ� ���� ���� ������ �����ϱ� ����.
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
