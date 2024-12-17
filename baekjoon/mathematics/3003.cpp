#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int pieceNum;
    int* pieces;


    pieceNum = 6;
    pieces = new int[pieceNum];
    int completePieces[6] = {1, 1, 2, 2, 2, 8};
    for(int i = 0 ; i < pieceNum ; i++){
        cin >> pieces[i];
    }
    for(int i = 0  ; i < pieceNum ; i++){
        cout << completePieces[i] - pieces[i] << " " ;
    }
    return 0;
}
