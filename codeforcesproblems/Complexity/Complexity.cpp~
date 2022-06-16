#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    map<char,int> m;
    for (int i = 0; i < (int)str.length(); i++) {
        m[str[i]]++;
    }
    int max1 = 0, max2 = 0, ans = (int)str.length();
    char x;
    for(map<char,int>::iterator it = m.begin(); it != m.end(); it++) {
        if(it->second > max1){ 
            max1 = it->second;
            x = it->first;
        }
    }
    for(map<char,int>::iterator it = m.begin(); it != m.end(); it++) {
        if(it->second > max2 && it->second <= max1 && it->first != x){ 
            max2 = it->second;
        }
    }
    ans -= (max1+max2);
    cout<<ans<<endl;


    return 0;
}
