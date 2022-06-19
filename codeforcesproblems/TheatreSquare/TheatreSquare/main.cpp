#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
  
    long long n, m, a;
    cin>>n>>m>>a;
    long long counter = 0;
    
    counter = (m+a-1)/a;
    counter *= (n+a-1)/a;
    
    
    
    cout<<counter<<endl;
    
    
    return 0;
}