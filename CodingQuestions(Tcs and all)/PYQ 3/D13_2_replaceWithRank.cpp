#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v) {
    vector<int> dup = v;
    sort(dup.begin(), dup.end());
    map<int,int> mp;

    int idx = 0;
    for(int i=0; i<dup.size(); i++) {
        if(mp.count(dup[i]))
            continue;
        idx+=1;
        mp[dup[i]] = idx;
    }

    for(int i=0; i<v.size(); i++) {
        // int v = v[i];
        v[i] = mp[v[i]];
    }

    for(int i=0; i<v.size(); i++) {
        cout<<v[i] << " ";
    }
}

int main() {

    string str;
    getline(cin,str);

    stringstream ss(str);
    string tk;
    vector<int> v;

    while(getline(ss,tk,' ')) {
        int num = stoi(tk);
        v.push_back(num);
    }

    solve(v);
    
    return 0;
}

//ip: 2 1 1 4
// 2 1 1 3

// ip: 20 15 26 2 98 6
// 4 3 5 1 6 2