#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int n;
    cin >> n;
    ll int ar[n];
    ll int cnt = 0;
    for(ll int i = 0 ; i < n ; i++){
        cin >> ar[i];
    }
    for(ll int i = 1 ; i < n ; i++){
        if(ar[i] < ar[i-1]){
            cnt+= (ar[i-1] - ar[i]);
            ar[i] =ar[i-1];
        }
    }
    cout << cnt;
}
