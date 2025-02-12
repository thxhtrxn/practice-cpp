#include <bits/stdc++.h>
using namespace std;

bool checkNum(int n) {
    if(n<=1) return false;
    for (int i = 2;i <= n-1;++i) {
        if( n %i == 0) return false;
        else return true;
    }
}

int main() {
    int n;
    cin >> n;
    cout <<  checkNum(n);

    return 0;
}