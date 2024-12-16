#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int s;
    char c[101];
    int cLen;

    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> c;
        cLen = strlen(c);
        for(int j = 0 ; j <= cLen ; j++){
            if(c[j] == 'p'){
                c[j] = 'q';
            }
            else if(c[j] == 'q'){
                c[j] = 'p';
            }
        }
        reverse(c, c + cLen);
        cout << c << "\n";
    }
    return 0;
}