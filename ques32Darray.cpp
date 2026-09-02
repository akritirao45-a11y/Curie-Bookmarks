#include <iostream>
using namespace std;

void transpose(int arr[][3],int rows,int cols,int ans[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            // swap(arr[i][j],arr[j][i]);
            ans[j][i]= arr[i][j];   //created another array to store the transpose
        } 
    }
}
int main(){
    int arr[3][3]= {{1,2,3},{5,6,7},{8,9,4}};
    int rows = 3; int diagonal = 4;
    int cols = 3;
   
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }
     int ans[3][3];
    transpose(arr,3,3,ans);

  for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }



} 