#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct square{
    int x1, x2, y1, y2;
};

int main() {

//https://codeforces.com/contest/231/problem/A   - 1  
//    int cases, cnt = 0;
//    cin>>cases;
//    while(cases--) {
//        int x, y, z, total;
//        cin>>x>>y>>z;
//        total = x + y + z;
//
//        if (total >= 2) cnt++;
//    }
//    cout<<cnt<<endl;

//https://codeforces.com/problemset/problem/228/A   - 2
//    set<int> set;
//    int x;
//    for(int i = 0; i < 4; i++) {
//        cin>>x;
//        set.insert(x);
//    }
//
//    cout<<4-set.size()<<endl;
    
//https://codeforces.com/problemset/problem/236/A   - 3    
//    set<char> s;
//    string str;
//    cin>>str;
//    for (int i = 0; i < str.length(); i++) {
//        s.insert(str[i]);
//    }
//    if (s.size() % 2 == 0) cout<<"CHAT WITH HER!"<<endl; 
//    else cout<<"IGNORE HIM!"<<endl;
    
//https://codeforces.com/problemset/problem/233/A   - 4
//    int n;
//    cin>>n;
//    int arr[n];
//    int fl = 0;
//    if (n == 1) fl = 1;
//     
//    else {
//        for(int i = 0; i < n; i++) {
//            if (i%2 == 0) {
//                arr[i] = i + 2;
//            }else arr[i] = i;
//            
//            if (arr[i] > n) fl = 1;
//        }
//    } if (fl == 1) cout<<"-1";
//    
//    else for(int i = 0; i < n; i++) 
//            cout<<arr[i]<<" ";
//    cout<<endl;
    
//https://open.kattis.com/problems/battlesimulation   - 5    
//    string str;
//    cin>>str;
//    
//    for (int i = 0; i < str.size(); i++) {
//        set<char> s;
//        if (i < (int)str.size() - 2) { 
//            s.insert(str[i]);
//            s.insert(str[i+1]);
//            s.insert(str[i+2]);
//        }
//        if (s.size() == 3){
//            cout<<'C';
//            i += 2;
//        }
//        else {
//            if (str[i] == 'R') cout<<'S';
//            else if (str[i] == 'B') cout<<'K';
//            else if (str[i] == 'L') cout<<'H';
//        }
//    }
//    cout<<endl;
  
//https://vjudge.net/problem/CodeForces-1343B/origin  - 6  
//    int t; 
//    cin>>t;
//    while(t--) {
//        string x;
//        int cnt = 0;
//        cin>>x;
//        int y = (x[0] - '0') - 1;
//        
//        for (int i = 0; i < y; i++) {
//            cnt += 10;
//        }
//        for (int i = 0; i < x.length(); i++) {
//            cnt += (i+1);
//        }
//        
//       
//        cout<<cnt<<endl;
//    }

//https://codeforces.com/problemset/problem/69/A      - 7   
//    int t;
//    cin>>t;
//    int x, y, z, t1 = 0, t2 = 0, t3 = 0, ans = 1;
//    while(t--) {
//        cin>>x>>y>>z;
//        t1 += x; 
//        t2 += y; 
//        t3 += z;
//        if (t1 == 0 and t2 == 0 and t3 == 0) ans = 0;
//    }
//    if (ans == 0) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;    
//    ans = 0;
    
//https://codeforces.com/problemset/problem/263/A     - 8
//    int a[5][5], xpos, ypos;
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            cin>>a[i][j];
//            if (a[i][j] == 1) {
//                xpos = j + 1;
//                ypos = i + 1;
//            }
//        }
//    }
//    xpos = abs(xpos - 3);
//    ypos = abs(ypos - 3);
//    
//    xpos += ypos;
//    cout<<xpos<<endl;
    
//https://codeforces.com/problemset/problem/266/B     - 9
//    int n, t, bpos = 0, gpos = 0;
//    string str;
//    cin>>n>>t>>str;
//    
//    while(t != 0) {
//        for (int i = 0 ; i < n; i++) {
//            if (str[i] == 'B') bpos = i+1;
//            else if (str[i] == 'G' and bpos > 0) gpos = i+1;
//            
//            if (gpos > 0 and bpos > 0) {
//                swap(str[bpos - 1], str[gpos - 1]);
//                gpos = 0; 
//                bpos = 0; 
//            }
//        }
//        gpos = 0; 
//        bpos = 0;
//        t--;
//    }
//    cout<<str<<endl;
   
//https://codeforces.com/problemset/problem/32/B      - 10    
//    string str, ans = "";
//    cin>>str;
//    
//    if (str[0] == '.') { 
//        ans += '0';
//        for (int i = 1; i < str.length(); i++) {
//            if (str[i] == '.') { 
//                ans += '0';
//            }
//            else {
//                if (str[i+1] == '.') {
//                    ans += '1'; 
//                    i++;
//                }
//                else if (str[i+1] == '-') {
//                    ans += '2';
//                    i++;
//                }
//            }
//        } 
//    }
//    else if (str[0] == '-') {
//        if (str[1] == '.') ans +='1';
//        else if (str[1] == '-') ans += '2';
//        
//        for (int i = 2; i < str.length(); i++) {
//            if (str[i] == '.') { 
//                ans += '0';
//            }
//            else {
//                if (str[i+1] == '.') {
//                    ans += '1'; 
//                    i++;
//                }
//                else if (str[i+1] == '-') {
//                    ans += '2';
//                    i++;
//                }
//            }
//        }
//        
//        
//    }
//    cout<<ans<<endl;
    
//https://codeforces.com/problemset/problem/271/A     - 11 
//    int x, ans = 0;
//    cin>>x;
//    set<char> s;
//    
//    x += 1;
//    string str = to_string(x);
//    while (ans != 1) {
//        for (int i = 0; i < str.length(); i++) {
//            s.insert(str[i]);
//        }
//        if (s.size() == 4) {
//            ans == 1;break;
//        }
//        else {
//            s.clear();
//            x = stoi(str);
//            x++;
//            str = to_string(x);
//        } 
//    }
//    cout<<str<<endl;
    
//https://codeforces.com/problemset/problem/281/A     - 12 
//    string str;
//    cin>>str;
//    if (!isupper(str[0])) 
//        str[0] = toupper(str[0]); 
//    cout<<str<<endl;
//    
    
//https://codeforces.com/problemset/problem/59/A      - 13
//    string str;
//    cin>>str;
//    int up = 0, low = 0;
//    
//    for (int i = 0; i < str.length(); i++) {
//        if (isupper(str[i])) up++;
//        else low++;
//    }
//    if (low >= up) {
//        for (int i = 0; i < str.length(); i++) {
//            str[i] = tolower(str[i]);
//        }
//    }
//    else {
//        for (int i = 0; i < str.length(); i++) {
//            str[i] = toupper(str[i]);
//        }
//    }
//    cout<<str<<endl; 
    
//https://codeforces.com/problemset/problem/110/A     - 14 
//    string str;
//    cin>>str;
//    set<char> c;
//    int cnt = 0, valid = 1;
//    
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == '4' or str[i] == '7') cnt++;
//    }
//    
//    string isLucky;
//    isLucky = to_string(cnt);
//    for (int i = 0; i < isLucky.length(); i++) {
//        if(isLucky[i] == '4' or isLucky[i] == '7')
//            c.insert(isLucky[i]);
//        else valid = 0;
//    }
//    
//    if (valid == 1) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
    
//https://codeforces.com/problemset/problem/266/A     -  15
//    int n, cnt = 0, ans = 0;
//    string str;
//    cin>>n>>str;
//    char c = str[0];
//    
//    for(int i = 1; i < n; i++) {
//        if (str[i] == c) {
//            cnt++;
//            ans++;
//        }
//        else { 
//            cnt = 1;
//            c = str[i];
//        }
//        
//    }
//    cout<<ans<<endl;
    
//http://www.usaco.org/index.php?page=viewproblem2&cpid=567
//    int a, b, c , d, ans, overlap;
//    freopen("paint.in", "r", stdin);
//    freopen("paint.out", "w", stdout);
//    cin>>a>>b>>c>>d;
//    set<int> s;
//    for (int i = a; i < b; i++) {
//        s.insert(i);
//    }
//    for (int i = c; i < d; i++) {
//        s.insert(i);
//    }
//    cout<<s.size()<<endl;
    
//    OR if u want a constant time solution, take the max of a and c, then minus the min of b and d 
//    ans = (b - a) + (d - c);
//    overlap = min(b,d) - max(a,c);
//    ans = ans - max(0,overlap);
//    
//    cout<<ans<<endl;
    
//http://www.usaco.org/index.php?page=viewproblem2&cpid=759
//    int xint, yint, area;
//    square a, b, c;
//    freopen("billboard.in", "r", stdin);
//    freopen("billboard.out", "w", stdout);
//    cin>>a.x1>>a.y1>>a.x2>>a.y2>>b.x1>>b.y1>>b.x2>>b.y2>>c.x1>>c.y1>>c.x2>>c.y2;
//    
//    xint = max(min(c.x2, a.x2) - max(c.x1, a.x1), 0); 
//    yint = max(min(c.y2, a.y2) - max(c.y1, a.y1), 0);
//    
//    area = xint * yint;
//    
//    xint = max(min(c.x2, b.x2) - max(c.x1, b.x1), 0); 
//    yint = max(min(c.y2, b.y2) - max(c.y1, b.y1), 0);
//    
//    area += (xint * yint);
//    
//    area = ((a.x2 - a.x1) * (a.y2 - a.y1) + (b.x2 - b.x1) * (b.y2 - b.y1)) - area;
//    
//    cout<<area<<endl;
    
   
   
  
//INCOMPLETE PROBLEMS   
//https://codeforces.com/problemset/problem/275/A
    
    
    
    
    
    
    
    
    
//https://codeforces.com/problemset/problem/1369/A    
//    int n;
//    cin>>n;
//    int c = n, y = 1;
//    while(c--) {
//        int x;
//        cin>>x;
//        
//        if (x%y == 0) {
//            cout<<"YES"<<endl;
//        }else cout<<"NO"<<endl;
//        
//        cout<<y<<" "<<x<<endl;
//        y++;
//    }
    
    
   
    
    
    
    
    
    
//https://codeforces.com/problemset/problem/214/A
//    ll x,y;
    
    
    
    
    
    
    
    
    
    return 0;
}

