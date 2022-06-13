#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int x =0;
    int cas;
    cin >> cas;

    while (cas--){
    string s;
    cin >> s;

    if (s[1] == '+')
    {
      ++x;
    }
    else
    {
      --x;
    }
    }
    cout << x;
}