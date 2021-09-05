#include <iostream> 
using namespace std; 

//Write a program to display Fibonacci Series (Using while loops)

int main() { 
    int A1 = 0, A2 = 1, nterm = 0, n; 
    cout << "Enter a positive number: "<<endl; 
    cin >> n; 
    cout << "Fibonacci Series: "<<endl;
    cout << A1 << ", " << A2 << ", "; 
    nterm = A1 + A2; 
    
    while(nterm <= n) { 
    cout << nterm << ", "; 
    A1 = A2; 
    A2 = nterm; 
    nterm = A1 + A2; 
    } 
return 0; 
}