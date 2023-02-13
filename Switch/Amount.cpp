#include<iostream>
using namespace std;

int main(){
    int amount, Rs100, Rs50, Rs20, Rs1;
    cout<<"Enter amount: ";
    cin>>amount;

    switch(1){
        case 1:
        Rs100=amount/100;
        amount=amount%100;
        cout<<"Rs. 100 notes: "<<Rs100<<"\n";

        case 2:
        Rs50=amount/50;
        amount=amount%50;
        cout<<"Rs. 50 notes: "<<Rs50<<"\n";

        case 3:
        Rs20=amount/20;
        amount=amount%20;
        cout<<"Rs. 20 notes: "<<Rs20<<"\n";

        case 4:
        Rs1=amount/1;
        amount=amount%1;
        cout<<"Rs. 1 notes: "<<Rs1;

    }

    return 0;
}