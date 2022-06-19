#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
  
    string str, copy = "";
    cin>>str;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != 'a' && str[i] != 'A' &&
           str[i] != 'e' && str[i] != 'E' &&
           str[i] != 'i' && str[i] != 'I' &&
           str[i] != 'o' && str[i] != 'O' &&
           str[i] != 'u' && str[i] != 'U' &&
           str[i] != 'y' && str[i] != 'Y'){
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            }  
            copy += str[i];
        }   
    }
    for(int i = 0; i < copy.length(); i++) {
        cout<<'.'<<copy[i];
    }
    cout<<endl;
    
    return 0;
}