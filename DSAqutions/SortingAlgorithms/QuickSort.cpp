#include <iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int i=si-1;
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    //pivotIndex=i
    return i;

}

void Qucksort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int PivotIdex=partition(arr,si,ei);
    Qucksort(arr,si,PivotIdex-1);
    Qucksort(arr,PivotIdex+1,ei);


}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={6,3,7,5,2,4};
    Qucksort(arr,0,5);
    printarr(arr,6);
    
}

