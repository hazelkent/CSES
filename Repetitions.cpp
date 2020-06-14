#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 1;
    int mx = 0;
    for(int i = 1; i <= s.length() ; i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            if(cnt > mx){
                mx = cnt;
            }
            cnt = 1;
        }
    }
    cout << mx;
}
