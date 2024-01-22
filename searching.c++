
// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end =size-1;
    
//     while(start<=end) {
//         // int mid = (start+end)/2;  //integer division
//        int mid=start+(end-start)/2;
//         int element=arr[mid];
//         if(element==target){
//             return mid;

//         }
//         if(target<element){
//             end=mid-1;
//         }
//         else{
//         start=mid+1;}
//         // mid=(start+end)/2;
// }
// return -1;
// }
// int main() {
//     int arr[]={2,4,6,9,11,12,15,19};
//     int size=8;
//     int target=11;
//     int indexOftarget=binarySearch(arr,size,target);
//     if(indexOftarget==-1){
//         cout<<"targest not found"<<indexOftarget<<endl;
//     }
//     else{
//         cout<<"Element is present at index "<<indexOftarget<<endl;
//     }
//     return 0;
// }
// Online C++ compiler to run C++ program online
// #include<bits/stdc++.h>
// using namespace std;
// int firstOccurence(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;;
//     int ans=-1;
//     while(s<=e){

// if(arr[mid]==target){
//     ans=mid;
//     e=mid-1;
// }
// else if(target<arr[mid]){
//     e=mid-1;
    
// }
// else if(target>arr[mid]){
//     s=mid+1;
// }
// mid=s+(e-s)/2;
    
// }

// return ans;
    
// }
// int main(){
//     vector<int>arr{1,3,3,4,4,4,4,6,7};
//     int target=4;
//     int indexOfFirstOcc=firstOccurence(arr,target);
//     cout<<"ans is "<<indexOfFirstOcc<<endl;
//     return 0;
// }