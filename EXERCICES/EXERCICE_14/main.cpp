#include <iostream>

using namespace std;

int calculate_sum() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    int sum {0};
    for (int i = 1; i <= 15; i++){
       if (i % 2 != 0){
           sum += i;
       }
   }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE
    //---- DO NOT MODIFY THE CODE BELOW
    return sum;
}

int main(){
    int result = calculate_sum();
    cout << result;
    return 0;
}
