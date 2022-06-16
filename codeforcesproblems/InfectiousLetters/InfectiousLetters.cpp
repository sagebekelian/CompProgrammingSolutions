#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int j = i;
        while(str[j] != 'b' && j < n) {
            j++;
        }
        int dist = j - i;
        if (dist > 0) {
            int cnt = 0;
            for (int a = i; a <= j; a++) {
                if(str[a] == 'a') {
                    cnt = 1;
                }
            }
            if(cnt) ans += dist;
        }
        i = j;
    }
    cout<<ans<<endl;

    return 0;
}
