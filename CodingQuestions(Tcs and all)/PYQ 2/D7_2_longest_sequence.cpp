#include <bits/stdc++.h>
using namespace std;

int ls(vector<int> v, int t) {
     int n = v.size();
     for(int i=0; i<n; i++) {
        if(v[i] == t)
        return 1;
     }
     return 0;
}

vector<int> succ_sequence_brute(vector<int> v){
    int n = v.size();
    vector<int> ans;
    int c, longest = 0;

    for (int i = 0; i < n; i++)
    {
        c = 1;
        int x = v[i]+1;
        while(ls(v,x) != 0) { 
            c++;
            x++;
        }
        longest = max(longest, c);
    }
    
    ans.push_back(longest);
    return ans;
}

int main() {
    vector<int> v = {5, 8, 3, 2, 1, 4}; // ans: 5
    for(auto lt: succ_sequence_brute(v)){
        cout << lt << " ";
    }
    cout << endl;
    for(auto lt: succ_sequence_brute(v)){
        cout << lt << " ";
    }
}