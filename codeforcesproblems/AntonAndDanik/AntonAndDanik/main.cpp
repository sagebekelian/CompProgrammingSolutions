#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int n;
    char x;
    cin>>n;
    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++) {
        cin>>x;
        if(x == 'A') c1++;
        else c2++;
    }
    if(c1 > c2) cout<<"Anton"<<endl;
    else if (c2 > c1) cout<<"Danik"<<endl;
    else if (c1 == c2) cout<<"Friendship"<<endl;
    
    
    
    
    return 0;
}

