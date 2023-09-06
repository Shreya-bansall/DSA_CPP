// Link: - https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633
// Check If The String Is A Palindrome

#include<iostream>
using namespace std;

char convertToLowercase(char name){
    if(name>='a' && name<='z'){
        return name;
    }
    else{
        char temp=name-'A'+'a';
        return temp;
    }
}

bool isAlphanumeric(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    else{
        return 0;
    }
}


bool checkPlaindrome(char name[], int n){
    int s=0, e=n-1;

    while(s<=e){
        if(name[s]==' ') {
            s++;
        }
        else if(name[e]==' ') {
            e--;
        }
        else if(!isAlphanumeric(name[s])){
            s++;
        }
        else if(!isAlphanumeric(name[e])){
            e--;
        }
        else if(convertToLowercase(name[s])!=convertToLowercase(name[e])){
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
    cin.getline(name, 20);

    int n=GetLength(name);

    if(checkPlaindrome(name,n)){
        cout<<"Yes";
    }
    else{
        cout<<"False";
    }

    return 0;
}