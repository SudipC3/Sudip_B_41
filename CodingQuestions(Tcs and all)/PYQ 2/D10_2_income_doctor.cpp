#include<bits/stdc++.h>
using namespace std;

void doctor_income(vector<int> v) {
    int income = 0,age;
    for(int i=0; i<v.size(); i++) {
        age = v[i];
        if(age < 17){
        income += 200;
        } else if(age >= 17 && age <= 40) {
        income += 400;
        } else if (age > 40 ) {
        income +=300;
        }

    }

    cout << income;
    
}
    
int main(){
    vector<int> v;
    int maxp = 20;
    while(v.size() < maxp){
        string input;
        getline(cin,input);
        if(input.empty())
            break;
        
        int number = stoi(input);
        if(number <= 0 || number >120){
            cout << "Invalid age";
            break;
        }

        v.push_back(number);
    }
    doctor_income(v);

    return 0;
}