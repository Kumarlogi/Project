#include <iostream>
using namespace std;

//The program is Swap to two numbers.

int main() 
{
    int x=4, y=8, swap;
    cout<<"Before Swapping: "<<endl;
    cout<<x<<","<<y<<endl;
    
    swap=x;
    x=y;
    y=swap;
    
    cout<<"After Swapping: "<<endl;
    cout<<x<<","<<y<<endl;
    return 0;
}