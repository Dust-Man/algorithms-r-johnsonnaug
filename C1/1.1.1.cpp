#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, a, b, c, z; cin >>a >> b >> c;
    x = a; y = a; z = a;

    if (b > x) x = b;
    else if (b < y) y = b;

    if (c > x) x = c;
    else if (c < y) y = c;

    if (a < x && a > y){
        z = a;
    }
    if (b < x && b > y){
        z = b;
    }
    if (c < x && c > y){
        z = c;
    }
    

    cout << z << endl;
}