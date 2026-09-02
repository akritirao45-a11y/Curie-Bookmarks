#include <iostream>
#include <vector>
using namespace std;
int main(){

    //taking intersection of two arrays

    vector<int>arr{1,2,3,4,6,8};
    vector<int>brr{3,3,4,10};

    vector<int>ans;

    //outerloop for vector arr

    for(int i=0;i<arr.size();i++){
        int element =arr[i];
        //for every element , run loop on brr
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
            //mark
            //iska mtlb ek baar jo element check ho gya uski jgah -1 rkh do kyuki sara hi positive hai match hi nhi hoga aur agr negetive wala hua toh int_min use krenge
                brr[j]=-1;
                ans.push_back(element);
            }
        }

    }
//print ans
for(auto value:ans){
    cout<<value <<" ";
}







}