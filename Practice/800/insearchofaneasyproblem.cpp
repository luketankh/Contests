#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  int n, cmax=0;
  cin >> n;
  while (n--){
    int i;
    cin >> i;
    cmax = max(cmax,i); 
  }
  puts(cmax > 0 ? "HARD" : "EASY");
  return 0;
}