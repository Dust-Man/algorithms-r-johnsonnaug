#include <bits/stdc++.h>
using namespace std;
// Returns the index of the first item that is less than its predecessor
int less_than_pre (int n){
    int s[n];
    
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    for (int i = 1; i < n; i++){
        if(s[i] < s[i - 1] ){
            return i + 1;
        }
    }

    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << less_than_pre(n) << endl;
    
    

}