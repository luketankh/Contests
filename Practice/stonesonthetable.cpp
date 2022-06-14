#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int n,k=0;
    string s;
    cin >> n >> s;
    for (int i=0; i < n; i++){
      if (s[i] == s[i+1]){
        k++;
      }
    }
    cout << k;
    }

    // STONES ON THE TABLE