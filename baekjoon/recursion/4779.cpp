#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

//3^12 == 531441
char ans[531442];

void cantorSet(int first, int last)
{
    int p1, p2;
    int diff, diffDiv3;

    diff = last - first;
    if(diff == 0)
    {
        ans[first] = '-';
        return;
    }
//    diff + 1은 3의 배수
    diffDiv3 = (diff + 1) / 3;
    p1 = first + diffDiv3;
    p2 = first + diffDiv3 * 2;
    cantorSet(first, p1 - 1);
//    cantorSet(p1, p2 - 1);
//    for(int i = p1 ; i < p2 ; i++){
//        ans[i] = ' ';
//    }
    fill(&ans[p1], &ans[p2], ' ');
    cantorSet(p2, last);

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int last;

    while(cin >> n)
    {
        last = pow(3, n) - 1;
        cantorSet(0, last);
        ans[last + 1] = '\0';
        cout << ans << '\n';
    }
    return 0;
}


//void cantorSet(char* ans, int first, int last)
//{
//    int length;
//
//    length = last - first + 1;
//    if(length == 1)
//    {
//        ans[first] = '-';
//        return;
//    }
//    cantorSet(ans, first, first + length / 3 - 1);
////    cantorSet(p1, p2 - 1);
////    for(int i = p1 ; i < p2 ; i++){
////        ans[i] = ' ';
////    }
//    fill(&ans[first + length / 3], &ans[last - length / 3 + 1], ' ');
//    cantorSet(ans, last - length / 3 + 1, last);
//
//    return;
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    int last;
//    char ans[531442] = {};
//
//    while(cin >> n)
//    {
//        last = pow(3, n) - 1;
//        cantorSet(ans, 0, last);
//        ans[last + 1] = '\0';
//        cout << ans << '\n';
//    }
//    return 0;
//}
