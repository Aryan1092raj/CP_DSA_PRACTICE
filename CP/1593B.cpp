#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    string n ; cin >> n;
    ll cnt = 0;
    for(int k = 0; k < n.size(); ++k){
        for(char c : n){
            ll idx = n.find(c);
            string new_n = n;
            new_n.erase(idx, 1);
            if(stoll(new_n) % 25 == 0){
                cnt++;
            }
            if(!n.empty()){
                n = n.erase(idx,1);
            }
        }
    }
    cout << cnt << nl;

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