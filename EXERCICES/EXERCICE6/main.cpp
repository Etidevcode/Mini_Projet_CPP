#include <iostream>
#include <vector>
using namespace std;

vector<int> use_vector() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    vector<int> vec {10, 20, 30, 40, 50}; 
    
    vec.at(0) = 100; // Accessing and modifying elements
    vec.at(4) = 1000;
    
    return vec; // Returning the modified vector
}

int main() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    vector<int> result = use_vector(); // Calling the function to get the vector
    
    // Printing the elements of the vector
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "Element " << i << ": " << result[i] << endl;
    }
    
    return 0;
}
