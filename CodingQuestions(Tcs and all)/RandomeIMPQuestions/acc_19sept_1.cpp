#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c = 0;
    for(int i=0; i<n; i++) {
        for(int j=1; j <= (i+1); j++) {
            cout << ++c << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
i/p 3
1
2 3
4 5 6
*/ 