#include <iostream>
#include <vector>
using namespace std;

void moveAllNegToLeft(int arr[],int size){
    //dutch national flag algorithm
    int l =0;
    int h = size-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if (arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
            
        }
    }


}



int main(){
    int arr[]={1,2,5,-7,8,-3};
    int size = sizeof(arr)/sizeof(int);

    moveAllNegToLeft(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

 
}