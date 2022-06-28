#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int count = 0;
    string a,b;
    cin >> a >> b;
    for (int i =0; i < a.size(); i++){
      if (a[i] == b[a.size()-i-1]) count++;
      else continue;
    }
    if (count == a.size()) cout << "YES";
    else cout << "NO";
}