#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin>>n;
    double a = 0, b;

    for(int i = 0; i < n; i++) {
        cin>>b;
        a += b;
    }
    cout<<setprecision(14)<<a/n<<endl;
    



    return 0;
}
