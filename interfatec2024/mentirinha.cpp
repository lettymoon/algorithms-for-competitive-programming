#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    int cont = 0;
    for(int i = 2; i < n; i++){
        if(n%i == 0)
            cont++;
    }

    if(cont == 1)
        cout << "sim" << endl;
    else
        cout << "nao" << endl;
}

int main(){
    solve();
    return 0;
}