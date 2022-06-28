#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    string s;
    cin >> s;
    int count=0;
    for (int i = 0; i < s.size(); i++){
      if(s[i] == '4' || s[i] == '7'){
        count++;
      }
      else{
        continue;
      }
    }
    if (count == 4  || count == 7 ){
      cout << "YES";
    }
    else{
      cout << "NO";
    }
}