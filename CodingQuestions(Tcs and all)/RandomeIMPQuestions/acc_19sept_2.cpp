#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans;
    int p3=0, p2=1,p1=1;
    for(int i=3; i <= n; i++) {
        ans = p1 + p2 + p3;
        cout << ans << endl;
        
        p3 = p2;
        p2 = p1;
        p1 = ans;
    }
    cout << p1;
    return 0;
}

/*
tn = tn-1 + tn-2 + tn-3
t0 = 0
t1 = 1
t2 = 1


i/p: 4
o/p: 4
*/ 
