#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int d = 1;
        int k;
        cin>>k;
        while((d*d) < k) d++;
        if(k > ((d*d) - d)) cout<<d<<" "<<(d*d)-k+1<<endl;
        else cout<<k-((d-1)*(d-1))<<" "<<d<<endl;
    }
    return 0;
}
