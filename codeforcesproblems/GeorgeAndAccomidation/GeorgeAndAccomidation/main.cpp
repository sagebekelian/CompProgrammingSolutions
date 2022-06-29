#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {

    int n;
    cin>>n;
    int p,q;
    int rooms = 0;
    while(n--) {
        cin>>p>>q;
        if (p < q - 1) rooms++;
    }
    cout<<rooms<<endl;
    
    
    
    
    
    
    return 0;
}

