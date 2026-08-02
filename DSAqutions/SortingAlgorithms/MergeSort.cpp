
#include <iostream>
#include <vector>
using namespace std;

int mearge(int arr[],int si,int mid,int ei){
    vector <int> temp;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    //vector->original arr

    for(int i=si,x=0;i<=ei;i++){
        arr[i]=temp[x++];
    }
}

int Meargesort(int arr[],int si,int ei){
    if(si>=ei){
        return -1;
    }
    int mid=si+(ei-si)/2;

    Meargesort(arr,si,mid);//left
    Meargesort(arr,mid+1,ei);//right

    mearge(arr,si,mid,ei);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={6,3,7,5,2,4};
    Meargesort(arr,0,5);
    printarr(arr,5);


}
