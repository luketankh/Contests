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
    set <int> set;
    vector<char> v;
    int cas;
    cin >> cas;
    while(cas--){
      char a;
      cin >> a;
      v.PB(a);
    }
    for (auto &x : v){
      x = tolower(x);
      x = x - '0';
      set.insert(x);
    }
    if (set.size() == 26) cout << "YES";
    else cout << "NO";
}

