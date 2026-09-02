#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int maxi = INT_MIN;
int arr[]={2,6,7,4,8,5};
int size = 6;
    for(int i=0;i<size;i++){       //linear search algo
        if(arr[i]>maxi)
    maxi = arr[i];
    }

    cout<<"maximum number is "<<maxi<<endl;
}