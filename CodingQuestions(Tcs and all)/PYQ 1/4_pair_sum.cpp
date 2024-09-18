#include <bits/stdc++.h>
using namespace std;

int pairSum(vector<int> v, int target){
    
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int size,target;
        vector<int> v;
        cin >> size;
        cin >> target;
        for(int i=0; i<size; i++){
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        cout << "Ans: " <<  pairSum(v,target) <<endl;
    }
    
}
// 1
// 4 6
// 2 4 6 7
