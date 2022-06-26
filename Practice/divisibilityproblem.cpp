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
    int cas;
    cin >> cas;
    while(cas--){
     ll a, b; 
     cin >> a >> b; 
     if (a % b == 0 ) cout << 0 << '\n';
     else {
      int w = a%b;
      cout << b-w << '\n'; 
     } 
   }
}

