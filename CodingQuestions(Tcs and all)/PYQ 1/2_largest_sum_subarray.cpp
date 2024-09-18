#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> v){
    int maxi = INT_MIN;
    int csum = 0;

    for(int i=0; i< v.size(); i++){
        csum+= v[i];
        maxi = max(csum, maxi);

        if(csum < 0){
            csum = 0;
        }
    }
    return maxi;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        vector<int> v;
        cin >> size;
        for(int i=0; i<size; i++){
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        cout << "Ans: " <<  maxSumSubarray(v) <<endl;
    }
    
}
// Input: arr[] = {2, 3, -8, 7, -1, 2, 3}
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.

// Input: arr[] = {-2, -4}
// Output: –2
// Explanation: The subarray {-2} has the largest sum -2.

// Input: arr[] = {5, 4, 1, 7, 8}
// Output: 25
// Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.

// 3
// 7
// 2 3 -8 7 -1 2 3
// 2
// -2 -4
// 5
// 5 4 1 7 8
