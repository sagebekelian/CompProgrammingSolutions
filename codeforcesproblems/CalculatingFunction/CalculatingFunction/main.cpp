#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {

    ll n;
    cin>>n;
    ll ans = 0;
    if (n % 2 == 0) ans = n / 2;
    else ans = -1*(n+1)/2;
    
    cout<<ans<<endl;
    
    return 0;
}

