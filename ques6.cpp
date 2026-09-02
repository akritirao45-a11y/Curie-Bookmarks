#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr{10,20,30,40,50,80,90,60};
    int ans = 100;

    for(int i=0;i<arr.size();i++){
        int element1 = arr[i];

        for(int j=i+1;j<arr.size();j++){
            int element2 = arr[j];

            for(int k=j+1;k<arr.size();k++){
                int element3 = arr[k];

                for(int p=k+1;p<arr.size();p++){
                    int element4 = arr[p];

                    if(element1 + element2 + element3 + element4 == ans){
                        cout << element1 << " "
                             << element2 << " "
                             << element3 << " "
                             << element4 << endl;
                    }
                }
            }
        }
    }

    return 0;
}