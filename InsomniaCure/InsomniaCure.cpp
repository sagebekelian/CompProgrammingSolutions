#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,l,m,n,d;
    int ans = 0;
    set<int>s;
    cin>>k>>l>>m>>n;
    cin>>d;
    for(int i = 1; i <= d; i++) {
        if(i%k == 0) s.insert(i);
        if(i%l == 0) s.insert(i);
        if(i%m == 0) s.insert(i);
        if(i%n == 0) s.insert(i);
    }

    int a = s.size();
    ans = min(d, a);

    cout<<ans<<endl;



    return 0;
}
