#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
  
    int t;
    cin>>t;
    int x = 0, y = 0, z = 0;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c; 
        x += a;
        y += b;
        z += c;
    }
    if (!x) {
        if(!y) {
            if(!z) cout<<"YES"<<endl;
        }
    }else cout<<"NO"<<endl;
    
    
    
    
    return 0;
}