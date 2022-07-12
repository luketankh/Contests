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
    while (cas--){
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int j =0; j < n; j++){
      int m;
      cin >> m;
      for (int k =0; k < m; k++){
        char s;
        cin >> s;
        if (s == 'D') c[j]++;
        else c[j]--;
      }
     for (int j =0; j < n; j++){
      if (c[j] <0) c[j] += 10;
     }
     cout << c[j]%10 << ' ';
    }
    cout << '\n';
    }
}

// cypher

