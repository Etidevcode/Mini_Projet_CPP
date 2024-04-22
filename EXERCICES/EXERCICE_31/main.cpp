#include <iostream>

using namespace std;

// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void swapPointers(int* ptr1, int* ptr2) {
    //-- Write your code below this line
    
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    
    
    
    //-- Write your code above this line
}

// Function prototype
void swapPointers(int* ptr1, int* ptr2);

int main() {
    int x = 10, y = 20;
    int* ptr1 = &x;
    int* ptr2 = &y;

    // Before swapping
    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Call the function to swap pointers
    swapPointers(ptr1, ptr2);

    // After swapping
    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}