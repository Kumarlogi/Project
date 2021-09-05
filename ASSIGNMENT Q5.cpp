#include <iostream>
using namespace std;

// The program is to check whether a number is Prime or Not.

int main() {
    int x,i,y=0;
    cout<<"Enter any number - ";
    cin>>x;
    cout<<x<<endl;
    
    for(i=1;i<=x;i++){
        if(x % i==0){
            y++;
        }
    }
    
    if(y == 2){
        cout<<x<<" is a prime number"<<endl;
    }
    else{
        cout<<x<<" is not a prime number"<<endl;
    }
    return 0;
}