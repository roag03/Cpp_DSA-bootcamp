#include <iostream>
#include<vector>
using namespace std;
int main() {
  vector<int>arr;
  int ans=(sizeof(arr)/sizeof(int));
  cout<<ans<<endl;
  cout<<arr.size()<<endl;
  cout<<arr.capacity()<<endl;
 // insert the number
  arr.push_back(5);
  arr.push_back(8);
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";

  }
 
  cout << "Printing crr";
  vector<int> crr{10, 20, 30, 40, 50};
  for (int i = 0; i < crr.size(); i++) {
    cout << crr[i] << " ";
  }
  cout << endl;
  cout << "Vector crr is enpty or not" << endl<< crr.empty();
  cout<<"printing vector drr";
  vector<int>drr;
  
    cout<<"vector drr is empty or not"<<drr.empty() ;
  
}
return 0;
}