#include <iostream>
#include <vector>
using namespace std;
int main(){
    //pairing elements

    vector<int>arr{10,20,30,40,60,70};
    int sum = 80;

    //print all pairs
    
     
 for(int i=0;i<arr.size();i++){
    int element = arr[i];

    //for every elements , will traverse on aage wale elements

    for(int j=i+1;j<arr.size();j++){
        if(element + arr[j] == sum ){
            cout<<"Pair Found : "<<element<<" , "<<arr[j]<<endl;
        }

    // cout<<"("<<element<<" , "<<arr[j]<< " ) "<<endl;
    }

 }







}
