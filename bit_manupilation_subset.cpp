#include<bits/stdc++.h>
using namespace std;

void subset(char arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    char arr[3] = {'A','B','C'};
    subset(arr,3);
    return 0;
}