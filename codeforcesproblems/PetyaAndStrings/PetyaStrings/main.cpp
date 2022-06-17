#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char** argv) {
    string str1, str2;
    cin>>str1>>str2;
    
    for(int i = 0; i < str1.length(); i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    string arr[2];
    arr[0] = str1;
    arr[1] = str2;
    
    //cout<<arr[0]<<" "<<arr[1]<<endl;
    if (arr[0] == arr[1]) cout<<'0'<<endl;
    if (arr[0] < arr[1]) cout<<"-1"<<endl;
    if (arr[0] > arr[1]) cout<<"1"<<endl;
    
    
    return 0;
}