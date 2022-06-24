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
    ll n;
    int sum=0;
    cin >> n;
    if (n%2 == 0) cout << n/2;
    else cout << "-" << (n/2) + 1;
}