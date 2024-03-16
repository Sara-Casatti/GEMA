# include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    int n;
    int w;
    int total = 0;
    int resp;
    cin >> k >> n >> w;
    for (int i = 1; i <= w;i++){
        total = k*i + total;
        cout << total << "\n";
    }
    int x = total - n;
    if (x < 0) {
        cout << 0;
    } else {
        cout << x;
    }
}

