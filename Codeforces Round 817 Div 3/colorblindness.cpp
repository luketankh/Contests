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
    int n;
    cin >> n;
    string s1;
    string s2;
    cin >> s1 >> s2;
    for (int i=0; i<s1.size();i++){
      if (s1[i] == 'G' || s1[i] == 'B') s1[i] = 'c';
    }
    for (int i=0; i<s2.size();i++){
      if (s2[i] == 'G' || s2[i] == 'B') s2[i] = 'c';
    }
    if (s1==s2) cout <<"YES"<<'\n';
    else cout << "NO" << '\n';
    
  }
}
