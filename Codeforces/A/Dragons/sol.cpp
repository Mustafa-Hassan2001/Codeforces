#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll s, n, x, y;
 le   bool flag = true;
    multimap < ll, ll > m;
    cin>>s>>n;
    for(ll i = 0; i < n; i++){
        cin>>x>>y;
        m.insert({x, y});
    }
    for(auto a : m){
        if(s > a.first){
            s += a.second;
        }
        else{
            cout<<"NO";
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    return 0;
}
