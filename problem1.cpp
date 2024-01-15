#include<bits/stdc++.h>
// #include<vector>
// #include <algorithm>
using namespace std;

int binarySearch(vector<int> &arr,int size,int target)

{
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+(end-start)/2);
        if(arr[mid]==target){
            cout<<"iteam is found "<<mid;
            return mid;
            }else if(arr[mid] > target ){
                end = mid - 1;
                }else {
                    start = mid + 1;
        }
    
    }
    cout<<"iteam is not found";

    return 0;
}
int main(){
    vector<int>arr{3,2,5,7,6,4,32,91,64,10,33,56};
    sort(arr.begin(), arr.end());
    cout<<"Sorted array is: ";
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
    }
//    int n = sizeof(arr)/sizeof(arr[0]);
    int size=arr.size();
    int target=32;
    binarySearch(arr,size,target); //binarySearch function is called to pass arr.data() instead of arr, since binarySearch expects a pointer to the first element of the array.
    
    return 0;

}