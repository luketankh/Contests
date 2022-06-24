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
    vector <ld> v;
    int n;
    cin >> n;
    while (n--){
      ld a=0;
      cin >> a;
      v.PB(a);
    }
    ld sum=0;
    for (int i = 0; i < v.size(); i++){
      sum += v[i];
    }
    printf("%.12Lf\n", sum/v.size());
} 