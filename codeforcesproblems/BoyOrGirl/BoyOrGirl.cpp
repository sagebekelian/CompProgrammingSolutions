#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    set<char> s;
    for (int i = 0; i < str.length(); i++) {
        s.insert(str[i]);
    }
    if (s.size() % 2 == 1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;



    return 0;
}
