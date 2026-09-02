#include <iostream>
using namespace std;

int rectangle(int n){

    for(int row=0;row<=n;row++){
for (int col = 0 ; col <=5; col++){

    cout<<"* ";
}
cout<<endl;
    }
}

 
int hollowrectangle(int n){
    for ( int row = 0; row>2; row = row+1){
   if(row = 0 || row ==2 ){
   for (int col=0; col<5; col= col+1){
    cout<<"*";
   }

   }
    }


}





int main(){
cout<<"Enter the value of n";
int n;
cin>>n;
hollowrectangle(n);


}