#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 15, 1);

    //To check the array input
    for(int i=0;i<15;i++){
        cout<<array[i]<<"\n";
    }

}