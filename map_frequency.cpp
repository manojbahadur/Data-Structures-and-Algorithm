#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    map<int,int> freq;
    rep(i,0,n){
        freq[a[i]]++;  
    }

    map<int,int> :: iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}