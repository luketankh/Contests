#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int cas;
    cin >> cas;
    int count = 0;
    while (cas--){
      int a,b,c;
      cin >> a >> b >> c;
      if (a+b+c >= 2){
        count++;
      }
    }
    cout<<count;
}