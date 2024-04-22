#include <vector>
#include <iostream>
using namespace std;

/*******************************************************
 * Write your code in the provided area.
 * 
 * This function should use a do while loop to iterate over
 * the automatically provided vector (vec) of characters looking 
 * for the first occurrence of a lowercase English vowel ('a','e','i','o','u').
 * 
 * If a vowel is found, you should display to cout:
 * 
 * "Vowel found: " followed by the vowel that was found.
 * 
 * If no vowel is found in the vector, then you should display to cout:
 * 
 * "No vowel was found"  
 * 
 * For example, below are several examples of vectors and what your output should be:
 * 
 * {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
 * 
 * Please do NOT add std::endl or '\n' to your output statement.
 * *****************************************************/
void find_first_vowel(const std::vector<char>& vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----

    // Check if the vector is empty
    if (vec.empty()) {
        cout << "No vowel was found";
        return;
    }
    
    auto it = vec.begin();
    
    do {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u') {
            cout << "Vowel found: " << *it;
            return;
        }
        
        ++it;
        
    } while (it != vec.end());
    
    cout << "No vowel was found";
 
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    
}

int main(){
    
    // Test cases
    find_first_vowel({'f','r','a','n','k'});  // Output: Vowel found: a
    cout << endl;
    find_first_vowel({'F','R','A','N','K'});  // Output: No vowel was found
    cout << endl;
    find_first_vowel({'h','e','l','l','o'});  // Output: Vowel found: e
    cout << endl;
    find_first_vowel({});  // Output: No vowel was found
    cout << endl;
    find_first_vowel({'x','y','z','o'});  // Output: Vowel found: o
    cout << endl;
    
    return 0;
}
