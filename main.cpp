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
    vector<string> v;
    cin >> n;
    string c[n];
    for (int i =0 ; i < n; i++){
      string a;
      cin >> a;
      v.push_back(a);
    }
    for (int i = 0; i < v.size()-1; i++){
      for (int j = i+1; j < v.size(); j++){
        string k = c[i] + c[j];
        if (c[i] == k) c[i] = '1';
        else c[i] = '0';
      }
    }
    for (int i = 0 ; i < n; i++) cout << c[i];
    }
}

