#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, t1;
    int m, a, b ,c;
    int m1, m2, m3, m4;
    int c1;

    cin >> t;
    for(int t1 = 0 ; t1 < t ; t1++){
        cin >> m >> a >> b >> c;
        m1 = m;
        m2 = m;
        if(m1 > a){
            m1 -= a;
        } else{
            m1 = 0;
        }
        if(m2 > b){
            m2 -= b;
        } else{
            m2 = 0;
        }
        m3 = m1 - c;
        if(m3 > 0){
            m1 = m3;
        } else if(m3 == 0){
            m1 = 0;
        }
        else{
            m1 = 0;
            m2 += m3;
            if(m2 < 0){
                m2 = 0;
            }
        }
        cout << m - m1 + m - m2 << "\n";
    }
    return 0;
}