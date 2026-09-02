#include <iostream>
#include <vector>
using namespace std;

int main(){

    //TYPE 1

    //create vector
    vector<int>arr;  //int type ka
    // int ans = (sizeof(arr)/sizeof(int));
    //cout<<ans<<endl;

    cout<<arr.size()<<endl;    //vectore ke andar ke elements hai      ,output 0
    cout<<arr.capacity()<<endl;   //total space kitna hai

    //insert elements
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(10);

    cout<<arr.size()<<endl;    //output 3
    cout<<arr.capacity()<<endl;  //output 4 because it always creates double the previous space

    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     arr.pop_back();  //it will remove or pop out hte element from backside/piche se

    //print
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    //TYPE 2

    vector<int>brr(10,2);
    cout<<"Size of b : "<<brr.size()<<endl;   //output 10
    cout<<"Capacity of b : "<< brr.capacity()<<endl;  //output 10

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;




    //TYPE 3

    int n;
    cout<<"Enter the size of array you want : ";
    cin>>n;
    vector<int>crr(n,-4);
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;




    //TYPE 4

    vector<int>drr{10,20,39,40,50};
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;












    







}