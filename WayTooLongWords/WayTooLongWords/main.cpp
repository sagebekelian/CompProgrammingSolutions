#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int n;
    cin>>n;
    string str[n];
    
    for(int i = 0; i < n; i++) {
        cin>>str[i];
        
        if (str[i].length() > 10) {
            cout<<str[i][0]<<str[i].length() - 2<<str[i][str[i].length()-1]<<endl;
        }
        else cout<<str[i]<<endl;
    }
    
    return 0;
}