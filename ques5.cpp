#include <iostream>
#include <vector>
using namespace std;
int main(){
    //sum of triplets kinda ques

    vector<int>arr{10,20,30,40,50,60,70};
    int ans = 60;

    for(int i=0;i<arr.size();i++){
        int element1 = arr[i];
        
        for(int j=i+1;j<arr.size();j++){
            int element2 = arr[j];

            for(int k=j+1;j<arr.size();k++){
                int element3 = arr[k];

                if(element1 + element2 + element3 == ans){
                    cout<<element1<<" ' " <<element2<<" , "<<element3<<endl;
                }
            }
        }
    }
}