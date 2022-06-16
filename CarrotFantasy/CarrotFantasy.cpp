#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    //turn every open spot into a fence, check carrot to see if rabbit is in the north,south,east,west
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) {
            cin>>arr[i][j];
            if(arr[i][j] == '.') arr[i][j] = '#';
        }  
    } 
    int flag = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) {
           if(arr[i][j] == 'C') {
               if(arr[i+1][j] == 'R' || arr[i][j+1] == 'R' || arr[i-1][j] == 'R' || arr[i][j-1] == 'R') //need to add check for if the Carrot is at the edge of the matrix
                   flag = 1;
           } 
        }  
    }
    if(flag) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++) {
                cout<<arr[i][j]<<endl;
            }  
        }
    }
    
    return 0;
}
