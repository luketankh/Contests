#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int w;
    cin >> w;
    if (w>2){
      if (w%2 == 0){
        cout << "YES" << endl;
      }
      else if (w % 2 > 0) {
        cout << "NO" << endl;
      }
    }
    else{
      cout << "NO" << endl;
    }
}