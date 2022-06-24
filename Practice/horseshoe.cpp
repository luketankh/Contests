#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>

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
    vector <ll> v;    
    int u = 0;
    for (int o =0; o < 4; o++){
      ll p;
      cin >> p;
      v.PB(p);
    }
    set <ll> k(v.begin(), v.end());
  cout << v.size() - k.size();
}