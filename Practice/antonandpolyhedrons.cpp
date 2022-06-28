#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
#include <cctype>
#include <string>
#include <iterator>

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
      int f[] = {4,6,8,12,20};
      string s[] = {"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
      int cas, count =0;
    cin >> cas;
    while(cas--){
      string k;
      cin >> k;
      if (k== s[0]) count += f[0];
      else if (k== s[1]) count += f[1];
      else if (k== s[2]) count += f[2];
      else if (k== s[3]) count += f[3];
      else count += f[4];
    }
    cout << count;
}
