// Check If The String Is A Palindrome

#include<iostream>
using namespace std;

bool checkPlaindrome(char name[], int n){
    int s=0, e=n-1;

    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
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
    cout<<"Enter the string to check: ";
    cin>>name;

    int n=GetLength(name);

    if(checkPlaindrome(name,n)){
        cout<<"Yes";
    }
    else{
        cout<<"False";
    }

    return 0;
}