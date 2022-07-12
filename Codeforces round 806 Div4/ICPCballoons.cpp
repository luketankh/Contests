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
      set <char> s;
      int n;
      cin >> n;
      char b[n];
      for (int i =0; i < n; i++) cin >> b[i];
      for (int i =0; i < n; i++) s.insert(b[i]);
      cout << (s.size()*2) + (n-s.size()) << '\n';
    }
}

// cypher

