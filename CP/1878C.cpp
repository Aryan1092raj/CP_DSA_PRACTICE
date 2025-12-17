#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n,k,x;
    cin >> n >> k >> x;
    ll s_min = k*(k+1)/2;
    ll s_max=0  ;
    // if(n >= x){
    //     cout << "NO" <<nl;
        
    // }
    for(int i = 0; i < k ; ++i){
        s_max += n - i ;
    }
    if(x>=s_min && x <= s_max){
        cout << "YES" << nl;
    }else{
        cout << "NO" <<nl;
    }
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 1;cin >> t;
    while(t--){
        solve();
    }
}