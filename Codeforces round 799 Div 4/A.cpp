#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int cas;
    int a,b,c,d;
    cin >> cas;
    while (cas--){
      int count=0;
      cin >> a >> b >> c >> d;
      if (b > a){
        count++;
      }
      if (c > a) {
        count++;
      }
      if (d > a){
        count++;
      }
      cout << count << endl;
    }
}