#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int a, b;
    cin>>a>>b;
    
    int ans = 0;
    while(a <= b) {
        a *= 3;
        b *= 2;
        ans++;
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}