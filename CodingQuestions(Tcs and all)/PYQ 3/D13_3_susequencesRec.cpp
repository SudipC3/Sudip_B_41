#include<bits/stdc++.h>
using namespace std;

void solve(int idx,vector<int> v2,vector<int> v, int n) {

    if(idx >= n) {
        for(int val: v2) cout << val << " ";
        cout << endl;
        return;
    }

    // take
    v2.push_back(v[idx]);
    solve(idx+1, v2, v, n);

    // not take
    v2.pop_back();
    solve(idx+1, v2, v, n);

}

int main() {

    string in;
    getline(cin,in);
    
    vector<int>v;
    stringstream ss(in);
    string tk;

    while(getline(ss,tk,' ')) {
        int num = stoi(tk);
        v.push_back(num);
    }
    
    vector<int> v2;
    int n = v.size();
    solve(0,v2,v,n);

    return 0;
}