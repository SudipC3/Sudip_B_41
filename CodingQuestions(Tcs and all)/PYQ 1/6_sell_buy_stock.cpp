#include <bits/stdc++.h>
using namespace std;

int buySellStocks(vector<int> v){
    int n = v.size();
    
    int mini = v[0], profit = 0;

    for(int i=1; i<n; i++){
        if(v[i] < mini){
            mini = v[i];
        } else {
            int currentProfit = v[i] - mini;
            profit = max(profit, currentProfit);
        }
    }

    return profit;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int size,k;
        vector<int> v;
        cin >> size;
        for(int i=0; i<size; i++){
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        cout << "Ans: " <<  buySellStocks(v) <<endl;
    }
    
}
// 1
// 6
// 7 1 5 3 6 4
// Ans: 5