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
      int arr[1001];
  string s;
  cin>>s;
  int count=0;
  for(int i=0;i<s.size();i++){
      if(s[i]=='+'){
          continue;
      }else{
          arr[count++]=s[i]-'0';
      }
  }
  sort(arr,arr+count);
  for(int i=0;i<count;i++){
      cout<<arr[i];
      if(i==count-1){
          break;
      }
      cout<<"+";
  }
  return 0;
}

