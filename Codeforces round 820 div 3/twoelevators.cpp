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
      int a,b,c;
      cin >> a >>  b >> c;
      if (a == 1) cout << 1 << '\n';
      else if (b < c){
          if (a-1 < (abs(b-c) + abs(c-1))) cout << 1 << '\n';
          if (a-1 > (abs(b-c) + abs(c-1))) cout << 2 << '\n';  
          if (a-1 == (abs(b-c) + abs(c-1))) cout << 3 << '\n';  
        }
      else if (b > c){
          if (a-1 < (abs(b-1))) cout << 1 << '\n';
          if (a-1 > (abs(b-1))) cout << 2 << '\n';
          if (a-1 == (abs(b-1))) cout << 3 << '\n';
        }
      }
    }
    
// two-elevators round 820