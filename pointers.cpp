#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    char c = 'A';
    int *aptr;
    char *cptr;

    aptr = &a;
    cptr = &c;

    cout<<aptr<<endl;
    cout<<cptr<<endl;
    cout<<*aptr<<endl;
    cout<<&c<<endl;
    
}