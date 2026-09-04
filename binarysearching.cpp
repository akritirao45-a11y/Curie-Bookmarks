#include<iostream>
using namespace std;

// int binarySearch(int arr[],int size ,int target){
//     int start = 0;
//     int end = size -1;
//     int mid = (start+end)/2;

//     while(start<= end){
//         int element = arr[mid];
//         if(element == target){
//             return mid;
//         }
//         //search in left
//         else if(element < target){
//             end = mid - 1;
//         }

//         else{
//             //search in right
//             start = mid +1;
//         }

//         mid = (start+end)/2;

//     }
//     return -1;

// }
// int main(){
//     int arr[]={2,3,6,8,12,16};
//     int size = 7;
//     int target = 8;
//     int indexoftarget = binarySearch(arr,size,target);
    
//     if(indexoftarget == -1){
//         cout<<"target not found";
//     }
//     else{
//         cout<<"Target found at "<<indexoftarget<< " index"<<endl;   
//      }
//      return 0;
// }

//determing the index of first occurence of the element

int firstOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
    if(target==arr[mid]){
        ans=mid;
        end=mid-1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2; 
}
    return ans;  
}



int main() {
    int arr[]={2,3,4,5,5,6,5,7};
    int size=8;
    int target = 4;

    int find = firstOccurence(arr,size,target);

    cout<<find;

}