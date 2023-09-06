#include<iostream>
using namespace std;

int LargestRowSum(int arr[][100], int n, int m){
    int maxi=INT_MIN;
    int rowIndex=-1;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"Largest sum is: "<<maxi<<"\n";
    return rowIndex;
}

int main(){
    int arr[100][100];
    int n, m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int ans=LargestRowSum(arr,n,m);
    cout<<"Largest row sum is: "<<ans;
    return 0;
}