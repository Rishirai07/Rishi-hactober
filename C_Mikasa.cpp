#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> seq;
        for(int i=0;i<=m;i++){
            seq.push_back(n^i);
        }
        int ans;
        sort(seq.begin(),seq.end());
        int lim = m^n;
        for(int j=0;j<lim);j++){
            for( auto c:seq){
                
        }
        }
        cout<<endl;
    }

    return 0; 
}
