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
    int x,y;
    cin >> x >> y;
    map <int,int> mFirst;
    map <int,int> mLast;
    for (int i =0; i < x; i++){
      int k;
      cin >> k;
      mLast[k] = i;
      
      // creation of mfirst
      if (mFirst.find(k) == mFirst.end()){
        mFirst[k] = i;
      }
      }
    
    while(y--){
      int a,b;
      cin >> a >> b;
      if (mFirst.find(a) == mFirst.end()) cout << "NO" << '\n';
      else if (mFirst.find(b) == mFirst.end()) cout << "NO" << '\n';
      else if (mFirst[a] > mLast[b]) cout << "NO" << '\n';
      else cout << "YES" << '\n';
    }
    
    }
}
