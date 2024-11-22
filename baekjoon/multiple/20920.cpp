#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

//bool compare(pair<string, int> p1, pair<string, int> p2){
//    if(p1.second > p2.second){
//        return p1 > p2;
//    }
//    if(p1.first.length() > p2.first.length()){
//        return p1 > p2;
//    }
//    return p1 < p2;
//}

//bool compare(pair<string, int>& p1, pair<string, int>& p2){
//    if(p1.second > p2.second){
//        return p1 > p2;
//    }
//    if(p1.first.length() > p2.first.length()){
//        return p1 > p2;
//    }
//    return p1 < p2;
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m;
//    unordered_map<string, int> um;
//    string word;
//    unordered_map<string, int> :: iterator umIt;
//
//    cin >> n >> m;
//    for(int i = 0 ; i < n ; i++){
//        cin >> word;
//        if(word.length() >= m){
//            umIt = um.find(word);
//            if(umIt != um.end()){
//                umIt->second++;
//            }
//            else{
//                um[word] = 1;
//            }
//        }
//    }
//    vector<pair<string, int>> vec(v.begin())
//    sort(um.begin(), um.end(), compare);
//    for(auto it = um.cbegin() ; it != um.cend() ; it++){
//        cout << it->first << '\n';
//    }
//    return 0;
//}

//bool compare(pair<string, int>& p1, pair<string, int>& p2){
//    if(p1.second > p2.second){
//        return p1.second > p2.second;
//    }
//    if(p1.first.length() > p2.first.length()){
//        return p1.first.length() > p2.first.length();
//    }
//    return p1.first < p2.first;
//}

bool compare(pair<string, int>& p1, pair<string, int>& p2){
    if(p1.second == p2.second){
        if(p1.first.length() == p2.first.length()){
            return p1.first < p2.first;
        }
        return p1.first.length() > p2.first.length();
    }

    return p1.second > p2.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    unordered_map<string, int> um;
    string word;
    unordered_map<string, int> :: iterator umIt;
    vector<pair<string, int>> v;

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        cin >> word;
        if(word.length() >= m){
            umIt = um.find(word);
            if(umIt != um.end()){
                umIt->second++;
            }
            else{
                um[word] = 1;
            }
        }
    }
    v.resize(um.size());
    copy(um.begin(), um.end(), v.begin());
//    v.assign(um.begin(), um.end());
    sort(v.begin(), v.end(), compare);
    for(auto it = v.cbegin() ; it != v.cend() ; it++){
        cout << it->first << '\n';
    }

    return 0;
}
