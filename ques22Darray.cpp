#include<iostream>
#include <limits.h>
using namespace std;

int getmax(int arr[][3],int rows,int cols){
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++){
        for(int j=0;j<cols;j++){
            if(maxi<arr[i][j]){
                maxi = arr[i][j];
            }
        } 
    }  
  return maxi;  
}
int main(){

    int arr[3][3]= {{1,2,3},{5,6,7},{8,9,4}};
    int rows = 3;
    int cols = 3;
   

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   cout<< getmax(arr,3,3);
}