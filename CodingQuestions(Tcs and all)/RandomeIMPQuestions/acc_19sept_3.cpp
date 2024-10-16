#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    if(s.front() == '"' && s.back() == '"')
        s.substr(1, s.size()-2);

    unordered_map<char,int> mp;
    for(int i=0; i < s.size(); i++) {
        char ch = s[i];
        mp[ch]++;
        
        if(mp[ch] == 2){
            cout << ch;
            return 0;
        }
    }
    cout << -1;
 
    return 0;
}

/*
i/p 3
1
2 3
4 5 6
*/ 