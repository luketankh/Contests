#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int cas;
    cin >> cas;
    int enter, exit, start=0, max=0 ;
    while (cas--){
      cin >> exit >> enter;
      start = start + enter - exit; 
      if (start > max){
        max = start;
      }
    }
    cout << max;
}