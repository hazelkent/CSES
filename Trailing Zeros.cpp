#include <bits/stdc++.h>
using namespace std;
#define lli long long int
char digits[100];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   unsigned lli n, ans =0;
   cin >> n;
   for(unsigned lli i = 5 ; i <= n ; i*=5){
        ans+=n/i;
   }
   cout << ans;
}
