#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    int b;
    int ans;

    cin >> n >> b;
    ans = 0;
    for(int i = 0 ; i < n.size() ; i++){
//        A = 65 0 = 48
        if(n[i] >= 65){
            n[i] = n[i] - 65 + 10;
        }
        else{
            n[i] -= 48;
        }
        ans += n[i] * pow(b, n.size() - i - 1);
    }

    cout << ans;
    return 0;
}
