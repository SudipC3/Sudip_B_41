#include <bits/stdc++.h>
using namespace std;

int kMaxSum(vector<int> v, int k){
    int n = v.size();
    int sum = 0;
    for(int i=0; i<k; i++){
        sum += v[i];
        cout << sum << endl;
    }

    int start = 0,end;
    int maxi = sum;

    for(end = k; end < n; end++){
        sum += v[end];
        sum -= v[start];
        cout << sum << endl;
        start++;
        maxi = max(maxi, sum);
    }

    return maxi;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int size,k;
        vector<int> v;
        cin >> size;
        cin >> k;
        for(int i=0; i<size; i++){
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        cout << "Ans: " <<  kMaxSum(v,k) <<endl;
    }
    
}
// 1
// 6 3
// 1 8 30 -5 20 7