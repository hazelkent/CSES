#include <bits/stdc++.h>
using namespace std;
#define lli long long int
char digits[100];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   unsigned lli n, ans =1;
   cin >> n;
   for(int i = 0 ; i < n ; i++)
   ans = 2*ans%((int)1e9+7);
   cout << ans;
}
