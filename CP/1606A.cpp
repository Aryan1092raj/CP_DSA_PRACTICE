#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    string s ; cin >> s;
    ll ln = s.size();
    if (ln > 1 && s.front() != s.back()){
        s.front() = s.back();
    }
    cout << s << nl;

}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    cout.tie(nullptr);
    
    ll t = 1;cin >> t;
    while(t--){
        solve();
    }
}