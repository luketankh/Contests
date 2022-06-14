#include<iostream>
#include<cmath>
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    int a,b,c=0;
    cin>>a>>b;
    if(a>b)
        c=0;
    else
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            c++;
        }
    cout<<c<<endl;
    return 0;
}

// bear and big brother 