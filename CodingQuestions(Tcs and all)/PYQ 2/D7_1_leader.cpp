#include <bits/stdc++.h>
using namespace std;

//O(N^2)
vector<int> leader_brute(vector<int> v) {
    int n = v.size();
    vector<int> ans;

    for(int i=0; i<n; i++) {
        int flag = true;
        for (int j = i+1; j < n; j++)
        {
            if(v[i] < v[j])
                flag = false;
        }
        if(flag == true) { 
            ans.push_back(v[i]);
        }
    }
    return ans;
}

//O(N)
vector<int> leader_opti(vector<int> v) {
    int n = v.size();
    vector<int> ans;
    int maxi = INT_MIN;

    for(int i=n-1; i>=0; i--) {
        if(v[i] > maxi) {
            maxi = v[i];
            ans.push_back(maxi);
        }
    }
    return ans;
}


int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2}; // ans: 17 5 2
    for(auto lt: leader_brute(v)){
        cout << lt << " " ;
    }
    cout << endl;
    for(auto lt: leader_opti(v)){
        cout << lt << " ";
    }
}