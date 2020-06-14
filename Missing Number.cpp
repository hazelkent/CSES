#include <bits/stdc++.h>
using namespace std;
int main(){
 
   long long int n;
    cin >> n;
    long long int ar[n];
     long long int sum=0;
    for( long long int i = 0 ; i <n-1 ; i++){
        cin >> ar[i];
    }
    sum = n*(n+1)/2;
    for( long long int i = 0 ; i < n-1 ; i++){
        sum-=ar[i];
    }
    cout << sum;
}
