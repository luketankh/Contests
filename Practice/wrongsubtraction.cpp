#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int n,k;
    cin >> n >> k;
    while (k--){
    if (n%10 > 0){
      n--;
    }
    else{
      n = n/10;
    }
  }
  cout << n;
}