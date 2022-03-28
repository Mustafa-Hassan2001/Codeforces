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

    ll n, m, a, b;
    cin>>n>>m>>a>>b;
    ll ans = 0, numOfSpecialTicket, numOfNormalTicket;

    if((m * a) > b){
    numOfNormalTicket = n % m;
    numOfSpecialTicket = (n - numOfNormalTicket) / m;

    ans = (numOfNormalTicket * a) + (numOfSpecialTicket * b);

    ans = min(ans, ((numOfSpecialTicket + 1) * b));
    }
    else{
        ans = n * a;
    }
    
    cout<<ans;

    return 0;
}