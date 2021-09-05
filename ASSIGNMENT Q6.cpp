#include <iostream>
using namespace std;

//Print this pattern using for loop
//           *
//          * *
//         * * *
//        * * * *
//       * * * * *


int main() {
    int a, b, s, n=5;
    
    for(a = 1; a <= n; a++)
    {
        for(s = a; s < n; s++)
        cout << " ";
        for(b = 1; b <= a; b++)
        cout << "* ";
        cout << "\n";
     }
return 0;
}
