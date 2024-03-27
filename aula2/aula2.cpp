# include <bits/stdc++.h>
using namespace std;

int main() {
    // imprimir com precisão cout.setf(ios::fixed) 
    // cout.precision(2)
    // raiz sqrt()
    // "string" 'char'
    // S.push_back(char) == S += "a"
    // S.pop_back - apaga o último char
    // S.size() - len da string - só funciona com string
    //int n;
    //cin >> n;
    //while (n--) {
        //cout << "a\n";
    //}
    // erase() apaga parte da string
    string S = "abc";

    for(int i = 0; i < S.size();i++){
        S[i]++;
        cout << S[i] << "\n";
    }

    return 0;
}