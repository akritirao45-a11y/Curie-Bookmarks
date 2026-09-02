#include<iostream>
using namespace std;

int binarySearch(int arr[],int size ,int target){
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;

    while(start<= end){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        //search in left
        else if(element < target){
            end = mid - 1;
        }

        else{
            //search in right
            start = mid +1;
        }

        mid = (start+end)/2;

    }
    return -1;

}
int main(){
    int arr[]={2,3,6,8,12,16};
    int size = 7;
    int target = 2;

    int indexoftarget = binarySearch(arr,size,target);
    
    if(indexoftarget == -1){
        cout<<"target not found";
    }
    else{
        cout<<"Target found as "<<indexoftarget<< "index"<<endl;   
     }
     return 0;
}