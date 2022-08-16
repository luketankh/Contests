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
    int a,b;
    cin >> a >> b;
    if (a == b) cout << a << ' ' << 0;
    if (a>b){
      cout << b << ' ' << (a-b)/2;
    }
    if (a<b){
     cout << a << ' ' << (b-a)/2; 
    }
}