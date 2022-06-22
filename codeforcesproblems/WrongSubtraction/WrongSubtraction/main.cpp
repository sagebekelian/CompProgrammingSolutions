#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int n,k;
    cin>>n>>k;
    while(k--) {
        string str = to_string(n);
        vector<int> v;
        int a = n;
        for(int i = 0; i < str.length(); i++) {
            v.push_back(a%10);
            a /= 10;
        }
        reverse(v.begin(), v.end());
        
        if (v[v.size() - 1] != 0) {
            n--;
        }else n /= 10;
        v.clear();
    }
    cout<<n<<endl;
    
    return 0;
}

