#include <iostream>
#include <vector>
using namespace std;
int main(){

    //sort 0s and 1s (0s in the left and 1s in the right)

    vector<int>arr{1,0,0,1,1,1,0,0,1,0,0};
    int start = 0;
    int end = arr.size()-1;
    
    int i = 0;
    while(i<=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

    for(auto val : arr){
        cout<<val<<" ";
    }



    //2nd approach

    //     vector<int> arr{1,0,1,1,0,0,1,0};

    // int left = 0;
    // int right = arr.size() - 1;

    // while(left < right) {

    //     // Skip correctly placed 0s
    //     while(arr[left] == 0 && left < right) {
    //         left++;
    //     }

    //     // Skip correctly placed 1s
    //     while(arr[right] == 1 && left < right) {
    //         right--;
    //     }

    //     // Swap misplaced elements
    //     if(left < right) {
    //         swap(arr[left], arr[right]);
    //         left++;
    //         right--;
    //     }
    // }

    // for(int num : arr)
    //     cout << num << " ";










}