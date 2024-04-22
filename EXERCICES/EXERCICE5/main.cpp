#include <iostream> 
#include <vector>
using namespace std;

vector<int> use_array() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;
    
    //-----WRITE YOUR CODE ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}

int main() {
    // Calling the method to get the vector
    vector<int> result = use_array();
    
    // Printing the elements of the vector
    for (size_t i = 0; i < result.size(); ++i) { // Use size_t for the loop counter variable
        cout << "Element " << i << ": " << result[i] << endl; // Use std::cout and std::endl
    }
    
    return 0;
}
