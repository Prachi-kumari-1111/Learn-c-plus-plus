// C++ Program to demonstrate
// working of any_of()
#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main()
{
    // Initializing the array
    int ar[6] = { 2, 6, 7, 10, 8, 4 };
 
    // Checking if any odd number is
    // present or not in the array
    if (any_of(ar, ar + 6,
               [](int x) { return x % 2 != 0; })) {
        cout << "There exists odd number in the array";
    }
    else {
        cout << "No odd number found in the array";
    }
 
    return 0;
}