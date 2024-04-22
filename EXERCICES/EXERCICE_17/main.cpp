#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{0};
    size_t index{0};
    
    while (index < vec.size() && vec.at(index) != -99){
        
        ++count;
        ++index;
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}



int main(){
    
    // Test the count_numbers function
    vector<int> testVec = {10, 20, 30, 40, -99, 50, 60};
    cout << "Nombre de nombres jusqu'à rencontrer -99 :" << count_numbers(testVec) << endl;
 
    return 0;
}
