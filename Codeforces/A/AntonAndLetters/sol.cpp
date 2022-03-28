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

    string s;
    getline(cin,s);
    //cout<<s<<endl;
    int charCount[26] = {0};

    for(char c : s){
        if(!(c == '{' || c == '}' || c == ',' || c == ' ')){
            charCount[c - 'a']++;
        }
    }

    int count = 0;

    for(int i = 0; i < 26; i++){
        if(charCount[i])
            count++;
          //cout<<charCount[i]<<"\n";
    }

    cout<<count;

    return 0;
}