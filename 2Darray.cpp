#include<iostream>
#include <vector>
using namespace std;
int main(){

//     //declare 2D array
//     int arr[3][3];

//     //initialization
//     int brr[3][3] ={
//     {2,3,4},
//     {5,6,7},
//     {1,8,9}};
    

//     //access 

//     //row wise print
// for(int i = 0; i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<brr[i][j];
//     }
//     cout<<endl; 
// }
// //column wise print
// for(int i = 0; i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<brr[j][i];
//     }
//     cout<<endl; 
// }

//taking input
int arr[4][5];
int rows = 4;
int cols = 3;
//row wise input
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>arr[i][j]; //[j][i] for col wise imput
    }
    
}

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}




}