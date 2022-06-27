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
    int a[] = {1,5,10,20,100};
    ll n, count =0, x;
    cin >> n; 
    x = size(a); //why do you need to do this to return size of array?
    for (int j = x-1 ; j >= 0; j--){
      while (n >= a[j]){
        n -= a[j];
        count++;
      }
    }
    cout << count;
}
