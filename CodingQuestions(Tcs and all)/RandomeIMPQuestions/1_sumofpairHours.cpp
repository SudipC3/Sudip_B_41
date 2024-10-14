#include<bits/stdc++.h>
using namespace std;

int sumOfPairHour(vector<int> v, int n) {
    unordered_map<int,int> mp;
    int c = 0,modu,req;
    for(int i=0; i<n; i++) {
        modu = v[i] % 60;

        if(modu == 0 && v[i] != 0) 
                    req = 0;
        else 
                    req = 60 - modu;

        if(mp.count(req) > 0) {
            c += mp[req];
        }

        mp[modu]++;

    }
    return c;
}

int main() {
    int n ;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        v.push_back(val);
    }
    // for(int i : v) cout << i << " ";
    cout << sumOfPairHour(v,n);

    return 0;
}

// 4 
// 1 59 30 30 

// 5
// 2 2 58 60 60

// 5
// 30 20 150 100 40