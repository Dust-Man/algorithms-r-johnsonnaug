#include <bits/stdc++.h>
using namespace std;
// Reverses an array
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int s[n];

    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    for (int i = 0; i < n/2; i++){
        swap(s[i], s[(n-1) - i]);
    }

    for (int i = 0; i < n; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}