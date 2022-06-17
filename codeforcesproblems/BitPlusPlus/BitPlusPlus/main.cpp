#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int t;
    cin>>t;
    int a = 0;
    while(t--) {
        string str;
        cin>>str;
        if (str[0] == '+') a++;
        else if (str[0] == '-') a--;
        else if (str[1] == '+') a++;
        else if (str[1] == '-') a--;
    }
    cout<<a<<endl;
    
    return 0;
}