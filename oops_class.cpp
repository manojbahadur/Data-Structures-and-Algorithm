#include<bits/stdc++.h>
using namespace std;

class students{
    string name;
    public:
    int age;
    char gender;

    void setname(string s){
        name = s;
    }
    void printinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

int main(){

    students arr[3];

    for(int i=0;i<3;i++){
        string s;
        cout<<"Enter name: ";
        cin>>s;
        arr[i].setname(s);
        cout<<"Enter age: ";
        cin>>arr[i].age;
        cout<<"Enter gender: ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }

    return 0;
}