
// Static
#include<iostream>
#include<array>

using namespace std;

int main(){

    array<int,4> a={1,2,3,4};
    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\nElement at 2nd index: "<<a.at(2);
    cout<<"\nEmpty or not: "<<a.empty();

    cout<<"\nFirst Element: "<<a.front();
    cout<<"\nLast Element: "<<a.back();

}