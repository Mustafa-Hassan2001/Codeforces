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

    string pat = "hello";
    string s;
    cin>>s;
    int j = 0, flag = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == pat[j]){
            j++;
        }
        if(j == (pat.size())){
            flag = 1;
            break;
        }
        
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}