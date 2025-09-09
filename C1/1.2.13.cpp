#include <bits/stdc++.h>
using namespace std;
// Rearrange a binary umber so that all the zeros precede all of the ones
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int s[n];

    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    int i = 0;
    int j = n - 1;

    while (i < j){
        while (i < j && s[i] == 0)
            i++;
        while (j > i && s[j] == 1)
            j--;
        swap(s[i], s[j]);
    }

    for (int i = 0; i < n; i++){
         cout << s[i] << " ";
    }
    cout << endl;
}