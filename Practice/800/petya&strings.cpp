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
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a == b)
    {
        cout << "0" << endl;
    }
    else if (a > b)
    {
        cout << "1" << endl;
    } else
    {
        cout << "-1" << endl;
    }

    return 0;
}