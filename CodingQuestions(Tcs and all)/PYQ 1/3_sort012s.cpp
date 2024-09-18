#include <bits/stdc++.h>
using namespace std;

vector<int> sort012(vector<int> v){
    int n = v.size();
    int l=0,m=0,h=n-1;

    while(m < h) {
        if(v[m] == 0){
            swap(v[l], v[m]);
            l++;
            m++;
        } else if (v[m] == 1){
            m++;
        } else {
            swap(v[m], v[h]);
            h--;
        }
    }
    return v;
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
        v = sort012(v);
        cout << "Ans: ";
        for(auto ele: v)
            cout << ele << " ";
        cout << endl;
    }
    
}

