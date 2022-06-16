#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int t;
    cin>>t;
    int counter = 0;
    int a, b, c;
    while(t--) {
        cin>>a>>b>>c;
        if (a + b + c >= 2) counter++;
    }
    cout<<counter<<endl;
    
    
    
    return 0;
}