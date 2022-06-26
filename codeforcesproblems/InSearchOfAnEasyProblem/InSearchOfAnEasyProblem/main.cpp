#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {

    int n;
    cin>>n;
    
    int x = 0;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        x += a[i];
    }
    if (x == 0) cout<<"Easy"<<endl;
    else cout<<"HARD"<<endl;
    
    
    
    
    return 0;
}

