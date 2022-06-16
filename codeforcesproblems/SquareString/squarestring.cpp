#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n = a.length() / 2;
        if(a.substr(0,n) == a.substr(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
