/* Output
Case #1: 4 0 0
Case #2: 9 4 4
Case #3: 8 0 2
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define f(i,n) for(ll i=0; i<n; i++)
#define fr(i,n) for(ll i=n-1; i>=0; i--)

int main(){
    ll t, Case = 1;
    cin>>t;
    do{
        ll n,i,j;
        cin>>n;
        vector < vector < ll > > arr;
    
        f(i,n){
            vector < ll > temp;
            f(j,n){
                ll x;
                cin>>x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }
        ll trace = 0, row = 0, column = 0;
        unordered_map < ll,int > mapRow;
        unordered_map < ll,int > mapColumn;

        f(i,n){
            mapRow.clear();
            mapColumn.clear();
            f(j,n){
                if(i == j) trace += arr[i][j];
                mapRow[arr[i][j]]++;
                mapColumn[arr[j][i]]++;
            }
            for(auto a : mapRow){
                if(a.second > 1){
                    row++;
                    break;
                }
            }
            for(auto a : mapColumn){
                if(a.second > 1){
                    column++;
                    break;
                }
            }
        }
        cout<<"Case#"<<Case<<": "<<trace<<" "<<row<<" "<<column<<"\n";

    }while(++Case <= t);
    return 0;
}