// typedef shortcuts 
typedef long long ll;
typedef long double ld;

/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: luketan1
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <iomanip>
#include <set>
#include <cctype>
#include <string>
#include <iterator>

#define pb push_back;

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    int k =47;
    fin >> a >> b;
    int asum=1, bsum=1;
    for (int i = 0; i < a.size(); ++i){
      asum *= a[i] - 'A' + 1;
    }
    for (int j = 0; j < b.size(); ++j){
      bsum *= b[j] - 'A' + 1;
    }
   fout << (asum%k == bsum%k ? "GO" : "STAY") << endl; 
    return 0;
}



   