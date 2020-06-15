#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int modpow(int x, int n, int m) {
if (n == 0) return 1%m;
long long u = modpow(x,n/2,m);
u = (u*u)%m;
if (n%2 == 1) u = (u*x)%m;
return u;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    lli t;
    cin >> t ;
    while(t--){
    lli a,b,m=1;
    cin >> a >> b;

    cout << modpow(a,b, 1000000007)<<"\n";
    }
}
