#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    map<string,int> m;
    while(t--) {
        string str;
        cin>>str;
        m[str]++;
    }
    int ans = -99;
    string a;
    for(map<string,int>::iterator itr = m.begin(); itr != m.end(); itr++) {
        if(itr->second > ans) {
            a = itr->first;
            ans = itr->second;
        }
    }

    cout<<a<<endl;




    return 0;
}
