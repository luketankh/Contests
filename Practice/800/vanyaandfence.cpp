#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int n, h;
    int k;
    int count=0;
    cin >> n >> h;
    while (n--){
      cin >> k;
      if (k > h) count += 2;
      else count ++;
    }
    cout << count;
}