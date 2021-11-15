#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "; //1 2 3
    
    vector<int>::iterator it;
    for(it = v.begin();it!=v.end();it++)
        cout<<*it<<" "; //1 2 3

    for(auto vec:v)
        cout<<vec<<" ";//1 2 3

    v.pop_back(); //1 2

    vector<int> v2 (5,10); //10 10 10 10 10

    for(auto ele:v2)
        cout<<ele<<" ";
}
