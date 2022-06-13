#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int cas;
    string s; 
    cin >> cas;

    while (cas--){
      cin >> s;
      if (s.length() > 10){
        cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
      }
      else{
        cout << s << endl;
      }
    }
}