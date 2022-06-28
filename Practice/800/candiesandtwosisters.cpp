#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
#include <cctype>
#include <string>
#include <iterator>

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
      int cas;
      int n;
      cin >> cas;
      while(cas--){
        int count =0;        
         cin >> n;
         if (n <=2) cout << count << '\n'; 
         else {
           if (n%2 == 0){
            count += (n/2) - 1;
            cout << count << '\n';
           }
           if (n%2 > 0) {
            count += ((n-1)/2);
            cout << count << '\n';
           }
         }
      }
}
