#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

unordered_map <char,int> symbols = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s){
    stack <char> st;
    for(char bracket : s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 1;cin >> t;
    while(t--){
        string s; cin >> s;
        cout <<isBalanced(s) << nl;
        
    }
}