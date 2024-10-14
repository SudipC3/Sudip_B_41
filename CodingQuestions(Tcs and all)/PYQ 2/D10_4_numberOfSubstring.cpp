#include<bits/stdc++.h>
using namespace std;

int noOfString(string v, int k){
    int f[26] = {0};
    int n = v.size();
    // map size
    int size = 0,l=0,r=0, ans = 0;

    for(;r<n;r++) { 
        char ch = v[r];
        f[ch - 'a']++;
        if(f[ch - 'a'] == 1) size++;

        while(size > k) {
            char ch = v[l];
            f[ch - 'a']--;
            if(f[ch- 'a'] == 0) size--;
            l++;
        }

        ans += r-l+1;
    }

    return ans;

}
    
int main(){
    
    string v;
    getline(cin,v);
    int k;
    cin >> k;

    // for(string st: v) cout << st << " ";

    cout << noOfString(v,k) - noOfString(v,k-1) << endl;
    // cout << noOfString(v,k-1);
    // cout << noOfString(v,k);
    return 0;
}

/*

aba 2 
3
ab ba aba

*/