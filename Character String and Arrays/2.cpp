// Reverse a string

#include<iostream>
using namespace std;

void Reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(name[s++],name[e--]);
    }
}

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

    int a=GetLength(name);

    Reverse(name,a);

    cout<<"Your name after reverse: ";
    cout<<name;

    return 0;
}