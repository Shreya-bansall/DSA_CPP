// Link: - https://www.codingninjas.com/codestudio/problems/pair-sum_697295
// Pair Sum

#include<iostream>
using namespace std;

void PairSum(int arr[], int n, int Sum){
    for(int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            if(arr[i]+arr[j]==Sum){
                cout<<min(arr[i],arr[j])<<","<<max(arr[i],arr[j])<<"\n";
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
    int Sum;
    cout<<"Enter sum of elements: ";
    cin>>Sum;

    PairSum(arr,size,Sum);
}

// CodeStudio Solution
//  vector<vector<int>> ans;
//    for(int i=0;i<arr.size();i++){
//         for(int j=(i+1);j<arr.size();j++){
//             if(arr[i]+arr[j]==s){
//                vector<int> temp;
//                temp.push_back(min(arr[i],arr[j]));
//                temp.push_back(max(arr[i],arr[j]));
//                ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;