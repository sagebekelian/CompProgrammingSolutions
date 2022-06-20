#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    int counterX = 0, max = -999, counterY = 0;
    string str;
    cin>>str;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '1') {
            counterX++;
            if (counterX > max) max = counterX;
        }
        else counterX = 0;
        if(str[i] == '0' ){
            counterY++;
            if(counterY > max) max = counterY;
        }
        else counterY = 0;
    }
    if(max >= 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
    return 0;
}