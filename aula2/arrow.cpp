#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    bool out = true;

    cin >> s;

    if (s[0] == '<' && s[s.size()-1] == '>') {

        for (int i = 1; i < s.size() -1; i++) {

            if (s[i] != '=') {
                out = false;
                break;
            }

        }

    } else {
        out = false;
    }

    if (out) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}