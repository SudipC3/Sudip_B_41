#include<bits/stdc++.h>
using namespace std;

string comString(vector<string> v){
    int n = v.size();
    sort(v.begin(), v.end());
    // for(string st: v)    cout << st << " ";
    string st1 = v[0];
    string st2 = v[n-1];
    int c = 0;
    for(int i=0; i < min(st1.size(), st2.size()); i++){
        if(st1[i] == st2[i]){
            c++;
        } else {
            break;
        }
    }
    return st1.substr(0,c);
}
    
int main(){
    string input;
    getline(cin,input);
    if(input.front() == '[' && input.back() == ']')
        input = input.substr(1,input.size()-2);

    stringstream ss(input);
    string token;
    vector<string> v;
    while(getline(ss,token, ',')){
        int size = token.size();
        string str = token.substr(1,size-2);

        v.push_back(str);
    }
    // for(string st: v) cout << st << " ";

    cout << comString(v);
    return 0;
}

/*

["hello","hel"]

*/