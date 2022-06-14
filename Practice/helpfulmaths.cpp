#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    string s[100];
    int a[100];
    cin >> s;
    int count;

    for (int i = 0; i < s.size(); i++){
      if (s[i] == '='){
        continue;
      }
      else {
        a[i] = s[i] - '0';
      }
    }
    sort(a,a+i);
    for (int j = 0; j < i; j++)
    {
      cout<<a[j];
      if (j == count-1)
        {
          break;
        }
        cout << "+";
    }

}


