// Data stored in the form of key value and key is unique

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1]="shreya";
    m[2]="bansal";
    m[13]="UPES";

    m.insert({5,"CS"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"\nFinding 13: "<<m.count(13)<<endl;
    
    m.erase(13);
    cout<<"After Erase: \n";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}