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
        string s;
        cin >> s;
        string t;
        bool flag1 = false;
        bool flag2 = false;
        bool flag3 = false;
        int ptr2 = 0;
        int ptr3 = 0;
        int cnt = 0;
        while(!flag1){
            ptr2 = 0;
            ptr3 = 0;
            flag2 = true;
            flag3 = true;
            // s 연산
            for(int i = s.size() - 1 ; i >= 0 ; i--){
                if(s[i] == '1'){
                    flag2 = false;
                    for(int j = i - 1 ; j >= 0 ; j--){
                        if(s[j] == '0'){
                            ptr2 = j + 1;
                            break;
                        }
                    }
                }
            }
            if(!flag2){
                cnt++;
                t.append(s.substr(ptr2, s.length() - ptr2));
                s.erase(ptr2, s.length() - ptr2);
            }
            // t 연산
            for(int i = t.size() - 1 ; i >= 0 ; i--){
                if(t[i] == '0'){
                    flag3 = false;
                    for(int j = i - 1 ; j >= 0 ; j--){
                        if(t[j] == '1'){
                            ptr3 = j + 1;
                            break;
                        }
                    }
                }
            }
            if(!flag3){
                cnt++;
                s.append(t.substr(ptr3, t.length() - ptr3));
                t.erase(ptr3, t.length() - ptr3);
            }
            if(flag2 && flag3){
                flag1 = true;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
