#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int cnt = 0;
    set<int>s;
    for(int i = 0; i < n; i++) {
        int j = i + 1;
        while(j < n) {
            int x = i;
            while(x <= j) {
                s.insert(a[x]);
                x++;
            }
            if((*(--s.end()) - *s.begin()) == k) cnt++;
            j++;
            s.clear();
        }
    }
    cout<<cnt<<endl;

    return 0;
}
