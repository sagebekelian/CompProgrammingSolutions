#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int m, dist = 0, flag = 0;
        
        //case 1 (first number needs to be changed)
        m = c - b;
        dist = b - m;
        if(dist%a == 0 && dist > 0 && dist >= a) {
            flag = 1;
        }
        
        //case 2 (second number needs to be changed)
        m = (c+a)/2;
        if(m%b == 0 && m > 0 && m >= b && m%2 == 0) {
            flag = 1;
        }
        
        //case 3 (third number needs to be changed)
        m = b - a;
        dist = b + m;
        if(dist%c == 0 && dist > 0 && dist >= c) {
            flag = 1;
        }

    if(flag == 0) cout<<"NO\n";
    else cout<<"YES\n";
    }


    return 0;
}
