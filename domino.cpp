#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int m,n;
    int k=2;
    cin >> m >> n; 
    int area;
    area = m*n;   

    cout << area / k ;
}