#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n; 
        long long counter = 0;
        for (long long i = 1; i <= 9; i++) {
            for (long long j = i; j <= n;){//dont want to increment j to miss a value
                counter++;
                j = (j*10) + i;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
