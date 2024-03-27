#include <bits/stdc++.h>
using namespace std;

int main() {
    bool ia;
    bool ib;
    bool fa;
    bool fb;

    int total = 0;

    cin >> ia >> ib >> fa >> fb;
    while(ib != fb || ia != fa){
        if(ib != fb) {
            ia = !ia;
            ib = !ib;
        } else if(ia != fa){
            ia = !ia;
        }
        total += 1;
    }

    cout << total << "\n";

    return 0;
}