+


+nclude<iostream>
using namespace std;

 void printdiv(int n){
    for(int i=1; i<=n;i++)
    { 
        if(n%i == 0) cout<<i<<" ";
       
    }
    }

int main() {
int n; 
cout<<"Enter your number : ";
cin>>n;
 printdiv(n);
    // int sum = 0;
    // int original = n;

    // while(n > 0) {
    //     int ld = n % 10;
    //     sum = sum + (ld * ld * ld);
    //     n = n / 10;
    // }

    // if(sum == original) cout << "true";
    // else cout << "false";

    // return 0;
}