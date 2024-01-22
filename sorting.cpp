// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;;
    int ans=-1;
    while(s<=e){

if(arr[mid]==target){
    ans=mid;
    e=mid-1; //why this is written here beacause hame left mai search karna hai first occurance ko
}
// s=mid+1;
else if(target>arr[mid]){
    s=mid+1;
}

   
else if(target<arr[mid]){
    e=mid-1;
    
}
mid=s+(e-s)/2;
 }
return ans;
    
}
int main(){
    vector<int>arr{1,3,3,6,4,4,4,7};
    int target=4;
    int indexOfFirstOcc=firstOccurence(arr,target);
    cout<<"ans is "<<indexOfFirstOcc<<endl;
    return 0;
}