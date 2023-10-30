#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main() {
    // Write C++ code here
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueelement=findunique(arr);
    cout<<uniqueelement<<endl;

    return 0;
}