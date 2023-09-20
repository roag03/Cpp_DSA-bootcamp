#include<iostream>
using namespace std;

// i am using function from this area/

// void pintName(){
//   int n;
//   cout<<"the value of n is"<<endl;
//   cin>>n;
//   for(int i=0; i<n; i++){
//     cout<<"Rohit will become worlds richest person with his friends"<<endl;
//   }
// }
// int add(int a,int b){
//  int result=a+b;
//  return result;
// }
// int main(){
// // pintName();
//     // int a= 5;
//     // cin >>a;
//     // cout<<"value of a "<<a<<endl;

//     int a;
//     cout<<"the value of a"<<endl;
//     cin>>a;
//     int b;
//     cout<<"the value of b"<<endl;
//     cin>>b;
//     int sum=add(a,b);
//     cout<<"the value of a+b is"<<sum<<endl;


// cout<<"the address of a is " << &a <<endl;
int value(int num1,int num2,int num3){
    if (num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 &&num2> num3){
        return num2;
    }
    else{
    return num3;
}
}
int main(){
int a,b,c;
cin>>a>>b>>c;
int maxNumber= value(a,b,c);
cout<< maxNumber<<endl;

    
}