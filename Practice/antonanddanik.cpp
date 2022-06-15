#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int a=0, d=0;
    int l;
    string s;
    cin >> l >> s;
    for (int i =0; i < l; i++){
      if (s[i] == 'A') a++;
      else if (s[i] == 'D') d++;
    }
    if (a > d) {
      cout << "Anton";
    }
    else if (a < d) {
      cout << "Danik";
    }
    else {
      cout << "Friendship";
    }
}