#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >>n;
    map<ll,ll> m;
    for(ll i = 0; i < n ;++i){
        ll x ;cin >> x;
        m[x]++;
    }
    ll am = 0;
    for(auto &[x,y] : m){
        am = max(am,y);
    }
    int ans = 0;
    while(am < n){
        ll d = min(n-am, am);
        ans += d+1; // +1 for as it need 1 stp for copy naa, thats why!!.!>
        am +=d;
    }
    cout << ans << nl;
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