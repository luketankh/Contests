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
      int count = 0;
      set<char> d;
      for(int i = 0; i < s.size(); i++){
          d.insert(s[i]);
          if (d.size() > 3){
            count++;
            d.clear();
            d.insert(s[i]);
          }
          }
      cout << count+1 << '\n';
      }
}