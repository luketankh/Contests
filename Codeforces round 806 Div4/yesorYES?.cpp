#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <iomanip>
#include <set>
#include <cctype>
#include <string>
#include <iterator>
#include <map>
// typedef shortcuts 

typedef long long ll;
typedef long double ld;

// macros 
#define PB push_back;

using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int cas;
    cin >> cas;
    while(cas--){
      string s;
     cin >> s;
     for (int i =0; i < s.size(); i++){
      s[i] = tolower(s[i]);
     }
     cout << (s == "yes" ? "YES" : "NO") << '\n';
}
}



