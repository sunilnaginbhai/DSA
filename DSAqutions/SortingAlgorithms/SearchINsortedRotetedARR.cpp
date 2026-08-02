

// search in rotated sorted

// Apply Merge sort to sort an array of Strings. (Assume that all the characters 
// in all the Strings are in lowercase). (EASY) 

// Sample Input 1 : arr = { "sun", "earth", "mars", "mercury" } 
// Sample Output 1 : arr = { "earth", "mars", "mercury", "sun"} 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int mearge(string arr[],int si,int ei,int mid){
    vector <string> temp;
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

    for(int i=si,x=0;i<=ei;i++){
        arr[i]=temp[x++];

    }

}
void meargesort(string arr[],int si,int ei){
    if(si>=ei){
        return ;
    }

    int mid=si+(ei-si)/2;

    meargesort(arr,si,mid);
    meargesort(arr,mid+1,ei);

    mearge(arr,si,ei,mid);

}
int printarr(string arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    string arr[] ={"sun","earth","mars","mercury"};
    meargesort(arr,0,3);
    printarr(arr,4);
    return 0;
}