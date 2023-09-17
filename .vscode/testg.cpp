#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   
   int n;
   cin>>n;
  while(n>0){
   if(n==1){
       cout<<"one"<<endl;
   }
   if(n==2){
       cout<<"two"<<endl;
   }
   if(n==3){
       cout<<"three"<<endl;
   }
   if(n==4){
       cout<<"four"<<endl;
   }
   if(n==5){
       cout<<"five"<<endl;
   }
   if(n==6){
       cout<<"six"<<endl;
   }
   if(n==7){
       cout<<"seven"<<endl;
   }
   if(n==8){
       cout<<"eight"<<endl;
   }
   if(n==9){
       cout<<"nine"<<endl;
   }
   
   if(n>9&&n%2==0){
       cout<<"even"<<endl;
   }
   
   if(n>9&&n!=0){
   cout<<"odd"<<endl;
   }
    return 0;
  }
}
