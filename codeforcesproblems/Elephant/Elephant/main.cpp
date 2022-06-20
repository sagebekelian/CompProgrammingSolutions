#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {

    int x;
    cin>>x;
    int y = x;
    int steps = 0;
    
    for(int i = 5; i >= 1; i--){
        while(x - i >= 0){
            steps++;
            x-=i;
        }
    }
    cout<<steps<<endl;
    
    
    return 0;
}