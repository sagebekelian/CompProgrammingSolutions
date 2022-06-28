#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int n;
    cin>>n;
    
    int a[n], b[n];
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        b[a[i] - 1] = i + 1;
    }
    
    for(int i = 0; i < n; i++) {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    
    
    
    
    
    return 0;
}

