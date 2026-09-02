#include <iostream>
using namespace std;
void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
}

void inc(int a[],int size){
    a[0]=3;
    a[1]=4;
    printarray(a,size);
}


int main(){
    //array declaration
    
    //array initialization
   
   //error will be found
    // int drr[4]={1,2,3};

//accesing the elements
// int hrr[] = {1,2,3,4,5};
// cout<< hrr[0]<<endl;
// cout<<hrr[1]<<endl;

// for(int i=0; i<5 ; i++){
//     cout<<arr[i]<<" ";
// }




// int arr[10];

// cout<<"enter the value of array";
// for (int i =0; i<10 ; i++){
//     cin>>arr[i];
// }


// cout<<"printing the value in array";
// for(int i=0; i<10;i++){
//     cout<<arr[i]<<" ";
// }


// int arr[5];

// int n;
// cout<<"how many numbers you want to add in array ";
// cin>>n;
// cout<<"Taking inputs of the array :";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// cout<<"Required Result : ";
// for(int i=0;i<5;i++){
//     cout<<2*arr[i]<<" ";
// }


// int arr[100];
// cout<<"Enter the number of index you want :";
// int n;
// cin>>n;

// cout<<"Taking the inputs : ";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// cout<<"Requied answer : ";
// for(int i=0; i <n;i++){
//    arr[i] = 1;
//    cout<<arr[i]<<" ";
// }

int a[] ={2,4};
int size = 2;

inc(a,size);
printarray(a,size);







}