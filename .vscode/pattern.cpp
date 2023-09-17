#include<iostream>
using namespace std;
int main(){

// rectangular pattern
// for(int row=0;row<3;row++){
//     for(int col=0;col<5;col++){
//     cout<<"* ";
//     }
//     cout<<endl;
// }

// for squar pattern
// for(int row=0;row<4;row++){
//     for(int col=0;col<4;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// if we give
// int n;
// cin>>n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// int rowCount,colCount;
// cin>>rowCount;
// cin>>colCount;
//    for(int row=0;row<rowCount;row++){
//     if (row==0||row==rowCount-1){
//         for(int col=0;col<colCount;col++){
//             cout<<"* ";
//         }
//     }
//     else{
//     cout<<"* ";
//     for(int col=0;col<colCount-2;col++){
//         cout<<"  ";
//     }
//     cout<<"* ";
//     }
//     cout<<endl;
//    }
// int n;
// cin>>n;

// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-(row+1);col++){
//         cout<<" ";
//     }
//      for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
// }
// for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
int dist,n;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>dist;
	int total_distance  = dist*2*5;
	cout<<total_distance<<endl;
	}
	
return 0;
}