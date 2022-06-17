#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int k, w, n;
    cin>>k>>n>>w;
    
    int borrow = 0;
    
    int i = 1;
    while(w > 0) {
        if (n >= k * i) {
            n -= k * i;
        }
        else { 
            borrow += abs(n-(k*i));
            n = 0;
        }
        i++;
        w--;
    }
    
    cout<<borrow<<endl;
    
    return 0;
}