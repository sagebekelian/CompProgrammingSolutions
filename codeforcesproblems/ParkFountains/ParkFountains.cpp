#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    int a[n];
    int ans = 0;
    int x[q];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    } 
    for(int i = 0; i < n; i++){
        cin>>x[i];
        int j = 0;
        while(j < x[i]){
            if (a[j] == 0) {
                ans++;
            }
            a[j]--;

            j++;
        }



    } 
    





    cout<<ans<<endl;






    return 0;
}
