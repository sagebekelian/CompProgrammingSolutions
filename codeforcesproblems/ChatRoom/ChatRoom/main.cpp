#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    string str;
    cin>>str;
    string h = "hello";
    int x = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == h[x]) {
            x++;
        }
        if(x == 5) break;
    }
    if (x == 5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
    
    
    
    return 0;
}

