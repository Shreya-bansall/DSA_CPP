// Dynamic
// Capacity keeps double when its fill

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1); // (5 is size of vector and 1 is intialize to the vector)
    cout<<"Printing a: ";
    for(int i:a){
        cout<<i<<" ";
    }

    // For copying vector a into last
    vector<int> last(a);
    cout<<"\nPrinting last: ";
    for(int i:last){
        cout<<i<<" ";
    }

    cout<<"\nCapacity: "<<v.capacity();

    v.push_back(1);
    cout<<"\nCapacity: "<<v.capacity();

    v.push_back(2);
    cout<<"\nCapacity: "<<v.capacity();

    v.push_back(3);
    cout<<"\nCapacity: "<<v.capacity();
    cout<<"\nSize: "<<v.size();

    cout<<"\nElement at 2nd index: "<<v.at(2);

    cout<<"\nFirst Element: "<<v.front();
    cout<<"\nLast Element: "<<v.back();

    cout<<"\nBefore POP: ";
    for(int i:v){
        cout<<i<<" ";
    }

    v.pop_back();

    cout<<"\nAfter POP: ";
    for(int i:v){
        cout<<i<<" ";
    }

    // Empty the vector (Size will be zero not capacity)
    v.clear();
     cout<<"\nSize: "<<v.size();
}