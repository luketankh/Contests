#include <bits/stdc++.h>

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
      int n; cin >> n;
      vector<int> v;
      set<int> s;
      for (int i = 0; i < n; i++){
        ll a = 0;
        cin >> a;
        v.push_back(a);
        s.insert(a);
      }
      if (s.size() < v.size()) cout << "NO" << '\n';
      else cout << "YES" << '\n';
    }
}