#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<int> arr;
    stringstream ss(s);
    string token;

    while (getline(ss, token, ','))
    {
        int num = stoi(token);
        arr.push_back(num);
    }

    for (auto lt : arr)
        cout << lt << " ";

    // 2,1,1,3,4
}