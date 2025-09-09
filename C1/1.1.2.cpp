#include <bits/stdc++.h>
using namespace std;
// Adding two possitive decimal integers as an elementary scholar.

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s1; int s2; cin >> s1 >> s2;
    if (s1 < s2) swap(s1,s2);
    int r;
    int add_1 = 0;
    string res;
    while(s1){
        int d1 = s1 % 10; int d2 = s2 % 10;
        
        int ri = d1 + d2 + add_1;

        if (ri > 9 && s1/10){
            add_1 = 1;
            ri %= 10;
        }
        else if(!(s1/10)){
            ri = ri;
        }
        else{
            add_1 = 0;
        }
        res.append(to_string(ri)); 

        s1 /= 10; s2 /= 10;
    }

    reverse(res.begin(), res.end());
    cout << res  << endl;
    
}