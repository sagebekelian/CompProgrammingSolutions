#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {

    int k, n;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int flag = a[k-1];
    int counter = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0 && a[i] >= flag) counter++;
    }
    cout<<counter<<endl;
    

    return 0;
}

