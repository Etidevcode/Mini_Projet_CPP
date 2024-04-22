#include <iostream>
#include <string>

int sum_of_digits(int n) {
    // Write your code below this line
    
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
    
    // Write your code above this line
}

using namespace std;

int main(){
    int result1 = sum_of_digits(1234);
    int result2 = sum_of_digits(9999);
    int result3 = sum_of_digits(5678);
    int result4 = sum_of_digits(1000);
    cout << result1 << "\n" << result2 << "\n" << result3 << "\n" << result4;
    return 0;
}
