#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
#include <cctype>
#include <string>

// typedef shortcuts 
typedef long long ll;
typedef long double ld;

// macros 
#define PB push_back

using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
   string s;
   set <char> set;
   getline(cin,s,'\n');
   for (int i =0; i < s.size(); i++){
    if (s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' '){
      set.insert(s[i]);
    }
   }
   cout << set.size();
}

