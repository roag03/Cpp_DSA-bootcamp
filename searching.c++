#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int start=0;
    int end =size-1;
    
    while(start<=end) {
        // int mid = (start+end)/2;  //integer division
       int mid=start+(end-start)/2;
        int element=arr[mid];
        if(element==target){
            return mid;

        }
        if(target<element){
            end=mid-1;
        }
        else{
        start=mid+1;}
        // mid=(start+end)/2;
}
return -1;
}
int main() {
    int arr[]={2,4,6,9,11,12,15,19};
    int size=8;
    int target=11;
    int indexOftarget=binarySearch(arr,size,target);
    if(indexOftarget==-1){
        cout<<"targest not found"<<indexOftarget<<endl;
    }
    else{
        cout<<"Element is present at index "<<indexOftarget<<endl;
    }
    return 0;
}