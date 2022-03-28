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

    int n = 5, row = -1, col = -1, input = -1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>input;
            if(input){
                row = i + 1;
                col = j + 1;
            }
        }
    }
    int ans = abs(3 - row) + abs(3- col);
    cout<<ans<<endl;

    return 0;
}