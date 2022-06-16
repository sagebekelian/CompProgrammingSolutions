#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        int a;
        for(int i = 0; i < n; i++) {
            cin>>a;
            m[a]++;
        }
        vector<int> v;
        for(map<int,int>::iterator itr = m.begin(); itr != m.end(); itr++){
            cout<<itr->first<<endl;
            while(itr->second > 1) {
                v.push_back(itr->first);
                itr->second--;
            }
        }
        if (v.size() > 0) {
            for (int i = 0; i < v.size(); i++) {
                cout<<v[i]<<endl;
            }
        }
    }
    return 0;
}
