// Link: - https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Find All Duplicates in an Array

#include<iostream>
using namespace std;

void Duplicates(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" "; 
            }
        }
    }
}

int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    Duplicates(arr,size);

    return 0;
}

// Leet Code Solution
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector <int> ans;
//         for(int i=0;i<nums.size();i++){
//             for(int j=(i+1);j<nums.size();j++){
//                 if(nums[i]==nums[j]){
//                     ans.push_back(nums[i]);
//                 }
//             }
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };