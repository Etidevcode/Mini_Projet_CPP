#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    string name;
    int age {0};
    double hourly_wage {23.5};
    
    
    cin >> name;
    cin >> age;
    
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}

using namespace std;

int main(){
    employee_profile();
    return 0;
}
