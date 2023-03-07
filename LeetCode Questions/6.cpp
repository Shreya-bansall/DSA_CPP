// Link: - https://leetcode.com/problems/unique-number-of-occurrences/
// Unique Number of Occurrences
// ???????

#include<iostream>
using namespace std;

void UniqueOccurence(int arr[], int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi= max(maxi,arr[i]);
    }

    int freq[maxi+1]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<(maxi+1);i++){
        if(freq[i]!=0){
            // cout<<i<<" -> "<<freq[i]<<"\n";
            // ans=ans^freq[i];
            // cout<<freq[i]<<"\n";

            // if(freq[i]!=freq[i+1]){
            //     return 1;
            // }
            // else{
            //     return 0;
            // }

            // for(int i=0;i<n;i++){
            //     for(int j=(i+1);j<n;j++){
            //         if(freq[i]==freq[j]){
            //             return 0;
            //         }
            //     }
            // }
            int idx;
            for (idx = 0; idx < (maxi+1); ++idx) {
                if (arr[idx] == arr[(maxi+1)]) break;
}
if (idx == (maxi+1)) {
    cout << "unique\n";
} else {
    cout << "not unique\n";
}
        }
    }
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];

    cout<<"Enter elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    UniqueOccurence(arr,size);
    return 0;
}