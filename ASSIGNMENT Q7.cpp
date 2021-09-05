#include<iostream>
using namespace std;

//The program is that takes n elements from the user and displays the second largest element of an array.


int main (){
    int A[50], n, i, j, x;
    cout << "Enter size of array : "<<endl;
    cin >> n;
    cout << "Enter elements of array : "<<endl;
    
    for (i = 0; i < n; i++)
    cin >> A[i]; 
    for (i = 0; i < n; i++)
    {
    for (j = i + 1; j < n; j++)
    {
    if (A[i] < A[j])
    {
    x = A[i];
    A[i] = A[j];
    A[j] = x;
    }
    }
    }
    
    cout << "Second largest number : " << A[1]<<endl;
    
    return 0;
}
