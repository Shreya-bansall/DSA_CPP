// Length of string

#include<iostream>
using namespace std;

int GetLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Length: "<<GetLength(name);

    return 0;
}