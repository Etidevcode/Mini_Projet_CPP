#include <iostream>
using namespace std;

void can_you_drive(int age) {
    
    const int driving_age {16};
    //----WRITE YOUR CODE BELOW THIS LINE----
    if (age >= driving_age){
        cout << "Yes - you can drive!";
    } else {
        cout << "Sorry, come back in " << driving_age - age << " years";
    }
 
    //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main(){
    can_you_drive(13);
    return 0;
}
