#include<bits/stdc++.h>
using namespace std;

int product(int a, int b, int c) {
        if(a !=7 && b!=7 && c!=7){
            return a*b*c;
        } else if(b!=7 && c!=7) {
            return b*c;
        } else if(c != 7) {
            return c;
        } else {
            return -1;
        }
    }
    
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    cout << product(a,b,c);

    return 0;
}