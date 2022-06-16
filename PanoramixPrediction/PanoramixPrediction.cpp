#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int x = 0, flag;
    for(int i = n +1; i <=m; i++) {
        flag = 0;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
       if (flag == 0){
           x = i;
           break;
       }
    }

    if (x == m) cout<<"YES\n";
    else cout<<"NO\n";




    return 0;
}
