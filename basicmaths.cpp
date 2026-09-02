#include <iostream> 
using namespace std;

//count the number of digits
int count(int n){
    int count = 0;
    while(n > 0){
    //    int lastdigit = n%10;
        count = count + 1;
        n=n/10;
    }
    return count;
}


//for reversing the number
int reverse{reverse}{
    int revNum = 0;
    while(n>0){
        int ld = n%10;
        revNum = (revNum * 10) + ld;
    }
}

//for the armstrong 
int armstrong(int n){
    //371 = 3 cube + 7 cube + 1 cube ==true else false
    int sum,arm = 0, apple = n;
    while(n>0){
        int ld = n%10;
        int sum = arm + (ld*ld*ld);
    }
    if( sum = apple ) cout<<true;
    else cout<<false;

}




int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    //  int count = 0;
    // while(n > 0){
    //     n=n/10 ;
    //     count = count + 1;
    // }

    // cout<<count;

armstrong(n);

}


