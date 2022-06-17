#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    map<char,int> m;
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != '+') m[str[i]]++;
    }
    string a = "";
    for(map<char,int>::iterator itr = m.begin(); itr != m.end(); itr++){
        for(int i = 0; i < itr->second; i++) {
            a += itr->first;
            a += '+';
        }
    }
    if(a[a.length()-1] == '+') {
        for(int i = 0; i < a.length()-1; i++) {
            cout<<a[i];
        }
        cout<<endl;
    }else cout<<a<<endl;
    
    
    
    return 0;
}