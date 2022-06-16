#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ans = 0;
        set<char> s;
        for (int i = 0; i < n; i++) {
            int j = i;
            while(j < n && str[j] == str[i]){
                j++;
            } 
            if(s.count(str[i]) == 0)
                s.insert(str[i]);
            else ans = 1;
            i = j;
            
        }
        if (ans == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    
    return 0;
}
