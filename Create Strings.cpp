#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
set<string> perm;
void permute(string prefix, string suffix){
    if(suffix.length()==0){
        perm.insert(prefix);
        return;
    }
    else{
        for(int i = 0 ; i < suffix.length() ; i++)
        permute(prefix+suffix[i], suffix.substr(0,i)+ suffix.substr(i+1));
    }
}
int main()
{
   string s;
   cin >> s;
   permute("", s);
   cout << perm.size() << "\n";
   for(auto i : perm){
        cout << i << "\n";
   }
}
