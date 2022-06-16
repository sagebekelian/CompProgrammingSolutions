#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int ans = 0;
    vector<int> v;
    int a;
    for(int i = 0; i < n; i++){
        cin>>a;
        if(a >= l && a <= r) {
            ans++;
            m--;
        }
        else v.push_back(a);
    }
    if(m >= 2) {
        int s = v.size();
        while(m > 0 && s > 0) {
            ans++;
            m -=2;
            s--;
        }
    } 
    if(ans >= n) cout<<"lzdak!"<<endl;
    else cout<<ans<<endl;
    
    return 0;
}

