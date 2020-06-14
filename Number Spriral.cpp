#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll int n;
    cin >> n;
    while(n--){
        ll int x,y,z=0;
        cin >> x >> y;
        z=x>y?x:y;
    z=z*z-~(z%2?y-x:x-y)-z;
        cout << z << "\n";
    }
}
