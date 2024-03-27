# include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        int n;
        cin >> n;

        string a;
        cin >> a;
        string b;
        cin >> b;
        string c;
        cin >> c;


        bool flag = false;
        for(int i = 0; i < n; i++) {
            if((a[i] != c[i] && b[i] != c[i])){
                flag = true;
            }
        }

        if(flag){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}