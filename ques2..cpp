#include <iostream>
#include<vector>
using namespace std;
int main(){
   //union of arrays not considering special cases
    int arr[]={1,2,3,4,8};
    int sizea = 5;
    int brr[]={4,5,7,9};
    int sizeb = 4;
    //ek vector lo aur usme sara element daal do dono array ka
    vector<int>ans;

    //push all elements of vector arr
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }

    //push all element vector brr
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }

    //print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }





    





}
