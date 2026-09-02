#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int var= 8-i;
        int var2=i+1;
        int count=var2;    //creating copy is necessary
        for(int j=0;j<17;j++){
            if(j==var&& count>0){
                cout<<var2;
                var+= 2;
                count--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}