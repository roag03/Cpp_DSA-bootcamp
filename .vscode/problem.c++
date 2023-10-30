// #include <iostream>
// #include <vector>
// using namespace std;
// int findunique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main() {
//     // Write C++ code here
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int uniqueelement=findunique(arr);
//     cout<<uniqueelement<<endl;

//     return 0;
// }
// Problem no 2

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int arra[]={1,3,5,7,9};
    int sizea=5;
    int brrb[]={2,4,6};
    int sizeb=3;
    vector<int>ans;
    for(int i=0;i <sizea;i++){
        ans.push_back(arra[i]);
    }
    for(int i=0;i <sizeb;i++){
        ans.push_back(brrb[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}