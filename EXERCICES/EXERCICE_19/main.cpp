#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result = 0;
    
    if (vec.size() < 2) {
        return 0;
    }
    
    for (size_t i=0; i < vec.size() - 1; ++i){
        for (size_t j=i+1; j < vec.size(); ++j){
            result += vec.at(i) * vec.at(j);
        }
    }
    
     
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main(){
    
    // Test cases
    vector<int> vec1 = {1, 2, 3};
    cout << "Result for {1, 2, 3}: " << calculate_pairs(vec1) << endl; // Output: 11

    vector<int> vec2 = {2, 4, 6, 8};
    cout << "Result for {2, 4, 6, 8}: " << calculate_pairs(vec2) << endl; // Output: 140

    vector<int> vec3 = {5};
    cout << "Result for {5}: " << calculate_pairs(vec3) << endl; // Output: 0

    vector<int> vec4; // Empty vector
    cout << "Result for {}: " << calculate_pairs(vec4) << endl; // Output: 0
    
    return 0;
}
