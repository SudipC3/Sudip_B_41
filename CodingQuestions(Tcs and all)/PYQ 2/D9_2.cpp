#include <bits/stdc++.h>
using namespace std;

int sum_abs_pair_k(vector<int> v, int k){
    unordered_map<int,int> mp;
    int c = 0;
    for(int i=0; i<v.size(); i++){
        c += mp[v[i] - k];
        c += mp[v[i] + k];

        mp[v[i]]++;
    }
    return c;
}

int main()
{
    string s;
    getline(cin, s);
    vector<int> arr;
    stringstream ss(s);
    string token;

    while (getline(ss, token, ','))
    {
        int num = stoi(token);
        arr.push_back(num);
    }

    for (auto lt : arr)
        cout << lt << " ";
    cout << endl << sum_abs_pair_k(arr,2);
    // 3,2,1,5,4
}