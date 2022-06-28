#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int cas, n, a;
    int r=0;
    cin >> cas;
    while (cas--){
      cin >> n >> a;
      if (a-n>=2) r++;
    }
    cout << r;
}