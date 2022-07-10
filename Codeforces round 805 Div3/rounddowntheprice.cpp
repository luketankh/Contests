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
    ll cas;
    cin >> cas;
    while(cas--){
      ll a[10] = {1000000000,100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};
      ll x;
      cin >> x;
      for (int i = 0; i < sizeof(a); i++){
        if(x==a[i]) {
            cout << '0' << '\n';
            break;
          }
        else if(x>a[i]){
            cout << x-a[i] << '\n';
            break;
          }
        }
      }
}