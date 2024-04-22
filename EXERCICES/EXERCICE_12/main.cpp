#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    const int driving_age{16};
    
    if (age >= driving_age){
        if (has_car){
            cout << "Yes - you can drive!";
        } else {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    } else {
        cout << "Sorry, come back in " << driving_age - age << " years and be sure you own a car when you come back.";
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main(){
    can_you_drive(14, false);
    return 0;
}
