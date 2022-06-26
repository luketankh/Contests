#include<iostream>
#include<cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
#include <cctype>
#include <string>

// typedef shortcuts 
typedef long long ll;
typedef long double ld;

// macros 
#define PB push_back

using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int y;
    cin >> y;
    while (true){
      y+=1;
      int a = y / 1000;
      int b = y / 100 % 10;
      int c = y / 10 % 10;
      int d = y % 10;
      if ( a != d && a!= c && a != b && b != d && b != c && c != d) break;
    }
    cout << y;
}

