#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
        int i;
    cin >> i;
    if (i>5){
      if ( i % 5 > 0){
      cout << (i/5) + 1;
    }
    else{
      cout << i/5 ;
    }
    }
    else{
      cout<<1;
    }
}