#include<iostream>
using namespace std;
void printnumber(int n){
    for(int i=0;i<n;i++){
        cout<<i<< " ";
    }
    cout<<endl;
}
int getsum(int n){
   int sum=0;
   for(int i=2;i<=n;i=i+2){
    sum=sum+i;
   }
return sum;
}
int main(){
//     int a;
//     cout<<"value odf n is"<<endl;
//     cin>>a;
//    printnumber(a);

int a;
cout<<"the valuue of a is"<<endl;
cin>>a;
int psum=getsum(a);
cout<<psum<<endl;
}