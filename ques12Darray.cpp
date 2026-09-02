#include <iostream>
using namespace std;
bool findkey(int arr[][3],int rows,int cols,int key){
    for(int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)
            return true;   
        }
    }

    return false;
}

void printsumcols(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum = sum+arr[j][i];
        
        }
        cout<<sum<<endl;
    }
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
    
//    cout<< findkey(arr,3,3,12);
if(findkey(arr,3,3,2)){
    cout<<"True";

}
else cout<<"False"; 


}