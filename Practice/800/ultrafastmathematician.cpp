#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

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
    string a,b;
    vector <int> v;
    cin >> a >> b;
    for (int i =0; i < a.size(); i++){
      if (a[i] == b[i]){
      int x = 0;
      v.PB(x);
    }
      else {
        int z = 1;
        v.PB(z);
      }
    }
    for (int k = 0; k < v.size(); k++){
      cout << v[k];
    }
} 