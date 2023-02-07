#include <iostream>
#include <bits/stdc++.h>

// typedef shortcuts 
typedef long long ll;
typedef long double ld;
// macros 

#define PB push_back;

using namespace std;

bool IsPrime(ll n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    int cas;
    cin >> cas;
    while (cas--){
    int n = 3;
    int a[n];
    int c_n = 0;
    int c_z = 0;
    for (int i = 0; i < n; ++i)
    {    
        cin >> a[i];
        if (a[i] < 0) c_n ++;
        else if (a[i] == 0) c_z++;
    }
    
    if (c_n == 3) cout << "NO" << '\n';
    else if (c_n == 2 && c_z == 1) cout << "NO" << '\n';
    else if (c_n == 1 && c_z == 2 ) cout << "NO" << '\n';
    else if (c_n == 0 && c_z == 2 ) cout << "NO" << '\n';
    else if (c_n == 0 && c_z == 0 ) cout << "NO" << '\n';
    else if (c_z== 3) cout << "NO" << '\n';
    else cout << "YES" << '\n';
    }
}
