#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int n,t;
    string s;
    cin >> n >> t >> s;
    char temp;
    for (int j = 0; j<t; j++){
      for (int i=0; i < s.size(); i++){
        if (s[i] == 'B' && s[i+1] == 'G'){
          temp = s[i];
          s[i] = s[i+1];
          s[i+1] = temp;
          i++;
        }
      }
    }
    cout << s;
}