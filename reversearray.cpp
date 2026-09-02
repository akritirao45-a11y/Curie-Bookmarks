#include <iostream>
using namespace std;
int main(){
    int size = 8;
    int arr[] = {2,4,6,8,10,12,14,16};
    int start = 0;
    int end = size - 1;

    while(start<=end){
         //step1
         swap(arr[start],arr[end]);
         //step2  
         start++;
         //step3
         end--;
    }

    //printing array
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
}