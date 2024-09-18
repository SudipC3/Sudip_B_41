#include <bits/stdc++.h>
using namespace std;

void cipher(string s, int k){
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        // digit
        if(ch >= '0' && ch <= '9'){
            int ran = ch+k;
            if(ran > '9'){
                int diff = ran - '9';
                s[i] = '0' + diff - 1;

                // s[i] = '0' + ('9' - '0') % (ran - '0')  ;

            } else {
                s[i] = (char) ran;
            }
        }
        // capital

        // lower
    }

    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        cout << ch << " ";
    }
}

int main() {
    string s = "889";
    int k = 2;
    cipher(s,k);
}