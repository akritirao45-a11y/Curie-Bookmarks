#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr{1,0,1,1,0,0,1,0};

    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {

        // Skip correctly placed 0s
        if(arr[left] == 0 ) {
            left++;
        }

        // Skip correctly placed 1s
        if(arr[right] == 1 ) {
            right--;
        }

        // Swap misplaced elements
        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    for(int num : arr)
        cout << num << " ";

    return 0;
}