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

    pair < int, int > max = {-1, -1};
    pair < int, int > min = {101, 101};

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];

    for(int i = 0, j = n - 1; i < n, j >= 0; i++, j--){
        if(max.first < a[i]){
            max.first = a[i];
            max.second = i;
        }
        if(min.first > a[j]){
            min.first = a[j];
            min.second = j;
        }
    }
    int change = 0, shiftMax = 0, shiftMin = 0;

    if(max.second != 0){
        shiftMax = max.second;
    }
    if(min.second != n - 1){
        shiftMin = n - 1 - min.second;
        if(max.second > min.second)
            shiftMin--;
    }

    change = shiftMin + shiftMax;

    //cout<<max.first<<" "<<max.second<<endl;
    //cout<<min.first<<" "<<min.second<<endl;
    cout<<change<<endl;

    return 0;
}