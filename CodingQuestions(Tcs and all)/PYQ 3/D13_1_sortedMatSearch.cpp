#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,m,target;
    cin >> n >> m >> target;
    int ar[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> ar[i][j];
        }
    }
    int i = 0, j = n-1;
    while(j>=0 && i<=n-1) {
        if(ar[i][j] == target) {
            cout << "element found";
            return 1;
        } else if(ar[i][j] < target){
            i++;
        } else {
            j--;
        }
    }
            cout << "element not found";

    return 0;
}
// 2 2 4
// 1 2
// 3 4