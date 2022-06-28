#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int upper=0,lower=0;
    string s;
    cin >> s;

    for (int i =0; i <s.size(); i++){
      if(isupper(s[i]) == 1){
        upper++;
      }
      else{
        lower++;
      }
      } 
    if (lower >= upper){
      for (int i =0; i <s.size(); i++){
        s[i] = tolower(s[i]);
      }
    }
    else{
     for (int i =0; i <s.size(); i++){
        s[i] = toupper(s[i]);
      } 
    }
    cout << s;
}

//59A Word