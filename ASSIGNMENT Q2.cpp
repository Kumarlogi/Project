#include <iostream>
using namespace std;

//This is program to find the largest number among three numbers entered by the user.


int main() {
    int x,y,z;
    cout<<"Enter the first number: "<<endl;
    cin>>x;
    cout<<x<<endl;
    cout<<"Enter the second number: "<<endl;
    cin>>y;
    cout<<y<<endl;
    cout<<"Enter the third number: "<<endl;
    cin>>z;
    cout<<z<<endl;
    
    if(x>y && x>z)
        cout<<"Largest number is: "<<x<<endl;
    else if(y>x && y>z)
        cout<<"Largest number is: "<<y<<endl;
    else
        cout<<"Largest number is : "<<z<<endl;
    return 0;
}