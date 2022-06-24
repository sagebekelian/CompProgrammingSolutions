#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {

    int n, h, w = 0;
    cin>>n>>h;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] > h){
            a[i] == h;
            w += 2;
        }else w++;
    }    
    cout<<w<<endl;
    
    
    
    
    return 0;
}

