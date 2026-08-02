//^ bubble sorting (acending order):

#include <iostream>
using namespace std;

void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

void sortingofarr(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){   //* (arr[j]<arr[j+1]) for desending  order 
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={2,4,1,5,3,3,8,9,10,20,55,50};
    int n=sizeof(arr)/sizeof(int);
    sortingofarr(arr,n);
    printarr(arr,n);
}

