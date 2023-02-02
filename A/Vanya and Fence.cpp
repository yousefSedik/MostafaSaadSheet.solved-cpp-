#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n , h ,sw = 0,x ; cin >> n >> h ;
    for (int i = 0 ; i < n ; i++) {
        cin >>x;
        if (x > h)
            sw+= 2 ;
        else
            sw++ ;
    }
    cout << sw ;
}
