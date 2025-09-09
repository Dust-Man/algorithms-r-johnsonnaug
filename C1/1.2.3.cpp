#include <bits/stdc++.h>
using namespace std;
// Returns the second largest number in an array
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    int largest, scnd_largest;
    if(s[0] > s[1]){
        largest = s[0];
        scnd_largest = s[1];
    } else{
        largest = s[1];
        scnd_largest = s[0];
    }

    for (int i = 2; i < n; i++){
        if(s[i] > scnd_largest){
            if(s[i] > largest ){
                scnd_largest = largest;
                largest = s[i];
            }
            else{
                scnd_largest = s[i];
            }
        }
    }

    cout << scnd_largest << endl;

}