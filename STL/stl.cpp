#include <bits/stdc++.h>
using namespace std;

void explainPair() {

    pair<int, int> p = {1, 3};

    cout << " " << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};

    cout << " " << p1.first 
         << " " << p1.second.first 
         << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {3,4}};

    cout << arr[0].second;
}

void explainVector(){
    vector<int> v1;
    v1.insert(v1.end(), {1,2,3,4,11,33});
    v1.emplace_back(2);

    vector<pair<int, int>> v2;

    v2.push_back({1, 2});
    v2.push_back({3, 4});
    v2.emplace_back(1,2);

    vector<int> v3(5, 100);
    vector<int> v4(5);

    vector<int> v5(v3);

    for(auto it : v3){
        cout << it << " ";
    }

    cout << endl;

    sort(v2.begin(), v2.end());

    for(auto it : v2){
        cout << it.first << " - " << it.second << endl;
    }

    cout << v1.at(2);

}

void explainMap(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map< pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});

}



/* 
    List :
        list<int> ls;
    Set, Queue, unordered_set<int> st;

*/

int main(void) {
    // explainPair(); 
    // explainVector();
    explainMap();
    return 0; 
}

/*
    Algorithms
    containers
    functions
    Iterators
*/