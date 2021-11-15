#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
    return 0;
}