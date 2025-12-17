#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){

}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    stack <int> s;
    s.push(2);
    s.push(5);
    while(!s.empty()){
        cout <<  s.top() <<nl;
        s.pop();
    }

    queue <string> q;
    q.push("ab");
    q.push("cd");
    while(!q.empty()){
        cout <<q.front() << nl;
        q.pop();
    }

}