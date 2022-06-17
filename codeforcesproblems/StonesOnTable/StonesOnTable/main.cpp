#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
  int n, cnt = 0, ans = 0;
    string str;
    cin>>n>>str;
    char c = str[0];
    
    for(int i = 1; i < n; i++) {
        if (str[i] == c) {
            cnt++;
            ans++;
        }
        else { 
            cnt = 1;
            c = str[i];
        }
        
    }
    cout<<ans<<endl;
    
    
    return 0;
}